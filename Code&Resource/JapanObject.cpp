#include "JapanObject.h"



JapanObject::JapanObject()
{
	floor[0] = new SpriteTest("resources/Map/Japan/ground/1.png");
	floor[0]->position.SetVector(0, 522.5f);
	floor[1] = new SpriteTest("resources/Map/Japan/ground/2.png");
	floor[1]->position.SetVector(1200, 522.5f);

	house[0] = new SpriteTest("resources/Map/Japan/house/1.png");
	house[0]->position.SetVector(125, 345);
	house[1] = new SpriteTest("resources/Map/Japan/house/2.png");
	house[1]->position.SetVector(1600, 285);

	bridge = new SpriteTest("resources/Map/Japan/bridge/1.png");
	bridge->position.SetVector(915, 433);

	umbrella = new SpriteTest("resources/Map/Japan/umbrella/1.png");
	umbrella->position.SetVector(670, 452.5f);

	top = new SpriteTest("resources/Map/Japan/top/1.png");
	top->position.SetVector(1350, 410);

	lamp[0] = new SpriteTest("resources/Map/Japan/lamp/1.png");
	lamp[0]->position.SetVector(10, 350);
	lamp[1] = new SpriteTest("resources/Map/Japan/lamp/2.png");
	lamp[1]->position.SetVector(200, 275);
	lamp[2] = new SpriteTest("resources/Map/Japan/lamp/3.png");
	lamp[2]->position.SetVector(570, 300);
	lamp[3] = new SpriteTest("resources/Map/Japan/lamp/2.png");
	lamp[3]->position.SetVector(975, 350);
	lamp[4] = new SpriteTest("resources/Map/Japan/lamp/4.png");
	lamp[4]->position.SetVector(1000, 250);
	lamp[5] = new SpriteTest("resources/Map/Japan/lamp/5.png");
	lamp[6] = new SpriteTest("resources/Map/Japan/lamp/2.png");
}


JapanObject::~JapanObject()
{
}