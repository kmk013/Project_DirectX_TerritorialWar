#pragma once
#include "RGEngine.h"

#include "SpriteTest.h"

class SouthpoleObject : public RGEngine::GameObject
{
public:
	SouthpoleObject();
	~SouthpoleObject();

	SpriteTest *floor[2];
};

