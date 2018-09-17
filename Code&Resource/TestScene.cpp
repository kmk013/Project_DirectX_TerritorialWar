#include "TestScene.h"
#include "Test2Scene.h"
#include "Japan.h"

TestScene::TestScene(void)
{
	// �Ѱ��� ���� ������Ʈ�� ���� ������ ������Ʈ�� �ϳ����� ���� �� �ִ�.

	sprite1 = new SpriteTest("resources/asdf.png");
	sprite1->position.SetVector(100.0f, 50.0f);
	// sprite, collider 1

	sprite2 = new SpriteTest("resources/asdf.png");
	sprite2->position.SetVector(50.0f, 400.0f);
	sprite2->rotationCenter.SetVector(
		sprite2->sprite->GetTexture()->GetWidth() / 2.0f,
		sprite2->sprite->GetTexture()->GetHeight() / 2.0f);
	sprite2->rotate = 90.0f * RG_M_RAD_PER_DEG;
	// sprite, collider 2

	// sprite1 �� sprite2�� �浹�� ���� ��ü���� ��ӹ��� OnCollision �Լ��� ȣ���.

	sound = new SoundTest("resources/test.wav");
	// ������ �Բ� ��� 1ȸ (PlayOneShot �Լ�)

	text = new TextTest("malgunbd.ttf", 30);
	text->text->text = "�� this is �׽�Ʈ. 1!@##@!#%89237498`12";
	text->text->color.SetColor(1.0f, 0.0f, 0.0f);

	GetCamera()->position.SetVector(-50.0f, -100.0f);

	// ���� ������Ʈ�� ��� (�ݵ�� �ؾ���)
	// �������� ���� ����� ������Ʈ�� ���� ��µ�. (�ʰ� ����Ҽ��� ���� ���)
	// ��, �Ʒ����� �������� sprite2�� �� ���� ��
	PushBackGameObject(sprite1);
	PushBackGameObject(sprite2);
	PushBackGameObject(sound);
	PushBackGameObject(text);
}
TestScene::~TestScene()
{
}

void TestScene::OnUpdate(void)
{
	if (RGInput->Trigger(DIK_A))
	{
		RGApp->ChangeScene(new Test2Scene());
	}
}
