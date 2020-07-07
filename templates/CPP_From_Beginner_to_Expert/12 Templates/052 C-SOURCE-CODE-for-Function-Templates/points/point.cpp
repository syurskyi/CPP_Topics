? |i..
? "point.h"


u.. s..

Poin.::Poin.(in. x)
{
    this->x _ x;
    c__ __  "The constructor from the Point class has just been invoked" __  e..
}
Poin.::~Poin.()
{
    c__ __  "The destructor from the Point class has just been invoked" __  e..
}
v.. Poin.::setX(in. x)
{
    this->x _ x;
    c__ __  "Im from Point" __  e..
}

Poin.2D::Poin.2D(in. x, in. y) : Poin.(x)
{
    this->y _ y;
    c__ __  "The constructor from the Point2D class has just been invoked" __  e..
}
Poin.2D::~Poin.2D()
{
    c__ __  "The destructor from the Point2D class has just been invoked" __  e..
}

v.. Poin.2D::setY(in. y)
{
    this->y _ y;
}
v.. Poin.2D::setXY(in. x, in. y)
{
    setX(x);
    setY(y);
}
v.. Poin.2D::setX(in. x)
{
    this->x _ x;
    c__ __  "Im from Point2D" __  e..
}
Poin.2D Poin.2D::operator+(Poin.2D o)
{
    Poin.2D tmp;

    tmp.setX(this->getX() + o.getX());
    tmp.setY(this->getY() + o.getY());

    r_ tmp;
}
