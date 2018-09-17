#include "SouthpoleObject.h"



SouthpoleObject::SouthpoleObject()
{
	floor[0] = new SpriteTest("resources/Map/SouthPole/1.png");
	floor[0]->position.SetVector(0, 0);
	floor[1] = new SpriteTest("resources/Map/SouthPole/2.png");
	floor[1]->position.SetVector(0, 0);
}


SouthpoleObject::~SouthpoleObject()
{
}
