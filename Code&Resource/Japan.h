#pragma once
#include "RGEngine.h"

#include "SoundTest.h"

#include "Player.h"
#include "Enemy.h"
#include "InGameButton.h"
#include "Button.h"
#include "JapanObject.h"
#include "BackGround.h"
#include "HpBar.h"
#include "AnimTest.h"
#include "Arrow.h"
#include "TextTest.h"
#include "MainScene.h"

class Japan : public RGEngine::Scene
{
public:
	Japan();
	~Japan();

	Player *player;
	Enemy *enemy;
	InGameButton *button;
	JapanObject *land;
	BackGround *background;
	Button *button2;
	HpBar *hpbar;
	TextTest *turn;
	//Arrow *arrow;

	Math::Vector mouse;

	int num;
	int num2;

	void OnUpdate(void);
};

