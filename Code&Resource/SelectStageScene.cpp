#include "SelectStageScene.h"



SelectStageScene::SelectStageScene()
{
	button = new InGameButton();

	PushBackGameObject(button->select[0]);
	PushBackGameObject(button->select[1]);
	PushBackGameObject(button->select[2]);
	PushBackGameObject(button->select[3]);
	PushBackGameObject(button->select[4]);
	PushBackGameObject(button->select[5]);
	PushBackGameObject(button->select[6]);
	PushBackGameObject(button->select[7]);
}


SelectStageScene::~SelectStageScene()
{
}

void SelectStageScene::OnUpdate()
{
	RGInput->GetMouseFromClient(mouse);

	button->selectButton(mouse);
}