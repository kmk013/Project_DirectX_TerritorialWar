#pragma once
#include "RGEngine.h"

#include "SpriteTest.h"
#include "InGameButton.h"
#include "SoundTest.h"

class MainScene : public RGEngine::Scene
{
public:
	MainScene();
	~MainScene();

	SpriteTest *background;
	InGameButton *button;
	SoundTest *main;

	Math::Vector mouse;

	void OnUpdate();
};

