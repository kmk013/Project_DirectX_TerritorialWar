#pragma once
#include "RGEngine.h"

#include "SpriteTest.h"

class BrazilObject : public RGEngine::GameObject
{
public:
	BrazilObject();
	~BrazilObject();

	SpriteTest *floor[7];
};

