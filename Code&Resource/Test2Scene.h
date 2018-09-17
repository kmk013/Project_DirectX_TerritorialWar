#pragma once
#include "RGEngine.h"

#include "SoundTest.h"
#include "SpriteTest.h"
#include "TextTest.h"

using namespace RGEngine;

class Test2Scene : public RGEngine::Scene
{
private:
	SpriteTest *sprite;

public:
	Test2Scene(void);
	~Test2Scene() override;

public:
	void OnUpdate(void) override;

};

