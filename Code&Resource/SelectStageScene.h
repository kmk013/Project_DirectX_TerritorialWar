#pragma once
#include "RGEngine.h"

#include "InGameButton.h"
#include "MainScene.h"

class SelectStageScene : public RGEngine::Scene
{
public:
	SelectStageScene();
	~SelectStageScene();

	InGameButton *button;

	Math::Vector mouse;

	void OnUpdate();
};

