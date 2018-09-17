#pragma once
#include "RGEngine.h"

#include "SoundTest.h"
#include "SpriteTest.h"
#include "TextTest.h"

using namespace RGEngine;

class TestScene : public RGEngine::Scene
{
private:
	SpriteTest *sprite1;
	SpriteTest *sprite2;
	SoundTest *sound;
	TextTest *text;

public:
	TestScene(void);
	~TestScene() override;

public:
	void OnUpdate(void) override;

};

