? |i..
#define PI 3.14
u.. s..

void initMenu();
void menuDecision(in.);
double areaCircle(double);
double areaSquare(double);
double areaRectangle(double, double);
double areaTriangle(double, double);
in. main()
{
    in. choice;
    char cont;
    do
    {
        system("cls"); //clear screen = cls
        initMenu();

        c__ __ choice;

        menuDecision(choice);

        do
        {
            c__ __  "Do you want to continue the program? (Y/N)" __  e..
            c__ __ cont;
        } while(cont !_ 'y' && cont !_ 'Y' && cont !_ 'N' && cont !_ 'n');


    } while(cont __ 'y' || cont __ 'Y');

    r_ 0;
}
void initMenu()
{
    c__ __  "Enter option:" __  e..
    c__ __  "1. Circle" __  e..
    c__ __  "2. Square" __  e..
    c__ __  "3. Rectangle" __  e..
    c__ __  "4. Triangle" __  e..
}
void menuDecision(in. choice)
{
    double r, a, b, h;
    switch(choice)
    {
        case 1:
            c__ __  "Enter the radius: " __  e..
            c__ __ r;
            areaCircle(r);
            break;
        case 2:
            c__ __  "Enter the side of a square: " __  e..
            c__ __ a;
            areaSquare(a);
            break;
        case 3:
            c__ __  "Enter the width and height of a rectangle: " __  e..
            c__ __ a __ b;
            areaRectangle(a, b);
            break;
        case 4:
            c__ __  "Enter the base and height of a triangle: " __  e..
            c__ __ a __ h;
            areaTriangle(a, h);
            break;
        default:
            c__ __  "You didn't choose any of the option from above" __  e..

    }
}
double areaCircle(double r)
{
    double result _ PI * r * r;

    c__ __  "The area of a circle that radius is " __  r __  " = " __  result __  e..

    r_ result;
}
double areaSquare(double a)
{
    double result _ a * a;

    c__ __  "The area of a square that side is " __  a __  " = " __  result __  e..

    r_ result;
}
double areaRectangle(double a, double b)
{
    double result _ a * b;

    c__ __  "The area of a rectangle that first side is " __  a __  " the second side is " __  b __  " = " __  result __  e..

    r_ result;
}
double areaTriangle(double a, double h)
{
    double result _ (1/2.0) * a * h;

    c__ __  "The area of a rectangle that first side is " __  a __  " the second side is " __  h __  " = " __  result __  e..

    r_ result;
}
