#pragma once

#include <vector>
#define STB_TRUETYPE_IMPLEMENTATION
#define STBTT_STATIC
#include "../stb/stb_truetype.h"
#include "../pipeline/buffer/Memory.hpp"

namespace tge::fnt {

		constexpr uint32_t FONT_TEXTURE_WIDTH = 2000;
		constexpr uint32_t FONT_TEXTURE_HEIGHT = 2000;
		constexpr float FONT_MULTIPLIER = 0.01f;

		struct Font {
			uint32_t material;
			stbtt_bakedchar* charData;
			float fontheight; // Primarily for alignment
		};

		extern std::vector<tge::fnt::Font> fonts;
		extern std::vector<tge::buf::BufferObject> fontBufferObjects;

		const uint32_t createStringActor(const Font* pFont, const char** pInputStrings, const uint32_t size, const glm::mat4* tranforms);

		void destroyFontresources();

		void destroyStrings(const uint32_t destroy);
}
