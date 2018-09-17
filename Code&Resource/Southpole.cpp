#include "Southpole.h"



Southpole::Southpole()
{
	background = new BackGround();
	button = new InGameButton();
	land = new SouthpoleObject();

	PushBackGameObject(background->background[6]);
	PushBackGameObject(land->floor[0]);
	PushBackGameObject(land->floor[1]);

	PushBackGameObject(button->ui[0]);
	PushBackGameObject(button->ui[1]);
	PushBackGameObject(button->ui[2]);
	PushBackGameObject(button->ui[3]);
	PushBackGameObject(button->ui[4]);
	PushBackGameObject(button->ui[5]);
}


Southpole::~Southpole()
{
}

void Southpole::OnUpdate()
{
	//ī�޶� �̵�
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