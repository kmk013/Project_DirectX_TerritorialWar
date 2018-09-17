#pragma once
#include "RGEngine.h"

using namespace RGEngine;

class TextTest : public RGEngine::GameObject
{
public:
	Components::TextRenderer *text;

public:
	TextTest(std::string font, unsigned int size, unsigned int weight = FW_NORMAL);
	~TextTest() override;

};

