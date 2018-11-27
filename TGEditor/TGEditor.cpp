#include "TGEditor.hpp"

Texture tex1;
Texture tex2;
uint32_t mesh;
Font arial;

int main() {
	Editor editor = Editor();
	std::cout << "Starting Editor" << std::endl;
	initTGEngine(&editor.main_window, &drawloop, &init);
	std::cout << "Clean exit! Bye :wave:!" << std::endl;
	return 0;
}

void drawLineH(TGVertex start, float length, VertexBuffer* buffer) {
	drawRectangle(start, length, 0.002, buffer);
	drawRectangle(start, -length, 0.002, buffer);
}

void drawLineV(TGVertex start, float length, VertexBuffer* buffer) {
	drawRectangle(start, 0.002, length, buffer);
	drawRectangle(start, 0.002, -length, buffer);
}

void drawGrid(VertexBuffer* buffer) {
	for (uint32_t i = 0; i < 41; i++) {
		drawLineH({ { 0, -2 + 0.1 * i, 0 }, { 0, 0, 0, 1}, {0, 0}, COLOR_ONLY }, 2, buffer);
		drawLineV({ { -2 + 0.1 * i, 0, 0 },{ 0, 0, 0, 1 },{ 0, 0 }, COLOR_ONLY }, 2, buffer);
	}
	drawRectangleZ({ { 0, 0, 0.15 },{ 1, 0, 0, 1 }, { 0, 0 }, COLOR_ONLY }, 0.002, 0.15, buffer);
	drawRectangleZ({ { 0, 0, 0.15 },{ 1, 0, 0, 1 }, { 0, 0 }, COLOR_ONLY }, -0.002, 0.15, buffer);
	drawRectangle({ { 0, 0.15, 0},{ 0, 1, 0, 1 }, { 0, 0 }, COLOR_ONLY }, 0.002, 0.15, buffer);
	drawRectangle({ { 0, 0.15, 0},{ 0, 1, 0, 1 }, { 0, 0 }, COLOR_ONLY }, -0.002, 0.15, buffer);
	drawRectangle({ { 0.15, 0, 0 },{ 0, 0, 1, 1 },{ 0, 0 }, COLOR_ONLY }, 0.15, 0.002, buffer);
	drawRectangle({ { 0.15, 0, 0 },{ 0, 0, 1, 1 },{ 0, 0 }, COLOR_ONLY }, 0.15, -0.002, buffer);
}

void init() {
	arial = {
	    "resource\\arial.ttf"
	};
	loadfont(&arial);

	mesh = load("resource\\lul.fbx");

	tex1 = {
		"resource\\ODST_Helmet.png"
	};
	tex2 = {
		"resource\\LogoTM.png"
	};
	createTexture(&tex1);
	createTexture(&tex2);
}

void drawloop(IndexBuffer* ibuffer, VertexBuffer* vbuffer)
{
	ibuffer->addIndex(0);
	ibuffer->addIndex(1);
	ibuffer->addIndex(2);
	
	vbuffer->add({
		{-1, -1, 0},
		{1, 0, 0, 1},
		{0, 0},
		COLOR_ONLY
	});
	vbuffer->add({
	    {1, 0, 0},
	    {1, 0, 0, 1},
	    {0, 0},
	    COLOR_ONLY
	});
	vbuffer->add({
		{0, 1, 0},
		{1, 0, 0, 1},
		{0, 0},
		COLOR_ONLY
	});
	//drawGrid(buffer);
	//drawRectangleWithTexture({ {0.2, 0.2, 0.2},  { 1, 1, 1, 1}, {0, 0}, tex2.index }, 0.3, 0.3, buffer);
	//drawRectangleWithTexture({ {0, 0, 0},  { 1, 1, 1, 1}, {0, 0}, tex2.index }, 0.3, 0.3, buffer);
	//arial.drawString({ {0, 0, -0.3},  { 1, 0, 0, 1} }, "Hallo Welt!", buffer);
	//FBX_Dictionary::addToDraw(buffer);
}
