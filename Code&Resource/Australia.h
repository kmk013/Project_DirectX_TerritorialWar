#pragma once
#include "RGEngine.h"

#include "BackGround.h"
#include "InGameButton.h"
#include "AustraliaObject.h"

class Australia : public RGEngine::Scene
{
public:
	Australia();
	~Australia();

	BackGround *background;
	InGameButton *button;
	AustraliaObject *land;

	Math::Vector mouse;

	void OnUpdate();
};

