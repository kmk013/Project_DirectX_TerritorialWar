#include "Enemy.h"



Enemy::Enemy()
{
	enemy[0] = new AnimTest("resources/Enemy/Left/Walk/2.png");
	enemy[0]->position.SetVector(1500, 425);
	enemy[1] = new AnimTest("resources/Enemy/Left/Walk/2.png");
	enemy[1]->position.SetVector(1600, 425);
	enemy[2] = new AnimTest("resources/Enemy/Left/Walk/2.png");
	enemy[2]->position.SetVector(1700, 425);
}


Enemy::~Enemy()
{
}
