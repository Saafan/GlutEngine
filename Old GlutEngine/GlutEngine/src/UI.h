#pragma once
#include "Renderer.h"
#include <string>



class UI
{
public:
	UI(std::vector<float> color, std::string text, int* value, std::vector<float> pos);
	UI();
	int* value;
	std::string text;

	std::vector<float> color{ 0.0f, 0.0f, 0.0f };
	std::vector<float> pos{0.0f, 0.0f, 0.0f};

	void SetAttributes(std::vector<float> color, std::string text, int value, std::vector<float> pos);
	void SetText(std::string);
	void SetValue(int* value);

	void Translate(std::vector<float> pos);
	void ChangeColor(std::vector<float> color);

	void Print(float x, float y, char* string);
	void Render();
};