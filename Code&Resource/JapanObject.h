#pragma once
#include "RGEngine.h"

#include "SpriteTest.h"

class JapanObject : public RGEngine::GameObject
{
public:
	JapanObject();
	~JapanObject();

	SpriteTest *floor[2];
	SpriteTest *house[2];
	SpriteTest *bridge;
	SpriteTest *umbrella;
	SpriteTest *top;
	SpriteTest *lamp[7];
};