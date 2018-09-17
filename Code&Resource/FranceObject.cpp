#include "FranceObject.h"



FranceObject::FranceObject()
{
	bridge[0] = new SpriteTest("resources/Map/France/bridge/1.png");
	bridge[0]->position.SetVector(0, 510);
	bridge[1] = new SpriteTest("resources/Map/France/bridge/2.png");
	bridge[1]->position.SetVector(610, 512);
	wall[0] = new SpriteTest("resources/Map/France/wall/1.png");
	wall[0]->position.SetVector(370, 190);
	wall[1] = new SpriteTest("resources/Map/France/wall/2.png");
	wall[1]->position.SetVector(945, 150);
}


FranceObject::~FranceObject()
{
}
