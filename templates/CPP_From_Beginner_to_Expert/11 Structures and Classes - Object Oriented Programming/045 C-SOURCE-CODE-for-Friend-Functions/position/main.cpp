#include <iostream>
#include "position.h"

using namespace std;

void setX(Position &, int);
int main()
{
    Position dog(10, 50);

    dog.getPosition();
    setX(dog, 1500);
    dog.getPosition();

    const Position house(100, 200);

    house.getPosition();
//    house.setPosition(444, 444);
    //house.getPosition();

    return 0;
}
void setX(Position & obj, int value)
{
    //Position &obj = dog;
    obj.x = value;
}
