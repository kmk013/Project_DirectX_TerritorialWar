#include "Button.h"

Button::Button()
{
	selectButtonClick = false;
	moveButtonClick = false;
	attackButtonClick = false;
	defendButtonClick = false;
	passButtonClick = false;
	gunButtonClick = false;
	bowButtonClick = false;
	swordButtonClick = false;

	player = new Player();
	button = new InGameButton();
	hpbar = new HpBar();

	bar = new SpriteTest("resources/UI/Bar.png");
	bar->position.SetVector(0, 530);
	bar_b = new SpriteTest("resources/UI/Bar_b.png");
	bar_b->position.SetVector(0, 530);
}


Button::~Button()
{
}

void Button::selectButton()
{
	if (GetAsyncKeyState(9))
	{
		if (selectButtonClick == false)
		{
			cout << "selectclick" << endl;
			selectButtonClick = true;
		}
	}
}

void Button::moveButton()
{
	if (GetAsyncKeyState('q') || GetAsyncKeyState('Q'))
	{
		if (moveButtonClick == false)
		{
			cout << "moveclick" << endl;
			moveButtonClick = true;
		}
	}
}

void Button::attackButton()
{
	if (GetAsyncKeyState('w') || GetAsyncKeyState('W'))
	{
		if (attackButtonClick == false)
		{
			cout << "attackclick" << endl;
			attackButtonClick = true;
		}
	}
}

void Button::defendButton()
{
	if (GetAsyncKeyState('e') || GetAsyncKeyState('E'))
	{
		if (defendButtonClick == false)
		{
			cout << "defendclick" << endl;
			defendButtonClick = true;
		}
	}
}

void Button::passButton()
{
	if (GetAsyncKeyState('r') || GetAsyncKeyState('R'))
	{
		if (passButtonClick == false)
		{
			cout << "passclick" << endl;
			passButtonClick = true;
		}
	}
}

void Button::gunButton()
{
	if (GetAsyncKeyState(49) || GetAsyncKeyState('!'))
	{
		if (gunButtonClick == false)
		{
			cout << "moveclick" << endl;
			gunButtonClick = true;
		}
	}
}

void Button::bowButton()
{
	if (GetAsyncKeyState(50) || GetAsyncKeyState('@'))
	{
		if (bowButtonClick == false)
		{
			cout << "moveclick" << endl;
			bowButtonClick = true;
		}
	}
}

void Button::swordButton()
{
	if (GetAsyncKeyState(51) || GetAsyncKeyState('#'))
	{
		if (swordButtonClick == false)
		{
			cout << "moveclick" << endl;
			swordButtonClick = true;
		}
	}
}