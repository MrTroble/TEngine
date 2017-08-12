#pragma once

#include "stdbase.h"
#include "Application.h"

namespace Pipeline {

	using namespace std;

	struct Device {
		VkFormat prefered_format;
		VkPresentModeKHR present_mode;
		VkPhysicalDeviceProperties* property;
		vector<VkPhysicalDevice> physical_devices;
		VkSurfaceCapabilitiesKHR* khr_capabilities;
		VkPhysicalDevice* currentPhysicalDevice;
		VkColorSpaceKHR color_space;
		VkDevice* device;
		Application* app;
	};

	/*
	 * Creates a Device
	 */
	void createDevice(Device* dev);

	/*
	 * Destroys the Device
	 */
	void destroyDevice(Device* dev);
}