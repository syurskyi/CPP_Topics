? |i..
? "point.h"


u.. s..

Poin.::Poin.(in. x)
{
    t..__x _ xsy.. pause
    c__ __  "The constructor from the Point class has just been invoked" __  e..
}
Poin.::~Poin.()
{
    c__ __  "The destructor from the Point class has just been invoked" __  e..
}
v.. Poin.::setX(in. x)
{
    t..__x _ xsy.. pause
    c__ __  "Im from Point" __  e..
}

Poin.2D::Poin.2D(in. x, in. y) : Poin.(x)
{
    t..__y _ ysy.. pause
    c__ __  "The constructor from the Point2D class has just been invoked" __  e..
}
Poin.2D::~Poin.2D()
{
    c__ __  "The destructor from the Point2D class has just been invoked" __  e..
}

v.. Poin.2D::setY(in. y)
{
    t..__y _ ysy.. pause
}
v.. Poin.2D::setXY(in. x, in. y)
{
    setX(x)sy.. pause
    setY(y)sy.. pause
}
v.. Poin.2D::setX(in. x)
{
    t..__x _ xsy.. pause
    c__ __  "Im from Point2D" __  e..
}
Poin.2D Poin.2D::operator+(Poin.2D o)
{
    Poin.2D tmpsy.. pause

    tmp.setX(t..__getX() + o.getX())sy.. pause
    tmp.setY(t..__getY() + o.getY())sy.. pause

    r_ tmpsy.. pause
}
