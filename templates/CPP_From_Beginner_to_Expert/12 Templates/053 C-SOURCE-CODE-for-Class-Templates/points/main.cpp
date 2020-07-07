#include <iostream>
#include "point.h"

using namespace std;
/* function templates generalization*/

void operationOnPoints();

template<typename T, typename T2>
T add(T var1, T2 var2)
{
    return var1 + var2;
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
typedef Point<int> PointInt;
int main()
{
    operationOnPoints();

    //cout << add<double, double>(2, 5.6) << endl;


   // cout << static_cast<int>(6.5) << endl;

    return 0;
}
void operationOnPoints()
{
 //   PointInt a(5);
    Point<int*> b(49);

    //cout << a.getX() << endl;
    //cout << b.getX() << endl;
}
