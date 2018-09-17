#pragma once
#include "RGEngine.h"

using namespace RGEngine;

class AnimTest : public RGEngine::GameObject
{
public:
	AnimTest(std::string path);
	AnimTest(std::string path, std::string path2);
	AnimTest(std::string path, std::string path2, std::string path3);
	AnimTest(std::string path, std::string path2, std::string path3, std::string path4);
	~AnimTest() override;

	Components::AnimationRenderer *anim;

	void OnCollision(GameObject *col) override;
};

