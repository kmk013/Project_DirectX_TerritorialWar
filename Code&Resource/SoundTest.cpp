#include "SoundTest.h"

SoundTest::SoundTest(std::string path)
{
	name = "sound";

	audio = AttachComponent<Components::AudioSource>();
	audio->SetSound(path); // �ݵ�� ���־�� ��

	// �������� ���� �۾��� �ݵ�� ��� ���Ŀ� �ؾ���.

	audio->Play(); // ���
}
SoundTest::SoundTest(std::string path, int loopcount)
{
	audio = AttachComponent<Components::AudioSource>();
	
	RGAssetSound->Load(path, loopcount);
	audio->SetSound(path); // �ݵ�� ���־�� ��

	audio->SetVolume(0.8f);
	audio->Play();
}

SoundTest::~SoundTest()
{
}
