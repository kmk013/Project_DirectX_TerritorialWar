#include "AustraliaObject.h"



AustraliaObject::AustraliaObject()
{
	floor[0] = new SpriteTest("resources/Map/Australia/ground/1.png");
	floor[1] = new SpriteTest("resources/Map/Australia/ground/2.png");
	floor[1]->position.SetVector(390, 300);
	floor[2] = new SpriteTest("resources/Map/Australia/ground/3.png");
	floor[2]->position.SetVector(800, 450);
	floor[3] = new SpriteTest("resources/Map/Australia/ground/4.png");
	floor[3]->position.SetVector(1370, 235);
	floor[4] = new SpriteTest("resources/Map/Australia/ground/5.png");
	floor[4]->position.SetVector(1790, 450);
}


AustraliaObject::~AustraliaObject()
{
}
