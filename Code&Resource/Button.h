#pragma once
#include "RGEngine.h"

#include "Player.h"
#include "InGameButton.h"
#include "HpBar.h"

class Button : public RGEngine::GameObject
{
public:
	Button();
	~Button();

	Player *player;
	InGameButton *button;
	HpBar *hpbar;
	SpriteTest *bar;
	SpriteTest *bar_b;

	bool selectButtonClick;
	bool moveButtonClick;
	bool attackButtonClick;
	bool defendButtonClick;
	bool passButtonClick;
	bool gunButtonClick;
	bool bowButtonClick;
	bool swordButtonClick;

	void selectButton();
	void moveButton();
	void attackButton();
	void defendButton();
	void passButton();
	void gunButton();
	void bowButton();
	void swordButton();
};

