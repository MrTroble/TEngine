#include "Draw.hpp"

uint32_t image_index;
VkFence fence;
std::vector<VkPipelineStageFlags> stage_flags = { VK_PIPELINE_STAGE_ALL_GRAPHICS_BIT };

void createSemaphores() {
	VkFenceCreateInfo info = {
		VK_STRUCTURE_TYPE_FENCE_CREATE_INFO,
		nullptr,
		0
	};
	vkCreateFence(device, &info, nullptr, &fence);
}

void startdraw() {
	last_result = vkAcquireNextImageKHR(device, swapchain, UINT64_MAX, VK_NULL_HANDLE, fence, &image_index);
	HANDEL_RECREATE(last_result)
	offsets = 0;
}

void submit() {	
	last_result = vkWaitForFences(device, 1, &fence, VK_TRUE, UINT64_MAX);
	HANDEL(last_result)
	last_result = vkResetFences(device, 1, &fence);
	HANDEL(last_result)
	VkSubmitInfo submit_info = {
		VK_STRUCTURE_TYPE_SUBMIT_INFO,
		nullptr,
		0,
	    nullptr,
		stage_flags.data(),
		1,
		&command_buffers[image_index],
		0,
		nullptr
	};
	last_result = vkQueueSubmit(queue, 1, &submit_info, fence);
	HANDEL_RECREATE(last_result)
}

void present() {
	last_result = vkWaitForFences(device, 1, &fence, VK_TRUE, UINT64_MAX);
	HANDEL(last_result)
	last_result = vkResetFences(device, 1, &fence);
	HANDEL(last_result)
	VkPresentInfoKHR present_info = {
		VK_STRUCTURE_TYPE_PRESENT_INFO_KHR,
		nullptr,
		0,
		nullptr,
		1,
		&swapchain,
		&image_index,
		nullptr
	};
	last_result = vkQueuePresentKHR(queue, &present_info);
	HANDEL_RECREATE(last_result);
}

void destroySemaphores() {
	last_result = vkDeviceWaitIdle(device);
	HANDEL(last_result)

	vkDestroyFence(device, fence, nullptr);
}