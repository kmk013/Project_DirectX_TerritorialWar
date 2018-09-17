#include "InGameButton.h"
#include "SelectStageScene.h"
#include "Japan.h"
#include "France.h"
#include "Canada.h"
#include "Brazil.h"
#include "Egypt.h"
#include "Australia.h"
#include "Southpole.h"

InGameButton::InGameButton()
{
	main[0] = new SpriteTest("resources/MainScene/Name.png");
	main[1] = new SpriteTest("resources/MainScene/Single.png");
	main[1]->position.SetVector(350, 450);
	main[2] = new SpriteTest("resources/MainScene/Multi.png");
	main[2]->position.SetVector(355, 550);
	main[3] = new SpriteTest("resources/MainScene/End.png");
	main[3]->position.SetVector(355, 650);

	select[0] = new SpriteTest("resources/SelectStageScene/SelectStageScene.png");
	select[1] = new SpriteTest("resources/SelectStageScene/Japan.png");
	select[1]->scale.SetVector(0.65f, 0.65f);
	select[1]->position.SetVector(475, 235);
	select[2] = new SpriteTest("resources/SelectStageScene/France.png");
	select[2]->scale.SetVector(0.65f, 0.65f);
	select[2]->position.SetVector(95, 150);
	select[3] = new SpriteTest("resources/SelectStageScene/Canada.png");
	select[3]->scale.SetVector(0.65f, 0.65f);
	select[3]->position.SetVector(790, 130);
	select[4] = new SpriteTest("resources/SelectStageScene/Brazil.png");
	select[4]->scale.SetVector(0.65f, 0.65f);
	select[4]->position.SetVector(950, 410);
	select[5] = new SpriteTest("resources/SelectStageScene/Australia.png");
	select[5]->scale.SetVector(0.65f, 0.65f);
	select[5]->position.SetVector(550, 485);
	select[6] = new SpriteTest("resources/SelectStageScene/Egypt.png");
	select[6]->scale.SetVector(0.65f, 0.65f);
	select[6]->position.SetVector(210, 330);
	select[7] = new SpriteTest("resources/SelectStageScene/Southpole.png");
	select[7]->scale.SetVector(0.65f, 0.65f);
	select[7]->position.SetVector(530, 685);

	ui[0] = new SpriteTest("resources/UI/Yellow/Outline.png");
	ui[0]->position.SetVector(-15, 552.5f);
	ui[1] = new SpriteTest("resources/UI/Yellow/SelectCharacter.png");
	ui[1]->scale.SetVector(1, 0.9f);
	ui[1]->position.SetVector(50, 630);
	ui[2] = new SpriteTest("resources/UI/Yellow/Move.png");
	ui[2]->scale.SetVector(1, 0.9f);
	ui[2]->position.SetVector(450, 640);
	ui[3] = new SpriteTest("resources/UI/Yellow/Attack.png");
	ui[3]->scale.SetVector(1, 0.9f);
	ui[3]->position.SetVector(585, 640);
	ui[4] = new SpriteTest("resources/UI/Yellow/Defend.png");
	ui[4]->scale.SetVector(1, 0.9f);
	ui[4]->position.SetVector(720, 640);
	ui[5] = new SpriteTest("resources/UI/Yellow/Pass.png");
	ui[5]->scale.SetVector(1, 0.9f);
	ui[5]->position.SetVector(855, 640);

	attack[0] = new SpriteTest("resources/UI/Yellow/Gun.png");
	attack[0]->scale.SetVector(1, 0.9f);
	attack[0]->position.SetVector(500, 640);
	attack[1] = new SpriteTest("resources/UI/Yellow/Bow.png");
	attack[1]->scale.SetVector(1, 0.9f);
	attack[1]->position.SetVector(650, 640);
	attack[2] = new SpriteTest("resources/UI/Yellow/Sword.png");
	attack[2]->scale.SetVector(1, 0.9f);
	attack[2]->position.SetVector(800, 640);

	player = new Player();
}

InGameButton::~InGameButton()
{
}

void InGameButton::playButton(Math::Vector mouse)
{
	if ((mouse.x >= main[1]->position.x + 20 && mouse.x <= main[1]->position.x + 320) &&
		(mouse.y >= main[1]->position.y + 20 && mouse.y <= main[1]->position.y + 80) &&
		GetAsyncKeyState(VK_LBUTTON))
	{
		RGApp->ChangeScene(new SelectStageScene());
	}
}

void InGameButton::endButton(Math::Vector mouse)
{
	if ((mouse.x >= main[3]->position.x + 45 && mouse.x <= main[3]->position.x + 290) &&
		(mouse.y >= main[3]->position.y + 20 && mouse.y <= main[3]->position.y + 75) &&
		GetAsyncKeyState(VK_LBUTTON))
	{
		RGApp->Exit();
	}
}

void InGameButton::selectButton(Math::Vector mouse)
{
	if ((mouse.x >= select[1]->position.x + 25 && mouse.x <= select[1]->position.x + 65) &&
		(mouse.y >= select[1]->position.y + 10 && mouse.y <= select[1]->position.y + 60) &&
		GetAsyncKeyState(VK_LBUTTON))
	{
		RGApp->ChangeScene(new Japan());
	}

	if ((mouse.x >= select[2]->position.x + 25 && mouse.x <= select[2]->position.x + 65) &&
		(mouse.y >= select[2]->position.y + 10 && mouse.y <= select[2]->position.y + 60) &&
		GetAsyncKeyState(VK_LBUTTON))
	{
		RGApp->ChangeScene(new France());
	}

	if ((mouse.x >= select[3]->position.x + 25 && mouse.x <= select[3]->position.x + 65) &&
		(mouse.y >= select[3]->position.y + 10 && mouse.y <= select[3]->position.y + 60) &&
		GetAsyncKeyState(VK_LBUTTON))
	{
		RGApp->ChangeScene(new Canada());
	}

	if ((mouse.x >= select[4]->position.x + 25 && mouse.x <= select[4]->position.x + 65) &&
		(mouse.y >= select[4]->position.y + 10 && mouse.y <= select[4]->position.y + 60) &&
		GetAsyncKeyState(VK_LBUTTON))
	{
		RGApp->ChangeScene(new Brazil());
	}

	if ((mouse.x >= select[5]->position.x + 25 && mouse.x <= select[5]->position.x + 65) &&
		(mouse.y >= select[5]->position.y + 10 && mouse.y <= select[5]->position.y + 60) &&
		GetAsyncKeyState(VK_LBUTTON))
	{
		RGApp->ChangeScene(new Australia());
	}

	if ((mouse.x >= select[6]->position.x + 25 && mouse.x <= select[6]->position.x + 65) &&
		(mouse.y >= select[6]->position.y + 10 && mouse.y <= select[6]->position.y + 60) &&
		GetAsyncKeyState(VK_LBUTTON))
	{
		RGApp->ChangeScene(new Egypt());
	}

	if ((mouse.x >= select[7]->position.x + 25 && mouse.x <= select[7]->position.x + 65) &&
		(mouse.y >= select[7]->position.y + 10 && mouse.y <= select[7]->position.y + 60) &&
		GetAsyncKeyState(VK_LBUTTON))
	{
		RGApp->ChangeScene(new Southpole());
	}
}