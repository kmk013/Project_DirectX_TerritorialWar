#pragma once
#include "RGEngine.h"

#include "BackGround.h"
#include "InGameButton.h"
#include "SouthpoleObject.h"

class Southpole : public RGEngine::Scene
{
public:
	Southpole();
	~Southpole();

	BackGround *background;
	InGameButton *button;
	SouthpoleObject *land;

	Math::Vector mouse;

	void OnUpdate();
};

