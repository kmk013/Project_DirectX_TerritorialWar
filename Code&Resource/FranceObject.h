#pragma once
#include "RGEngine.h"

#include "SpriteTest.h"

class FranceObject : public RGEngine::GameObject
{
public:
	FranceObject();
	~FranceObject();

	SpriteTest *bridge[2];
	SpriteTest *wall[2];
};

