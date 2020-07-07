#ifndef POINT_H_INCLUDED
#define POINT_H_INCLUDED
? |i..

u.. s..

template<typename T>
class Point //base, parent, superclass
{
    protected:
        T x;
    public:
        Point(T =0);
        ~Point();
        T getX();
        void setX(T);
};
template<typename T>
Point<T>::Point(T x)
{
    this->x = x;
    cout << "The constructor from the Point class has just been invoked" << endl;
}
template<typename T>
Point<T>::~Point()
{
    cout << "The destructor from the Point class has just been invoked" << endl;
}
template<typename T>
void Point<T>::setX(T x)
{
    this->x = x;
    cout << "Im from Point" << endl;
}
template<typename T>
T Point<T>::getX()
{
    return this->x;
}
template<>
double Point<double>::getX()
{
    cout <<"this function will be executed only when Point<double>" << endl;
    return this->x;
}

template<typename K>
class Point<K*>
{
    public:
        Point(K a=0) { cout << "you can't use pointers here"; }
};

template <typename T>
class Point2D : public Point<T> //derived, child, subclass
{
    protected:
        T y;
    public:
        Point2D(T =0, T =0);
        ~Point2D();
        T getY() { return y; }
        void setY(T);
        void setX(T);
        void setXY(T, T);
        Point2D operator+(Point2D);

};
template <typename T>
Point2D<T>::Point2D(T x, T y) : Point<T>(x)
{
    this->y = y;
    cout << "The constructor from the Point2D class has just been invoked" << endl;
}
template <typename T>
Point2D<T>::~Point2D()
{
    cout << "The destructor from the Point2D class has just been invoked" << endl;
}
template <typename T>
void Point2D<T>::setY(T y)
{
    this->y = y;
}
template <typename T>
void Point2D<T>::setXY(T x, T y)
{
    setX(x);
    setY(y);
}
template <typename T>
void Point2D<T>::setX(T x)
{
    this->x = x;
    cout << "Im from Point2D" << endl;
}
template <typename T>
Point2D<T> Point2D<T>::operator+(Point2D o)
{
    Point2D tmp;

    tmp.setX(this->getX() + o.getX());
    tmp.setY(this->getY() + o.getY());

    return tmp;
}
/*
class Point3D : public Point2D
{

};
*/

template<>
class Point<char>
{
        public:
            Point(char a=0) { cout << "this is from Point<char>";}
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
#endif // POINT_H_INCLUDED
