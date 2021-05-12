#pragma once

#include "../../public/Module.hpp"
#include "GameGraphicsModule.hpp"
#include <vector>
#include <array>
#include <string>

#ifndef APPLICATION_NAME
#define APPLICATION_NAME "unknown"
#endif

#ifndef APPLICATION_VERSION
#define APPLICATION_VERSION VK_MAKE_VERSION(1, 0, 0)
#endif

namespace tge::graphics {

uint8_t *loadShaderPipeAndCompile(std::vector<std::string> &shadernames);

APILayer *getNewVulkanModule(GameGraphicsModule* mod);

} // namespace tge::graphics
