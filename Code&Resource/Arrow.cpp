#include "Arrow.h"



Arrow::Arrow()
{
	player = new Player();
	button = new Button();

	playernum = 0;

	arrow = new SpriteTest("resources/Player/Object/Arrow/Arrow.png");
	arrow->position.SetVector(player->player[playernum]->position.x + 25,
		player->player[playernum]->position.y - 40);
	arrow->scale.SetVector(0.8f, 0.8f);
	
}


Arrow::~Arrow()
{
}

void Arrow::OnUpdate(Math::Vector mouse)
{
	if ((mouse.x >= player->player[0]->position.x + 10 && mouse.x <= player->player[0]->position.x + 60) &&
		(mouse.y >= player->player[0]->position.y + 5 && mouse.y <= player->player[0]->position.y + 105) &&
		GetAsyncKeyState(VK_LBUTTON))
		playernum = 0;

	else if ((mouse.x >= player->player[1]->position.x + 10 && mouse.x <= player->player[1]->position.x + 60) &&
		(mouse.y >= player->player[1]->position.y + 5 && mouse.y <= player->player[1]->position.y + 105) &&
		GetAsyncKeyState(VK_LBUTTON))
		playernum = 1;

	else if ((mouse.x >= player->player[2]->position.x + 10 && mouse.x <= player->player[2]->position.x + 60) &&
		(mouse.y >= player->player[2]->position.y + 5 && mouse.y <= player->player[2]->position.y + 105) &&
		GetAsyncKeyState(VK_LBUTTON))
		playernum = 2;

	arrow->position.SetVector(player->player[playernum]->position.x + 25,
		player->player[playernum]->position.y - 40);

	button->selectButtonClick = false;
}