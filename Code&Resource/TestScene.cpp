#include "TestScene.h"
#include "Test2Scene.h"
#include "Japan.h"

TestScene::TestScene(void)
{
	// 한개의 게임 오브젝트에 같은 종류의 컴포넌트는 하나씩만 붙을 수 있다.

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

	// sprite1 과 sprite2가 충돌시 각각 객체에서 상속받은 OnCollision 함수가 호출됨.

	sound = new SoundTest("resources/test.wav");
	// 생성과 함께 재생 1회 (PlayOneShot 함수)

	text = new TextTest("malgunbd.ttf", 30);
	text->text->text = "아 this is 테스트. 1!@##@!#%89237498`12";
	text->text->color.SetColor(1.0f, 0.0f, 0.0f);

	GetCamera()->position.SetVector(-50.0f, -100.0f);

	// 씬에 오브젝트를 등록 (반드시 해야함)
	// 렌더링은 먼저 등록한 오브젝트가 먼저 출력됨. (늦게 등록할수록 위에 출력)
	// 즉, 아래에선 겹쳐질시 sprite2가 더 위로 옴
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
