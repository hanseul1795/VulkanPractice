#include "TutorialTriangle.h"

void Tutorial1::TriangleApplication::runApplication()
{
}

void Tutorial1::TriangleApplication::initVulkan()
{

}

void Tutorial1::TriangleApplication::mainLoop()
{
}

void Tutorial1::TriangleApplication::cleanUp()
{
	vkDestroyInstance(m_vulkanInstance, nullptr);

	//glfwDestroyWindow(window);

	glfwTerminate();
}

void Tutorial1::TriangleApplication::createInstance()
{
	VkApplicationInfo vulkanInfo;
	vulkanInfo.sType = VK_STRUCTURE_TYPE_APPLICATION_INFO;
	vulkanInfo.pApplicationName = "Triangle";
	vulkanInfo.applicationVersion = VK_MAKE_VERSION(1, 0, 0);
	vulkanInfo.pEngineName = "Basic";
	vulkanInfo.engineVersion = VK_MAKE_VERSION(1, 0, 0);
	vulkanInfo.apiVersion = VK_API_VERSION_1_0;

	VkInstanceCreateInfo VulkanCreateInfo = {};
	VulkanCreateInfo.sType = VK_STRUCTURE_TYPE_INSTANCE_CREATE_INFO;
	VulkanCreateInfo.pApplicationInfo = &vulkanInfo;

	uint32_t glfwExtensionCount = 0;
	const char** glfwExtensions;
	
	glfwExtensions = glfwGetRequiredInstanceExtensions(&glfwExtensionCount);

	VulkanCreateInfo.enabledExtensionCount = glfwExtensionCount;
	VulkanCreateInfo.ppEnabledExtensionNames = glfwExtensions;
	VulkanCreateInfo.enabledLayerCount = 0;

	VkResult VulkanResult = vkCreateInstance(&VulkanCreateInfo, nullptr, &m_vulkanInstance);
	if (VulkanResult != VK_SUCCESS)
		throw std::runtime_error("cannot create instance!");
}
