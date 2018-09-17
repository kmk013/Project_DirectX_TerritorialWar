#include "AnimTest.h"

AnimTest::AnimTest(std::string path)
{
	name = "Anim";

	anim = AttachComponent<Components::AnimationRenderer>();
	anim->PushBackFrame(path);
	anim->speed = 1;
	auto col1 = AttachComponent<Components::BoxCollider>();
	col1->box.SetRect(0.0f, 0.0f, (float)anim->GetTexture(0)->GetWidth(),
		(float)anim->GetTexture(0)->GetHeight());
}

AnimTest::AnimTest(std::string path, std::string path2)
{
	name = "Anim";

	anim = AttachComponent<Components::AnimationRenderer>();
	anim->PushBackFrame(path);
	anim->PushBackFrame(path2);
	anim->speed = 1;
	auto col1 = AttachComponent<Components::BoxCollider>();
	col1->box.SetRect(0.0f, 0.0f, (float)anim->GetTexture(0)->GetWidth(),
		(float)anim->GetTexture(0)->GetHeight());
}

AnimTest::AnimTest(std::string path, std::string path2, std::string path3)
{
	name = "Anim";

	anim = AttachComponent<Components::AnimationRenderer>();
	anim->PushBackFrame(path);
	anim->PushBackFrame(path2);
	anim->PushBackFrame(path3);
	anim->speed = 1;
	auto col1 = AttachComponent<Components::BoxCollider>();
	col1->box.SetRect(0.0f, 0.0f, (float)anim->GetTexture(0)->GetWidth(), 
		(float)anim->GetTexture(0)->GetHeight());
}

AnimTest::AnimTest(std::string path, std::string path2, std::string path3, std::string path4)
{
	name = "Anim";

	anim = AttachComponent<Components::AnimationRenderer>();
	anim->PushBackFrame(path);
	anim->PushBackFrame(path2);
	anim->PushBackFrame(path3);
	anim->PushBackFrame(path4);
	anim->speed = 1;
	auto col1 = AttachComponent<Components::BoxCollider>();
	col1->box.SetRect(0.0f, 0.0f, (float)anim->GetTexture(0)->GetWidth(), 
		(float)anim->GetTexture(0)->GetHeight());
}
AnimTest::~AnimTest()
{
}

void AnimTest::OnCollision(GameObject *col)
{

}