#include "Brazil.h"



Brazil::Brazil()
{
	background = new BackGround();
	button = new InGameButton();
	land = new BrazilObject();

	PushBackGameObject(background->background[3]);
	PushBackGameObject(land->floor[0]);
	PushBackGameObject(land->floor[1]);
	PushBackGameObject(land->floor[2]);
	PushBackGameObject(land->floor[3]);
	PushBackGameObject(land->floor[4]);
	PushBackGameObject(land->floor[5]);
	PushBackGameObject(land->floor[6]);


	PushBackGameObject(button->ui[0]);
	PushBackGameObject(button->ui[1]);
	PushBackGameObject(button->ui[2]);
	PushBackGameObject(button->ui[3]);
	PushBackGameObject(button->ui[4]);
	PushBackGameObject(button->ui[5]);
}


Brazil::~Brazil()
{
}

void Brazil::OnUpdate()
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