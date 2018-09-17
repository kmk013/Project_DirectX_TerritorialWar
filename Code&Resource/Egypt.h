#pragma once
#include "RGEngine.h"

#include "BackGround.h"
#include "InGameButton.h"
#include "EgyptObject.h"

class Egypt : public RGEngine::Scene
{
public:
	Egypt();
	~Egypt();

	BackGround *background;
	InGameButton *button;
	EgyptObject *land;

	Math::Vector mouse;

	void OnUpdate();
};

