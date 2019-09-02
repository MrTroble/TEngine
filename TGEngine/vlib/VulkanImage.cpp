#include "VulkanImage.hpp"

VkBufferImageCopy vlibBufferImageCopy = {
	0,
	0,
	0,
	{
		VK_IMAGE_ASPECT_COLOR_BIT,
		0,
		0,
		1
	},
	{
		0,
		0,
		0
	},
	{
		0,
		0,
		1
	}
};

VkImageCreateInfo vlibImageCreateInfo = {
	VK_STRUCTURE_TYPE_IMAGE_CREATE_INFO,
	nullptr,
	0,
	VK_IMAGE_TYPE_2D,
	VK_FORMAT_B8G8R8A8_UNORM,
	{
		0,
		0,
		1
	},
	1,
	1,
	VK_SAMPLE_COUNT_1_BIT,
	VK_IMAGE_TILING_OPTIMAL,
	VK_IMAGE_USAGE_SAMPLED_BIT | VK_IMAGE_USAGE_TRANSFER_DST_BIT,
	VK_SHARING_MODE_EXCLUSIVE,
	0,
	nullptr,
	VK_IMAGE_LAYOUT_UNDEFINED
};

VkImageViewCreateInfo vlibImageViewCreateInfo = {
	VK_STRUCTURE_TYPE_IMAGE_VIEW_CREATE_INFO,
	nullptr,
	0,
	VK_NULL_HANDLE,
	VK_IMAGE_VIEW_TYPE_2D,
	VK_FORMAT_UNDEFINED,
	{
		VK_COMPONENT_SWIZZLE_IDENTITY,
		VK_COMPONENT_SWIZZLE_IDENTITY,
		VK_COMPONENT_SWIZZLE_IDENTITY,
		VK_COMPONENT_SWIZZLE_IDENTITY
	},
	{
		VK_IMAGE_ASPECT_COLOR_BIT,
		0,
		1,
		0,
		1
	}
};

VkImageMemoryBarrier vlibImageMemoryBarrier = {
	VK_STRUCTURE_TYPE_IMAGE_MEMORY_BARRIER,
	nullptr,
	0,
	0,
	VK_IMAGE_LAYOUT_UNDEFINED,
	VK_IMAGE_LAYOUT_TRANSFER_DST_OPTIMAL,
	VK_QUEUE_FAMILY_IGNORED,
	VK_QUEUE_FAMILY_IGNORED,
	VK_NULL_HANDLE,
	{
		VK_IMAGE_ASPECT_COLOR_BIT,
		0,
		1,
		0,
		1
	}
};

VkImageBlit vlibImageBlit = {
	{
		VK_IMAGE_ASPECT_COLOR_BIT,
		0,
		0,
		1
	},
	{ {0, 0, 0}, {0, 0, 1} },
	{
		VK_IMAGE_ASPECT_COLOR_BIT,
		0,
		0,
		1
	},
	{ {0, 0, 0}, { 0, 0, 1 }}
};

VkSamplerCreateInfo vlibSamplerCreateInfo = {
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