#include "CanadaObject.h"



CanadaObject::CanadaObject()
{
	soil[0] = new SpriteTest("resources/Map/Canada/soil/1.png");
	soil[0]->position.SetVector(0, 440);
	soil[1] = new SpriteTest("resources/Map/Canada/soil/2.png");
	soil[1]->position.SetVector(550, 440);
	soil[2] = new SpriteTest("resources/Map/Canada/soil/3.png");

	maple[0] = new SpriteTest("resources/Map/Canada/maple/1.png");
	maple[1] = new SpriteTest("resources/Map/Canada/maple/2.png");
	maple[2] = new SpriteTest("resources/Map/Canada/maple/3.png");
}


CanadaObject::~CanadaObject()
{
}
