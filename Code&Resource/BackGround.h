#pragma once
#include "RGEngine.h"

#include "SpriteTest.h"

class BackGround : public RGEngine::GameObject
{
public:
	BackGround();
	~BackGround();

	SpriteTest *background[7];
};

