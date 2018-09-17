#pragma once
#include "RGEngine.h"

#include "SpriteTest.h"
#include "Player.h"
#include "Enemy.h"

class HpBar : public RGEngine::GameObject
{
public:
	HpBar();
	~HpBar();

	SpriteTest *hpbar[2][3];
	SpriteTest *hpbar_h[2][3];
	Player *player;
	Enemy *enemy;

	void OnUpdate();
};

