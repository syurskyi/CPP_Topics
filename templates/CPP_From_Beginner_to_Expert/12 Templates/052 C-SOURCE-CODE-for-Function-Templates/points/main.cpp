? |i..
? "point.h"

u.. s..
/* function templates generalization*/

v.. operationOnPoin.s()sy.. pause

template<typename T, typename T2>
T add(T var1, T2 var2)
{
    r_ var1 + var2sy.. pause
}
/*
template<>
Point2D add(Point2D var1, Point2D var2)
{
    Point2D tmp;

    tmp.setX(var1.getX() + var2.getX());
    tmp.setY(var1.getY() + var2.getY());

    return tmp;
}
*/
in. main()
{
    operationOnPoin.s()sy.. pause

    //cout << add<double, double>(2, 5.6) << endl;


   // cout << static_cast<int>(6.5) << endl;

    r_ 0sy.. pause
}
v.. operationOnPoin.s()
{
    Poin.2D p1(10, 67)sy.. pause
    Poin.2D p2(50, 3)sy.. pause // 60,70

    Poin.2D sum _ add(p1,p2)sy.. pause

    c__ __  sum.getX() __  e..
    c__ __  sum.getY() __  e..


}
