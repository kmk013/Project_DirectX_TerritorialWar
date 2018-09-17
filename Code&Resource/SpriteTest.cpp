#include "SpriteTest.h"

SpriteTest::SpriteTest(std::string path)
{
	name = "sprite";

	sprite = AttachComponent<Components::SpriteRenderer>();
	sprite->SetTexture(path); // �ݵ�� ���־�� ��
	auto col1 = AttachComponent<Components::BoxCollider>();
	col1->box.SetRect(0.0f, 0.0f, (float)sprite->GetTexture()->GetWidth(), (float)sprite->GetTexture()->GetHeight());
}
SpriteTest::~SpriteTest()
{
}

void SpriteTest::OnUpdate(void)
{
}

void SpriteTest::OnCollision(GameObject *col)
{

}
