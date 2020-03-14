#include "2DCamera.hpp"
#include "../../pipeline/buffer/UniformBuffer.hpp"
#include "../../pipeline/window/Window.hpp"

using namespace tge::buf;

void tge::gmc::setTopDownCamera(TopDownCamera camera) {
	glm::mat4 mat =
	{ tge::win::mainWindowHeight / (float)tge::win::mainWindowWidth, 0, 0, camera.positionx,
		0, 1, 0, camera.positiony,
		0, 0, 0.2, 0,
		0, 0, 0, 1
	};
	fillUniformBuffer(TRANSFORM_BUFFER, &mat, sizeof(glm::mat4));
}
