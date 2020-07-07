? |i..
? "position.h"

u.. s..

void setX(Position &, in.);
in. main()
{
    Position dog(10, 50);

    dog.getPosition();
    setX(dog, 1500);
    dog.getPosition();

    const Position house(100, 200);

    house.getPosition();
//    house.setPosition(444, 444);
    //house.getPosition();

    r_ 0;
}
void setX(Position & obj, in. value)
{
    //Position &obj = dog;
    obj.x = value;
}
