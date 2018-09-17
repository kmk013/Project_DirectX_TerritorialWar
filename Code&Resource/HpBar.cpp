#include "HpBar.h"



HpBar::HpBar()
{
	player = new Player();
	enemy = new Enemy();

	hpbar[0][0] = new SpriteTest("resources/Player/Object/Hpbar/Hpbar.png");
	hpbar[0][0]->position.SetVector(player->player[0]->position.x + 5,
		player->player[0]->position.y - 5);
	hpbar[0][1] = new SpriteTest("resources/Player/Object/Hpbar/Hpbar.png");
	hpbar[0][1]->position.SetVector(player->player[1]->position.x + 5,
		player->player[1]->position.y - 5);
	hpbar[0][2] = new SpriteTest("resources/Player/Object/Hpbar/Hpbar.png");
	hpbar[0][2]->position.SetVector(player->player[2]->position.x + 5,
		player->player[2]->position.y - 5);

	hpbar_h[0][0] = new SpriteTest("resources/Player/Object/Hpbar/Hp.png");
	hpbar_h[0][0]->position.SetVector(player->player[0]->position.x + 9,
		player->player[0]->position.y - 2);
	hpbar_h[0][1] = new SpriteTest("resources/Player/Object/Hpbar/Hp.png");
	hpbar_h[0][1]->position.SetVector(player->player[1]->position.x + 9,
		player->player[1]->position.y - 2);
	hpbar_h[0][2] = new SpriteTest("resources/Player/Object/Hpbar/Hp.png");
	hpbar_h[0][2]->position.SetVector(player->player[2]->position.x + 9,
		player->player[2]->position.y - 2);

	hpbar[1][0] = new SpriteTest("resources/Enemy/Object/Hpbar/Hpbar.png");
	hpbar[1][0]->position.SetVector(enemy->enemy[0]->position.x + 5,
		enemy->enemy[0]->position.y - 5);
	hpbar[1][1] = new SpriteTest("resources/Enemy/Object/Hpbar/Hpbar.png");
	hpbar[1][1]->position.SetVector(enemy->enemy[1]->position.x + 5,
		enemy->enemy[1]->position.y - 5);
	hpbar[1][2] = new SpriteTest("resources/Enemy/Object/Hpbar/Hpbar.png");
	hpbar[1][2]->position.SetVector(enemy->enemy[2]->position.x + 5,
		enemy->enemy[2]->position.y - 5);

	hpbar_h[1][0] = new SpriteTest("resources/Enemy/Object/Hpbar/Hp.png");
	hpbar_h[1][0]->position.SetVector(enemy->enemy[0]->position.x + 9,
		enemy->enemy[0]->position.y - 2);
	hpbar_h[1][1] = new SpriteTest("resources/Enemy/Object/Hpbar/Hp.png");
	hpbar_h[1][1]->position.SetVector(enemy->enemy[1]->position.x + 9,
		enemy->enemy[1]->position.y - 2);
	hpbar_h[1][2] = new SpriteTest("resources/Enemy/Object/Hpbar/Hp.png");
	hpbar_h[1][2]->position.SetVector(enemy->enemy[2]->position.x + 9,
		enemy->enemy[2]->position.y - 2);

}


HpBar::~HpBar()
{
}

void HpBar::OnUpdate()
{
	
}