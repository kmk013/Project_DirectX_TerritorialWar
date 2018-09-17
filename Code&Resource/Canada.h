#pragma once
#include "RGEngine.h"

#include "BackGround.h"
#include "InGameButton.h"
#include "CanadaObject.h"

class Canada : public RGEngine::Scene
{
public:
	Canada();
	~Canada();

	BackGround *background;
	InGameButton *button;
	CanadaObject *land;

	Math::Vector mouse;

	void OnUpdate();
};

