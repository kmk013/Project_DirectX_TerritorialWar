#include "BrazilObject.h"



BrazilObject::BrazilObject()
{
	floor[0] = new SpriteTest("resources/Map/Brazil/ground/1.png");
	floor[0]->position.SetVector(0, 450);
	floor[1] = new SpriteTest("resources/Map/Brazil/ground/2.png");
	floor[1]->position.SetVector(275, 470);
	floor[2] = new SpriteTest("resources/Map/Brazil/ground/3.png");
	floor[2]->position.SetVector(585, 470);
	floor[3] = new SpriteTest("resources/Map/Brazil/ground/4.png");
	floor[3]->position.SetVector(960, 470);
	floor[4] = new SpriteTest("resources/Map/Brazil/ground/5.png");
	floor[4]->position.SetVector(1300, 450);
	floor[5] = new SpriteTest("resources/Map/Brazil/ground/6.png");
	floor[5]->position.SetVector(1570, 430);
	floor[6] = new SpriteTest("resources/Map/Brazil/ground/7.png");	
	floor[6]->position.SetVector(1895, 450);
}


BrazilObject::~BrazilObject()
{
}
