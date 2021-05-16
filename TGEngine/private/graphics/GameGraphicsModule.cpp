#include "../../public/graphics/GameGraphicsModule.hpp"

#include <array>

namespace tge::graphics {

std::vector<Material> materials;

main::Error GameGraphicsModule::init() { return main::Error::NONE; }

void GameGraphicsModule::destroy() { materials.clear(); }

WindowProperties GameGraphicsModule::getWindowProperties() {
  return WindowProperties();
}

} // namespace tge::graphics