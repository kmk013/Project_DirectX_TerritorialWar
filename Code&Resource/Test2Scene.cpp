#include "Test2Scene.h"

Test2Scene::Test2Scene()
{
	sprite = new SpriteTest("resources/asdf.png");
	PushBackGameObject(sprite);
}


Test2Scene::~Test2Scene()
{
}

void Test2Scene::OnUpdate(void)
{
}
