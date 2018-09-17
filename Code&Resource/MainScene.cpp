#include "MainScene.h"



MainScene::MainScene()
{
	
	background = new SpriteTest("resources/MainScene/Background.png");
	main = new SoundTest("resources/Sound/main.mp3");

	button = new InGameButton();

	PushBackGameObject(background);
	PushBackGameObject(button->main[0]);
	PushBackGameObject(button->main[1]);
	PushBackGameObject(button->main[2]);
	PushBackGameObject(button->main[3]);
}


MainScene::~MainScene()
{
}

void MainScene::OnUpdate()
{
	RGInput->GetMouseFromClient(mouse);

	button->playButton(mouse);
	button->endButton(mouse);
}