#pragma once
#include "RGEngine.h"

#include "SpriteTest.h"
#include "AnimTest.h"
#include "JapanObject.h"
#include "SoundTest.h"

class Player : public RGEngine::GameObject
{
public:
	Player();
	~Player();
	
	AnimTest *player[3];
	JapanObject *object;

	SoundTest *jump;

	float move_speed;

	float defendXposition;
	float defendYposition;

	void playerMove(AnimTest *player, SpriteTest *hpbar, SpriteTest *hpbar_h);
	void playerDefend(AnimTest *player, SpriteTest *hpbar, SpriteTest *hpbar_h);
	void playerGun(AnimTest *player, SpriteTest *hpbar, SpriteTest *hpbar_h);
	void playerBow(AnimTest *player, SpriteTest *hpbar, SpriteTest *hpbar_h);
	void playerSword(AnimTest *player, SpriteTest *hpbar, SpriteTest *hpbar_h);
};

