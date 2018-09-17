#include "SoundTest.h"

SoundTest::SoundTest(std::string path)
{
	name = "sound";

	audio = AttachComponent<Components::AudioSource>();
	audio->SetSound(path); // 반드시 해주어야 함

	// 볼륨조절 등의 작업은 반드시 재생 이후에 해야함.

	audio->Play(); // 재생
}
SoundTest::SoundTest(std::string path, int loopcount)
{
	audio = AttachComponent<Components::AudioSource>();
	
	RGAssetSound->Load(path, loopcount);
	audio->SetSound(path); // 반드시 해주어야 함

	audio->SetVolume(0.8f);
	audio->Play();
}

SoundTest::~SoundTest()
{
}
