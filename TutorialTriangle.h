#pragma once
#include <vulkan/vulkan.h>
#include <iostream>
#include <stdexcept>
#include <functional>
#include <cstdlib>

#define GLFW_INCLUDE_VULKAN
#include <GLFW/glfw3.h>

#define GLM_FORCE_RADIANS
#define GLM_FORCE_DEPTH_ZERO_TO_ONE
#include <glm/vec4.hpp>
#include <glm/mat4x4.hpp>
namespace Tutorial1
{
	class TriangleApplication
	{
	public:
		void runApplication();
	private:
		void initVulkan();
		void mainLoop();
		void cleanUp();
		void createInstance();
	private:
		VkInstance m_vulkanInstance;
	};
}