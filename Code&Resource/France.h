#pragma once
#include "RGEngine.h"

#include "BackGround.h"
#include "InGameButton.h"
#include "FranceObject.h"

class France : public RGEngine::Scene
{
public:
	France();
	~France();

	BackGround *background;
	InGameButton *button;
	FranceObject *land;

	Math::Vector mouse;

	void OnUpdate();
};

