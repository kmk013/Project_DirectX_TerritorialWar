#pragma once
#include "RGEngine.h"

#include "SpriteTest.h"

#include "Player.h"

class InGameButton : public RGEngine::GameObject
{
public:
	InGameButton();
	~InGameButton();

	SpriteTest *select[8];
	SpriteTest *main[4];
	SpriteTest *ui[6];
	SpriteTest *attack[3];

	Player *player;

	void playButton(Math::Vector mouse);
	void endButton(Math::Vector mouse);

	void selectButton(Math::Vector mouse);
};