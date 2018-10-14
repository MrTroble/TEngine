#include "TGEngine.hpp"

using namespace std;

void initTGEngine(App *app) {
	nio::queryCWD();
	properties = new prop::Properties();
	prop::readProperties("Properties.xml", properties);

	Texture no_texture = {};
	no_texture.width = 1;
	no_texture.height = 1;
	no_texture.image_data = new stbi_uc[4];
	no_texture.image_data[0] = 0;
	no_texture.image_data[1] = 0;
	no_texture.image_data[2] = 0;
	no_texture.image_data[3] = 0;
	createTexture(&no_texture);

	createWindowClass();
	createWindow(&app->main_window);
	createInstance({
		#ifdef DEBUG 
		"VK_LAYER_LUNARG_standard_validation",
		#endif
		"VK_LAYER_VALVE_steam_overlay",
		"VK_LAYER_NV_optimus"
		}, { });

	createWindowSurfaces();
	createDevice({}, {});
	prePipeline();
	createDepthTest();
	createRenderpass();
	createShader();
	createShaderInput(0, offsetof(TGVertex, position), VK_FORMAT_R32G32B32_SFLOAT);
	createShaderInput(1, offsetof(TGVertex, color), VK_FORMAT_R32G32B32A32_SFLOAT);
	createShaderInput(2, offsetof(TGVertex, uv), VK_FORMAT_R32G32_SFLOAT);
	createShaderInput(3, offsetof(TGVertex, color_only), VK_FORMAT_R32_UINT);

	uniform_scale_buffer = {
		sizeof(glm::vec2),
		{ VK_SHADER_STAGE_VERTEX_BIT }
	};
	createUniformBuffer(&uniform_scale_buffer);
	initAllTextures();

	Camera cam;
	cam.speed = 0.001f;
	createCamera(&cam);

	createPipelineLayout();
	createPipeline();
	createSwapchain();
	createFramebuffer();

	VertexBuffer main_buffer = {};
	main_buffer.max_vertex_count = 500000;
	createVertexBuffer(&main_buffer);

	allocateAllBuffers();
	createAllDescriptorSets();

	if (app->main_window.height > app->main_window.width) {
		fillUniformBuffer(&uniform_scale_buffer, &glm::vec2(1, (float)((float)app->main_window.width / (float)app->main_window.height)), sizeof(glm::vec2));
	}
	else if (app->main_window.height < app->main_window.width) {
		fillUniformBuffer(&uniform_scale_buffer, &glm::vec2((float)((float)app->main_window.height / (float)app->main_window.width), 1), sizeof(glm::vec2));
	}
	else {
		fillUniformBuffer(&uniform_scale_buffer, &glm::vec2(1.0f, 1.0f), sizeof(glm::vec2));
	}
	cam.updateCamera();

	createCommandBuffer();
	singleTimeCommand();
	createSemaphores();

	addTextures();

	while (true) {
		app->main_window.pollevents();
		if (app->main_window.close_request) {
			break;
		}
		if (app->main_window.minimized) {
			continue;
		}
		startdraw();
		main_buffer.start();
		app->drawloop(&main_buffer);
		main_buffer.end();
		last_result = vkDeviceWaitIdle(device);
		HANDEL(last_result)
		fillCommandBuffer(&main_buffer, image_index);
		submit();
		present();
	}

	destroyAllTextures();
	destroySemaphores();
	destroyCommandBuffer();
	destroyDescriptors();
	destroyMemory();
	destroyFrameBuffer();
	destroySwapchain();
	destroyPipeline();
	destroyShaders();
	destroyRenderPass();
	destroyDepthTest();
	destroyDevice();
	destroyWindows();
	destroyInstance();
}
