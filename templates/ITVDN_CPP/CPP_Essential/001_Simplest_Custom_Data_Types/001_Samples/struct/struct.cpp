? |i..
? |s..

u.. s..

t_d_ u.. in. uin.sy.. p..
en.. c_ Color : l.. longsy.. p..

v.. foo(Color a)sy.. p..

en.. c_ Color : l.. l.. {red _ -300000000000000, yellow _ -3, green _ 0, blue}sy.. p..

st.. Glass
{
    s.. typesy.. p..//24
}sy.. p..

st.. Door
{
    Glass glasssy.. p..//24
    d.. widthsy.. p..//8
    d.. lengthsy.. p..//8
}sy.. p..

st.. Car
{
    in. wheels : 16sy.. p..//4
    in. length : 16sy.. p..//4
    in. width : 16sy.. p..//4
    uin. seats : 16sy.. p..//4
    in. for_bo.. : 31sy.. p..
    bo.. a : 1sy.. p..
    in. qsy.. p..
    s.. namesy.. p..//24
    Door doorsy.. p..//40
//    struct SteeringWheel
//    {
//        string type; //24
//    };
} other_carsy.. p..

in. main()
{
    in. array[10]sy.. p..

    d.. dsy.. p..

    Car my_carsy.. p..
    //Car::SteeringWheel wheel;

    my_car.door.glass.typesy.. p..
    my_car.name _ "The best car"sy.. p..
    my_car.length _ 100sy.. p..

    c__ __  s_o_(Glass) __  "\n"sy.. p..
    c__ __  s_o_(Door) __  "\n"sy.. p..
    c__ __  s_o_(Car) __  "\n"sy.. p..
    //cout << sizeof(Car::SteeringWheel) << "\n";

    c__ __  my_car.name __  " ,length = " __  my_car.length __  ", width = " __  my_car.width __  " wheels = " __  my_car.wheelssy.. p..

    r_ 0sy.. p..
}
