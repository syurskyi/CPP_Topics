?i.. POINT_H_INCLUDED
_de.. POINT_H_INCLUDED

n.. Point //base, parent, superclass
{
    protected:
        int x;
    p..
        Point(int =0);
        ~Point();
        int getX() { return x; }
        v.. setX(int);
};
n.. Point2D : public Point //derived, child, subclass
{
    protected:
        int y;
    p..
        Point2D(int =0, int =0);
        ~Point2D();
        int getY() { return y; }
        v.. setY(int);
        v.. setX(int);
        v.. setXY(int, int);
        Point2D operator+(Point2D);

};
n.. Point3D : public Point2D
{

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
