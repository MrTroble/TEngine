#include "Texturebuffer.hpp"

std::vector<Texture*> textures;
Descriptor textureDescriptor;
VkSampler imageSampler;

using namespace tge::nio;

Texture::Texture(char* textureName) : textureName(textureName) {
	ASSERT_NONE_NULL_DB(textureName, "File name null", TG_ERR_DB_NULLPTR)
	ASSERT_NONE_NULL_DB(*textureName == 0, "File name null [points to an empty string]", TG_ERR_DB_NULLPTR)
	textures.push_back(this);
}

Texture::Texture(uint8_t* data, int width, int height) {
	textures.push_back(this);
	this->imageData = data;
	this->width = width;
	this->height = height;
}

void Texture::initTexture()
{
	// Load texture if not build in (textureName == nulptr)
	if (this->textureName) {
		File file = open(this->textureName, "rb");
		this->imageData = stbi_load_from_file(file, &this->width, &this->height, &this->channel, STBI_rgb_alpha);
	}

	// Imageview create parameters
	vlib_image_create_info.extent.width = this->width;
	vlib_image_create_info.extent.height = this->height;

	// Mipmaplevels
	if (this->miplevels == AUTO_MIPMAP)
		this->miplevels = (uint32_t)floor(log2(math::u_max(vlib_image_create_info.extent.width, math::u_max(vlib_image_create_info.extent.height, vlib_image_create_info.extent.depth)))) + 1;
	vlib_image_create_info.mipLevels = this->miplevels;

	this->vulkanTexture.initVulkan();
	void* memory = this->vulkanTexture.map(this->width + this->height * 4);
	memcpy(memory, this->imageData, this->width * this->height * 4);
	this->vulkanTexture.unmap();

	// Destroy unneeded resources
	if (this->textureName) {
		stbi_image_free(this->imageData);
	}
	else {
		delete[] this->imageData;
	}
}

void Texture::generateMipMaps(VkCommandBuffer buffer)
{
	vlib_image_memory_barrier.subresourceRange.baseMipLevel = 0;
	vlib_image_memory_barrier.subresourceRange.levelCount = this->miplevels;

	vlib_buffer_image_copy.imageExtent.width = this->width;
	vlib_buffer_image_copy.imageExtent.height = this->height;

	this->vulkanTexture.queueLoading(buffer);

	vlib_image_memory_barrier.subresourceRange.levelCount = 1;

	this->vulkanTexture.generateMipmaps(buffer);
}

int Texture::getWidth()
{
	return this->width;
}

int Texture::getHeight()
{
	return this->height;
}

void VulkanTexture::updateDescriptor() {
	textureDescriptor.updateImageInfo(imageSampler, this->imageView);
}

void VulkanTexture::queueLoading(VkCommandBuffer buffer)
{
	// Copys the buffer to the image
	ADD_IMAGE_MEMORY_BARRIER(buffer, VK_IMAGE_LAYOUT_UNDEFINED, VK_IMAGE_LAYOUT_TRANSFER_DST_OPTIMAL, this->image, 0, VK_ACCESS_TRANSFER_WRITE_BIT, VK_PIPELINE_STAGE_TOP_OF_PIPE_BIT, VK_PIPELINE_STAGE_TRANSFER_BIT)

	vkCmdCopyBufferToImage(
		buffer,
		this->buffer,
		this->image,
		VK_IMAGE_LAYOUT_TRANSFER_DST_OPTIMAL,
		1,
		&vlib_buffer_image_copy
	);
}

void VulkanTexture::generateMipmaps(VkCommandBuffer buffer)
{
	// TODO Fix this mess
	uint32_t mipwidth = vlib_buffer_image_copy.imageExtent.width, mipheight = vlib_buffer_image_copy.imageExtent.height, mipmapLevels = vlib_image_memory_barrier.subresourceRange.levelCount;

	for (size_t i = 1; i < mipmapLevels; i++)
	{
		vlib_image_memory_barrier.subresourceRange.baseMipLevel = i - 1;
		ADD_IMAGE_MEMORY_BARRIER(buffer, VK_IMAGE_LAYOUT_TRANSFER_DST_OPTIMAL, VK_IMAGE_LAYOUT_TRANSFER_SRC_OPTIMAL, this->image, VK_ACCESS_TRANSFER_WRITE_BIT, VK_ACCESS_TRANSFER_READ_BIT, VK_PIPELINE_STAGE_TRANSFER_BIT, VK_PIPELINE_STAGE_TRANSFER_BIT)

		vlib_image_blit.srcSubresource.mipLevel = i - 1;
		vlib_image_blit.dstSubresource.mipLevel = i;
		vlib_image_blit.srcOffsets[1].x = mipwidth;
		vlib_image_blit.srcOffsets[1].y = mipheight;
		vlib_image_blit.dstOffsets[1].x = mipwidth > 1 ? mipwidth / (uint32_t)2 : 1;
		vlib_image_blit.dstOffsets[1].y = mipheight > 1 ? mipheight / (uint32_t)2 : 1;
		vkCmdBlitImage(buffer, this->image, VK_IMAGE_LAYOUT_TRANSFER_SRC_OPTIMAL, this->image, VK_IMAGE_LAYOUT_TRANSFER_DST_OPTIMAL, 1, &vlib_image_blit, VK_FILTER_LINEAR);

		ADD_IMAGE_MEMORY_BARRIER(buffer, VK_IMAGE_LAYOUT_TRANSFER_SRC_OPTIMAL, VK_IMAGE_LAYOUT_SHADER_READ_ONLY_OPTIMAL, this->image, VK_ACCESS_TRANSFER_WRITE_BIT, VK_ACCESS_SHADER_READ_BIT, VK_PIPELINE_STAGE_TRANSFER_BIT, VK_PIPELINE_STAGE_FRAGMENT_SHADER_BIT)

		if (mipwidth > 1) mipwidth /= 2;
		if (mipheight > 1) mipheight /= 2;
	}

	if (mipmapLevels > 1) {
		vlib_image_memory_barrier.subresourceRange.baseMipLevel = mipmapLevels - 1;
	}

	ADD_IMAGE_MEMORY_BARRIER(buffer, VK_IMAGE_LAYOUT_TRANSFER_DST_OPTIMAL, VK_IMAGE_LAYOUT_SHADER_READ_ONLY_OPTIMAL, this->image, VK_ACCESS_TRANSFER_WRITE_BIT, VK_ACCESS_SHADER_READ_BIT, VK_PIPELINE_STAGE_TRANSFER_BIT, VK_PIPELINE_STAGE_FRAGMENT_SHADER_BIT)
}

