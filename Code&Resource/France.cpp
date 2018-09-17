#include "France.h"



France::France()
{
	background = new BackGround();
	button = new InGameButton();
	land = new FranceObject();

	PushBackGameObject(background->background[1]);

	PushBackGameObject(land->bridge[0]);
	PushBackGameObject(land->bridge[1]);
	PushBackGameObject(land->wall[0]);
	PushBackGameObject(land->wall[1]);

	PushBackGameObject(button->ui[0]);
	PushBackGameObject(button->ui[1]);
	PushBackGameObject(button->ui[2]);
	PushBackGameObject(button->ui[3]);
	PushBackGameObject(button->ui[4]);
	PushBackGameObject(button->ui[5]);
}


France::~France()
{
}

void France::OnUpdate()
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