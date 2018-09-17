#include "Canada.h"



Canada::Canada()
{
	background = new BackGround();
	button = new InGameButton();
	land = new CanadaObject();
	
	PushBackGameObject(background->background[2]);

	PushBackGameObject(land->soil[0]);
	PushBackGameObject(land->soil[1]);
	PushBackGameObject(land->soil[2]);
	PushBackGameObject(land->maple[0]);
	PushBackGameObject(land->maple[1]);
	PushBackGameObject(land->maple[2]);

	PushBackGameObject(button->ui[0]);
	PushBackGameObject(button->ui[1]);
	PushBackGameObject(button->ui[2]);
	PushBackGameObject(button->ui[3]);
	PushBackGameObject(button->ui[4]);
	PushBackGameObject(button->ui[5]);
}


Canada::~Canada()
{
}

void Canada::OnUpdate()
{
	//카메라 이동
	RGInput->GetMouseFromClient(mouse);

	if (mouse.x < 175)
	{
		if (GetCamera()->position.x >= 0) {}
		else
		{
			GetCamera()->position.x += 5;
			button->ui[0]->position.x -= 5;
			button->ui[1]->position.x -= 5;
			button->ui[2]->position.x -= 5;
			button->ui[3]->position.x -= 5;
			button->ui[4]->position.x -= 5;
			button->ui[5]->position.x -= 5;
		}
	}
	else if (mouse.x > 825)
	{
		if (GetCamera()->position.x <= -1024) {}
		else
		{
			GetCamera()->position.x -= 5;
			button->ui[0]->position.x += 5;
			button->ui[1]->position.x += 5;
			button->ui[2]->position.x += 5;
			button->ui[3]->position.x += 5;
			button->ui[4]->position.x += 5;
			button->ui[5]->position.x += 5;
		}
	}
}