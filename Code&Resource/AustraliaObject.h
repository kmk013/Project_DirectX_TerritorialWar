#pragma once
#include "RGEngine.h"

#include "SpriteTest.h"

class AustraliaObject : public RGEngine::GameObject
{
public:
	AustraliaObject();
	~AustraliaObject();

	SpriteTest *floor[5];
};

