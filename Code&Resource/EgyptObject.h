#pragma once
#include "RGEngine.h"

#include "SpriteTest.h"

class EgyptObject : public RGEngine::GameObject
{
public:
	EgyptObject();
	~EgyptObject();

	SpriteTest *floor[3];
};

