#pragma once
#include "RGEngine.h"

#include "SpriteTest.h"
#include "Player.h"
#include "Button.h"
class Arrow : public RGEngine::GameObject
{
public:
	Arrow();
	~Arrow();

	SpriteTest *arrow;
	Player *player;
	Button *button;

	int playernum;

	void OnUpdate(Math::Vector mouse);
};
