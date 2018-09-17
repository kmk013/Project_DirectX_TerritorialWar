#pragma once
#include "RGEngine.h"

using namespace RGEngine;

class SpriteTest : public RGEngine::GameObject
{
public:
	Components::SpriteRenderer *sprite;
	
public:
	SpriteTest(std::string path);
	~SpriteTest() override;

	void OnUpdate(void) override;
	void OnCollision(GameObject *col) override;

};

