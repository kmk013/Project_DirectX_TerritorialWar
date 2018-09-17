#pragma once
#include "RGEngine.h"

using namespace RGEngine;

class SoundTest : public RGEngine::GameObject
{
public:
	Components::AudioSource *audio;

public:
	SoundTest(std::string path);
	SoundTest(std::string path, int loopcount);
	~SoundTest() override;

};

