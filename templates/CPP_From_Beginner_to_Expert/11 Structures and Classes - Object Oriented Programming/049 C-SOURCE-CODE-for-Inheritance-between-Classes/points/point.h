?i.. POINT_H_INCLUDED
_de.. POINT_H_INCLUDED

n.. Point //base, parent, superclass
{
    pr..
        in. x;
    p..
        Point(in. =0);
        ~Point();
        in. getX() { return x; }
        v.. setX(in.);
};
n.. Point2D : pu.. Point //derived, child, subclass
{
    pr..
        in. y;
    p..
        Point2D(in. =0, in. =0);
        ~Point2D();
        in. getY() { return y; }
        v.. setY(in.);
        v.. setX(in.);
        v.. setXY(in., in.);

};
n.. Point3D : pu.. Point2D
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
