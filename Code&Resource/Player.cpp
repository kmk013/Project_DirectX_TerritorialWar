#include "Player.h"



Player::Player()
{
	object = new JapanObject();

	player[0] = new AnimTest("resources/Player/Right/Walk/2.png");
	player[0]->position.SetVector(450, 425);

	player[1] = new AnimTest("resources/Player/Right/Walk/2.png");
	player[1]->position.SetVector(550, 425);

	player[2] = new AnimTest("resources/Player/Right/Walk/2.png");
	player[2]->position.SetVector(650, 425);
}


Player::~Player()
{
}

void Player::playerMove(AnimTest *player, SpriteTest *hpbar, SpriteTest *hpbar_h)
{
	player->anim->Reset();
	player->anim->PushBackFrame("resources/Player/Right/Walk/2.png");
	move_speed = deltaTime() * 250;

	if (GetAsyncKeyState(VK_LEFT))
	{
		if (player->position.x <= 0) {}
		else
		{
			player->anim->Reset();
			player->anim->PushBackFrame("resources/Player/Left/Walk/2.png");
			player->anim->PushBackFrame("resources/Player/Left/Walk/1.png");
			player->anim->PushBackFrame("resources/Player/Left/Walk/2.png");
			player->anim->PushBackFrame("resources/Player/Left/Walk/3.png");
			player->anim->speed = 5;

			player->position.x -= move_speed;
			hpbar->position.x -= move_speed;
			hpbar_h->position.x -= move_speed;

			if (GetAsyncKeyState(VK_UP) || GetAsyncKeyState(VK_SPACE))
			{
				bool i = true;
				player->anim->Reset();
				player->anim->PushBackFrame("resources/Player/Right/Walk/1.png");
				if (i)
				{
					jump = new SoundTest("resources/Sound/Jump.wav");
					i = false;
				}
				player->position.y -= 12.5f;
				hpbar->position.y -= 12.5f;
				hpbar_h->position.y -= 12.5f;
				i = true;
			}
		}
	}
	else if (GetAsyncKeyState(VK_RIGHT))
	{
		if (player->position.x >= 10000) {}
		else
		{
			player->anim->Reset();
			player->anim->PushBackFrame("resources/Player/Right/Walk/2.png");
			player->anim->PushBackFrame("resources/Player/Right/Walk/1.png");
			player->anim->PushBackFrame("resources/Player/Right/Walk/2.png");
			player->anim->PushBackFrame("resources/Player/Right/Walk/3.png");
			player->anim->speed = 5;

			player->position.x += move_speed;
			hpbar->position.x += move_speed;
			hpbar_h->position.x += move_speed;

			if (GetAsyncKeyState(VK_UP) || GetAsyncKeyState(VK_SPACE))
			{
				bool i = true;
				player->anim->Reset();
				player->anim->PushBackFrame("resources/Player/Right/Walk/1.png");
				if (i)
				{
					jump = new SoundTest("resources/Sound/Jump.wav");
					i = false;
				}
				player->position.y -= 12.5f;
				hpbar->position.y -= 12.5f;
				hpbar_h->position.y -= 12.5f;
				i = true;
			}
		}
	}

	if (GetAsyncKeyState(VK_UP) || GetAsyncKeyState(VK_SPACE))
	{
		bool i = true;
		player->anim->Reset();
		player->anim->PushBackFrame("resources/Player/Right/Walk/1.png");
		if (i)
		{
			jump = new SoundTest("resources/Sound/Jump.wav");
			i = false;
		}
		player->position.y -= 12.5f;
		hpbar->position.y -= 12.5f;
		hpbar_h->position.y -= 12.5f;
		i = true;
	}

	//¹Ù´Ú
	if (player->position.y < 425)
	{
		player->position.y += 5;
		hpbar->position.y += 5;
		hpbar_h->position.y += 5;
	}
}

void Player::playerDefend(AnimTest *player, SpriteTest *hpbar, SpriteTest *hpbar_h)
{
	player->anim->Reset();
	player->anim->PushBackFrame("resources/Player/Right/Defend/Defend.png");
	player->position.SetVector(player->position.x, player->position.y);
	hpbar->position.SetVector(player->position.x + 5, player->position.y - 5);
	hpbar_h->position.SetVector(player->position.x + 9, player->position.y - 2);
}

void Player::playerGun(AnimTest *player, SpriteTest *hpbar, SpriteTest *hpbar_h)
{
	player->anim->Reset();
	player->anim->PushBackFrame("resources/Player/Right/Gun/1.png");
	if (GetAsyncKeyState(VK_SPACE))
	{
		player->anim->Reset();
		player->anim->PushBackFrame("resources/Player/Right/Gun/3.png");
		
	}
}

void Player::playerBow(AnimTest *player, SpriteTest *hpbar, SpriteTest *hpbar_h)
{
	player->anim->Reset();
	player->anim->PushBackFrame("resources/Player/Right/Bow/1.png");
	if (GetAsyncKeyState(VK_SPACE))
	{
		player->anim->Reset();
		player->anim->PushBackFrame("resources/Player/Right/Bow/3.png");
	}
}

void Player::playerSword(AnimTest *player, SpriteTest *hpbar, SpriteTest *hpbar_h)
{
	player->anim->Reset();
	player->anim->PushBackFrame("resources/Player/Right/Walk/2.png");
	if (GetAsyncKeyState(VK_SPACE))
	{
		player->anim->Reset();
		player->anim->PushBackFrame("resources/Player/Right/Sword/3.png");
	}
}