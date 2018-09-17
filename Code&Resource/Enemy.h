#pragma once
#include "RGEngine.h"

#include "AnimTest.h"

class Enemy : public RGEngine::GameObject
{
public:
	Enemy();
	~Enemy();

	AnimTest *enemy[3];
};

