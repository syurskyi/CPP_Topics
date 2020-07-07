#ifndef RECTANGLE_H
#define RECTANGLE_H

? "Point.h"

class Rectangle
{
public:
	Rectangle();
	Rectangle(Point bottomLeft, Point topRight);

private:
	Point m_bottomLeft, m_topRight;
};

#endif
