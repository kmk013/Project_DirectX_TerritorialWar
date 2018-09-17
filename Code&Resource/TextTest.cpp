#include "TextTest.h"

TextTest::TextTest(std::string font, unsigned int size, unsigned int weight)
{
	name = "text";

	text = AttachComponent<Components::TextRenderer>();
	text->SetFont(font, size, weight); // 반드시 해주어야 함
}
TextTest::~TextTest()
{
}
