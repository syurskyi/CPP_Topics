?i.. POINT_H_INCLUDED
_de.. POINT_H_INCLUDED
? |i..

u.. s..

template<typename T>
n.. Point //base, parent, superclass
{
    pr..
        T x;
    p..
        Point(T =0);
        ~Point();
        T getX();
        v.. setX(T);
};
template<typename T>
Point<T>::Point(T x)
{
    this->x = x;
    c.. __ "The constructor from the Point class has just been invoked" __ e..
}
template<typename T>
Point<T>::~Point()
{
    c.. __ "The destructor from the Point class has just been invoked" __ e..
}
template<typename T>
v.. Point<T>::setX(T x)
{
    this->x = x;
    c.. __ "Im from Point" __ e..
}
template<typename T>
T Point<T>::getX()
{
    ?  this->x;
}
template<>
do.. Point<do..>::getX()
{
    c.. __"this function will be executed only when Point<double>" __ e..
    ?  this->x;
}

template<typename K>
n.. Point<K*>
{
    p..
        Point(K a=0) { c.. __ "you can't use pointers here"; }
};

template <typename T>
n.. Point2D : pu.. Point<T> //derived, child, subclass
{
    pr..
        T y;
    p..
        Point2D(T =0, T =0);
        ~Point2D();
        T getY() { ?  y; }
        v.. setY(T);
        v.. setX(T);
        v.. setXY(T, T);
        Point2D operator+(Point2D);

};
template <typename T>
Point2D<T>::Point2D(T x, T y) : Point<T>(x)
{
    this->y = y;
    c.. __ "The constructor from the Point2D class has just been invoked" __ e..
}
template <typename T>
Point2D<T>::~Point2D()
{
    c.. __ "The destructor from the Point2D class has just been invoked" __ e..
}
template <typename T>
v.. Point2D<T>::setY(T y)
{
    this->y = y;
}
template <typename T>
v.. Point2D<T>::setXY(T x, T y)
{
    setX(x);
    setY(y);
}
template <typename T>
v.. Point2D<T>::setX(T x)
{
    this->x = x;
    c.. __ "Im from Point2D" __ e..
}
template <typename T>
Point2D<T> Point2D<T>::operator+(Point2D o)
{
    Point2D tmp;

    tmp.setX(this->getX() + o.getX());
    tmp.setY(this->getY() + o.getY());

    ?  tmp;
}
/*
class Point3D : public Point2D
{

};
*/

template<>
n.. Point<ch..>
{
        p..
            Point(ch.. a=0) { c.. __ "this is from Point<char>";}
};
/*
    class Point2D : public Point
    everything what is inside Point (excluding constructor and destructor) will be in Point2D
    private - CANNOT ACCESS
    protected - protected
    public - public

    class Point2D : protected Point
    everything what is inside Point (excluding constructor and destructor) will be in Point2D
    private - CANNOT ACCESS
    protected - protected
    public - protected


    class Point2D : private Point
    everything what is inside Point (excluding constructor and destructor) will be in Point2D
    private - CANNOT ACCESS
    protected - private
    public - private

*/
e.. // POINT_H_INCLUDED
