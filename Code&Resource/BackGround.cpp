#include "BackGround.h"



BackGround::BackGround()
{
	background[0] = new SpriteTest("resources/Map/Japan/Japan.png");
	background[1] = new SpriteTest("resources/Map/France/France.png");
	background[2] = new SpriteTest("resources/Map/Canada/Canada.png");
	background[3] = new SpriteTest("resources/Map/Brazil/Brazil.png");
	background[4] = new SpriteTest("resources/Map/Egypt/Egypt.png");
	background[5] = new SpriteTest("resources/Map/Australia/Australia.png");
	background[6] = new SpriteTest("resources/Map/SouthPole/SouthPole.png");
}


BackGround::~BackGround()
{
}
