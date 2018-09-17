#include "EgyptObject.h"



EgyptObject::EgyptObject()
{
	floor[0] = new SpriteTest("resources/Map/Egypt/ground/1.png");
	floor[0]->position.SetVector(680, 300);
	floor[1] = new SpriteTest("resources/Map/Egypt/ground/2.png");
	floor[1]->position.SetVector(0, 450);
	floor[2] = new SpriteTest("resources/Map/Egypt/ground/3.png");
	floor[2]->position.SetVector(1400, 450);
}


EgyptObject::~EgyptObject()
{
}
