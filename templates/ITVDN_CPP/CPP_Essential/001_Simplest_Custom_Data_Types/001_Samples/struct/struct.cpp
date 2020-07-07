? |i..
? <string>

u.. s..

typedef unsigned in. uin.;
enum class Color : long long;

void foo(Color a);

enum class Color : long long {red = -300000000000000, yellow = -3, green = 0, blue};

struct Glass
{
    string type;//24
};

struct Door
{
    Glass glass;//24
    double width;//8
    double length;//8
};

struct Car
{
    in. wheels : 16;//4
    in. length : 16;//4
    in. width : 16;//4
    uin. seats : 16;//4
    in. for_bo.. : 31;
    bo.. a : 1;
    in. q;
    string name;//24
    Door door;//40
//    struct SteeringWheel
//    {
//        string type; //24
//    };
} other_car;

in. main()
{
    in. array[10];

    double d;

    Car my_car;
    //Car::SteeringWheel wheel;

    my_car.door.glass.type;
    my_car.name = "The best car";
    my_car.length = 100;

    c__ __  sizeof(Glass) __  "\n";
    c__ __  sizeof(Door) __  "\n";
    c__ __  sizeof(Car) __  "\n";
    //cout << sizeof(Car::SteeringWheel) << "\n";

    c__ __  my_car.name __  " ,length = " __  my_car.length __  ", width = " __  my_car.width __  " wheels = " __  my_car.wheels;

    r_ 0;
}
