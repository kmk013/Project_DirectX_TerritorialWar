#pragma once
#include "RGEngine.h"

#include "SpriteTest.h"

class CanadaObject : public RGEngine::GameObject
{
public:
	CanadaObject();
	~CanadaObject();

	SpriteTest *soil[3];
	SpriteTest *maple[3];
};

