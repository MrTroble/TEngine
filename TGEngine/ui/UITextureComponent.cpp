#include "UITextureComponent.hpp"

namespace tg_ui {

	UITextureComponent::UITextureComponent(Texture * tex)
	{
		this->texture = tex;
		this->color = glm::vec4(1, 1, 1, 1);
	}

	UITextureComponent::UITextureComponent(Texture * tex, glm::vec4 color)
	{
		this->texture = tex;
		this->color = color;
	}
	void UITextureComponent::draw(IndexBuffer * index, VertexBuffer * vertex)
	{
		drawRectangle(glm::vec3(this->parent->local_position, 0.1f), this->color, this->texture->index, this->parent->extent.x, this->parent->extent.y, vertex, index);
	}
}