void initAllTextures() {
	// TODO per texture sampler ?
	// Maybe a default sampler + custome sampler?
	// Maybe separeted  functions?
	VkSamplerCreateInfo sampler_create_info = {
		VK_STRUCTURE_TYPE_SAMPLER_CREATE_INFO,
		nullptr,
		0,
		VK_FILTER_LINEAR,
		VK_FILTER_LINEAR,
		VK_SAMPLER_MIPMAP_MODE_LINEAR,
		VK_SAMPLER_ADDRESS_MODE_CLAMP_TO_EDGE,
		VK_SAMPLER_ADDRESS_MODE_CLAMP_TO_EDGE,
		VK_SAMPLER_ADDRESS_MODE_CLAMP_TO_EDGE,
		0,
		VK_TRUE,
		16.0f,
		VK_TRUE,
		VK_COMPARE_OP_ALWAYS,
		0,
		10,
		VK_BORDER_COLOR_FLOAT_TRANSPARENT_BLACK,
		VK_FALSE
	};
	last_result = vkCreateSampler(device, &sampler_create_info, nullptr, &imageSampler);
	HANDEL(last_result)
	//
	
	textureDescriptor = Descriptor(VK_SHADER_STAGE_FRAGMENT_BIT, VK_DESCRIPTOR_TYPE_COMBINED_IMAGE_SAMPLER, 2);

	vlib_image_create_info.usage = VK_IMAGE_USAGE_SAMPLED_BIT | VK_IMAGE_USAGE_TRANSFER_DST_BIT | VK_IMAGE_USAGE_TRANSFER_SRC_BIT;
	vlib_image_create_info.samples = VK_SAMPLE_COUNT_1_BIT;
	vlib_image_view_create_info.subresourceRange.aspectMask = VK_IMAGE_ASPECT_COLOR_BIT;

	for each(Texture* ptr in textures) {
		ptr->initTexture();
	}
}

void destroyAllTextures() {
	last_result = vkDeviceWaitIdle(device);
	HANDEL(last_result)

	vkDestroySampler(device, imageSampler, nullptr);
	for each(Texture* tex in textures) {
		tex->vulkanTexture.destroy();
	}
}

void VulkanTexture::initVulkan()
{
	vlib_image_create_info.format = this->imageFormat; // TODO Auto querry

	// TODO FIX THIS MESS
	// TODO AUTO QUERRY
	VkImageFormatProperties imageFormatProperties;
	last_result = vkGetPhysicalDeviceImageFormatProperties(used_physical_device, vlib_image_create_info.format,
	vlib_image_create_info.imageType, vlib_image_create_info.tiling, vlib_image_create_info.usage, vlib_image_create_info.flags, &imageFormatProperties);
	HANDEL(last_result)
	//
	
	// Image
	last_result = vkCreateImage(device, &vlib_image_create_info, nullptr, &this->image);
	HANDEL(last_result)

	QUERRY_IMAGE_REQUIREMENTS(this->image, vlib_device_local_memory_index)
	last_result = vkAllocateMemory(device, &vlib_buffer_memory_allocate_info, nullptr, &this->imageMemory);
	HANDEL(last_result)

	last_result = vkBindImageMemory(device, this->image, this->imageMemory, 0);
	HANDEL(last_result)

	// Buffer
	last_result = vkCreateBuffer(device, &vlib_buffer_create_info, nullptr, &this->buffer);
	HANDEL(last_result)

	QUERRY_BUFFER_REQUIREMENTS(this->buffer, vlib_device_host_visible_coherent_index)
	last_result = vkAllocateMemory(device, &vlib_buffer_memory_allocate_info, nullptr, &bufferMemory);
	HANDEL(last_result)

	last_result = vkBindBufferMemory(device, this->buffer, this->bufferMemory, 0);
	HANDEL(last_result)

	// Imageview
	vlib_image_view_create_info.subresourceRange.levelCount = VK_REMAINING_MIP_LEVELS;
	vlib_image_view_create_info.format = this->imageFormat;
	vlib_image_view_create_info.image = this->image;
	last_result = vkCreateImageView(device, &vlib_image_view_create_info, nullptr, &this->imageView);
	HANDEL(last_result)
}

void* VulkanTexture::map(uint32_t size)
{
	void* memory;
	last_result = vkMapMemory(device, this->bufferMemory, 0, size, 0, &memory);
	HANDEL(last_result);
	return memory;
}

void VulkanTexture::unmap()
{
	vkUnmapMemory(device, this->bufferMemory);
}

void VulkanTexture::dispose()
{
	vkFreeMemory(device, this->bufferMemory, nullptr);
	vkDestroyBuffer(device, this->buffer, nullptr);
}

void VulkanTexture::destroy()
{
	vkDestroyImageView(device, this->imageView, nullptr);
	vkFreeMemory(device, this->imageMemory, nullptr);
	vkDestroyImage(device, this->image, nullptr);
}
