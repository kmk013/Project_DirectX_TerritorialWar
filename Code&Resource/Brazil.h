#pragma once
#include "RGEngine.h"

#include "BackGround.h"
#include "InGameButton.h"
#include "BrazilObject.h"

class Brazil : public RGEngine::Scene
{
public:
	Brazil();
	~Brazil();

	BackGround *background;
	InGameButton *button;
	BrazilObject *land;

	Math::Vector mouse;

	void OnUpdate();
};

