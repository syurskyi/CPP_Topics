#include <iostream>
#include "point.h"

using namespace std;
/* inheritance between classes */

void operationOnPoints();

int main()
{
    operationOnPoints();

    return 0;
}
void operationOnPoints()
{
    Point2D p2(10, 67);

    p2.Point::setX(5);

    cout << p2.getX() << endl;
    cout << p2.getY() << endl;
}
