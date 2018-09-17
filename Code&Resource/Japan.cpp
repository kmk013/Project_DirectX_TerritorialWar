#include "Japan.h"


Japan::Japan()
{
	num = 0;
	num2 = 0;

	player = new Player();
	enemy = new Enemy();
	button = new InGameButton();
	land = new JapanObject();
	background = new BackGround();
	button2 = new Button();
	hpbar = new HpBar();

	turn = new TextTest("BMJUA_ttf.ttf", 60);
	turn->text->text = "Turn 1";
	turn->position.SetVector(425, 0);

	PushBackGameObject(background->background[0]);

	for (int i = 0; i < 2; i++)
	{
		PushBackGameObject(land->floor[i]);
	}
	for (int i = 0; i < 2; i++)
	{
		PushBackGameObject(land->house[i]);
	}
	//for (int i = 0; i < 7; i++)
	//{
	//	PushBackGameObject(land->lamp[i]);
	//}
	PushBackGameObject(land->umbrella);
	PushBackGameObject(land->top);
	
	for (int i = 0; i < 6; i++)
	{
		PushBackGameObject(button->ui[i]);
	}

	for (int i = 0; i < 3; i++)
	{
		PushBackGameObject(button->attack[i]);
		button->attack[i]->SetEnabled(false);
	}

	PushBackGameObject(button2->bar);
	PushBackGameObject(button2->bar_b);

	for (int i = 0; i < 3; i++)
	{
		PushBackGameObject(player->player[i]);
	}

	for (int i = 0; i < 3; i++)
	{
		PushBackGameObject(enemy->enemy[i]);
	}

	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			PushBackGameObject(hpbar->hpbar[i][j]);
		}
	}
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			PushBackGameObject(hpbar->hpbar_h[i][j]);
		}
	}

	//PushBackGameObject(land->bridge);

	PushBackGameObject(turn);
}


Japan::~Japan()
{
}

void Japan::OnUpdate(void)
{
	//카메라 이동
	RGInput->GetMouseFromClient(mouse);

	if (mouse.x < 175)
	{
		if (GetCamera()->position.x >= 0) {}
		else
		{
			GetCamera()->position.x += 7.25f;
			for (int i = 0; i < 6; i++)
			{
				button->ui[i]->position.x -= 7.25f;
			}

			for (int i = 0; i < 3; i++)
			{
				button->attack[i]->position.x -= 7.25f;
			}
			turn->position.x -= 7.25f;
			button2->bar->position.x -= 7.25f;
			button2->bar_b->position.x -= 7.25f;
		}
	}
	else if (mouse.x > 825)
	{
		if (GetCamera()->position.x <= -1024) {}
		else
		{
			GetCamera()->position.x -= 7.25f;
			for (int i = 0; i < 6; i++)
			{
				button->ui[i]->position.x += 7.25f;
			}

			for (int i = 0; i < 3; i++)
			{
				button->attack[i]->position.x += 7.25f;
			}
			turn->position.x += 7.25f;
			button2->bar->position.x += 7.25f;
			button2->bar_b->position.x += 7.25f;
		}
	}

	if (player->player[0]->position.x < 400)
	{
		if (GetCamera()->position.x >= 0) {}
		else
		{
			GetCamera()->position.x += 5;
			for (int i = 0; i < 6; i++)
			{
				button->ui[i]->position.x -= 5;
			}

			for (int i = 0; i < 3; i++)
			{
				button->attack[i]->position.x -= 5;
			}
			turn->position.x -= 5;
			button2->bar->position.x -= 5;
			button2->bar_b->position.x -= 5;
		}
	}
	else if (player->player[0]->position.x > 700)
	{
		if (GetCamera()->position.x <= -1024) {}
		else
		{
			GetCamera()->position.x -= 5;
			for (int i = 0; i < 6; i++)
			{
				button->ui[i]->position.x += 5;
			}

			for (int i = 0; i < 3; i++)
			{
				button->attack[i]->position.x += 5;
			}
			turn->position.x += 5;
			button2->bar->position.x += 5;
			button2->bar_b->position.x += 5;
		}
	}

	//ButtonOnUpdate
	button2->moveButton();
	button2->attackButton();
	button2->defendButton();
	button2->passButton();

	//move버튼
	if (button2->moveButtonClick)
		player->playerMove(player->player[num],
			hpbar->hpbar[num2][num],
			hpbar->hpbar_h[num2][num]);

	if (button2->attackButtonClick)
	{
		button2->gunButton();
		button2->bowButton();
		button2->swordButton();

		for (int i = 2; i < 6; i++)
		{
			button->ui[i]->Destroy();
		}
		
		for (int i = 0; i < 3; i++)
		{
			button->attack[i]->SetEnabled(true);
		}
	}

	if (button2->defendButtonClick)
		player->playerDefend(player->player[num],
			hpbar->hpbar[num2][num],
			hpbar->hpbar_h[num2][num]);

	if (button2->passButtonClick)
	{
		num++;
		if (num == 3)
			num2++;

		if (num2 == 2)
		{
			num = 0;
			num2 = 0;

			turn->Destroy();
			turn->text->text = "Turn 2";
		}
		button2->passButtonClick = false;
	}

	if (button2->gunButtonClick)
	{
		player->playerGun(player->player[num],
			hpbar->hpbar[num2][num],
			hpbar->hpbar_h[num2][num]);
	}

	if(button2->bowButtonClick)
		player->playerBow(player->player[num],
			hpbar->hpbar[num2][num],
			hpbar->hpbar_h[num2][num]);

	if(button2->swordButtonClick)
		player->playerSword(player->player[num],
			hpbar->hpbar[num2][num],
			hpbar->hpbar_h[num2][num]);
}