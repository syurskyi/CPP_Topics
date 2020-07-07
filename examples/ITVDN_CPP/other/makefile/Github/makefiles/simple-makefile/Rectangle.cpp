#include "Rectangle.h"

#include <iostream>

Rectangle::Rectangle()
	: m_bottomLeft(Point()), m_topRight(Point())
{
	std::cout << "A Rectangle, with two Points, has been created" << std::endl;
}

Rectangle::Rectangle(Point bottomLeft, Point topRight)
	: m_bottomLeft(bottomLeft), m_topRight(topRight)
{
	std::cout << "A Rectangle, with two Points, has been created" << std::endl;
}
