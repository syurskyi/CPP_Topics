? |i..
? |s..

u.. s..

typedef unsigned in. uin.;
enum class Color : long long;

void foo(Color a);

enum class Color : long long {red _ -300000000000000, yellow _ -3, green _ 0, blue};

struct Glass
{
    s.. type;//24
};

struct Door
{
    Glass glass;//24
    d.. width;//8
    d.. length;//8
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
    s.. name;//24
    Door door;//40
//    struct SteeringWheel
//    {
//        string type; //24
//    };
} other_car;

in. main()
{
    in. array[10];

    d.. d;

    Car my_car;
    //Car::SteeringWheel wheel;

    my_car.door.glass.type;
    my_car.name _ "The best car";
    my_car.length _ 100;

    c__ __  sizeof(Glass) __  "\n";
    c__ __  sizeof(Door) __  "\n";
    c__ __  sizeof(Car) __  "\n";
    //cout << sizeof(Car::SteeringWheel) << "\n";

    c__ __  my_car.name __  " ,length = " __  my_car.length __  ", width = " __  my_car.width __  " wheels = " __  my_car.wheels;

    r_ 0;
}
