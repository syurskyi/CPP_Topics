? |i..
#define PI 3.14
u.. s..

void initMenu();
void menuDecision(in.);
d.. areaCircle(d..);
d.. areaSquare(d..);
d.. areaRectangle(d.., d..);
d.. areaTriangle(d.., d..);
in. main()
{
    in. choice;
    c.. cont;
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
        } w___(cont !_ 'y' && cont !_ 'Y' && cont !_ 'N' && cont !_ 'n');


    } w___(cont __ 'y' || cont __ 'Y');

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
    d.. r, a, b, h;
    s..(choice)
    {
        c__:
            c__ __  "Enter the radius: " __  e..
            c__ __ r;
            areaCircle(r);
            b..
        c..
            c__ __  "Enter the side of a square: " __  e..
            c__ __ a;
            areaSquare(a);
            b..
        c.. 3:
            c__ __  "Enter the width and height of a rectangle: " __  e..
            c__ __ a __ b;
            areaRectangle(a, b);
            b..
        c.. 4:
            c__ __  "Enter the base and height of a triangle: " __  e..
            c__ __ a __ h;
            areaTriangle(a, h);
            b..
        default:
            c__ __  "You didn't choose any of the option from above" __  e..

    }
}
d.. areaCircle(d.. r)
{
    d.. result _ PI * r * r;

    c__ __  "The area of a circle that radius is " __  r __  " = " __  result __  e..

    r_ result;
}
d.. areaSquare(d.. a)
{
    d.. result _ a * a;

    c__ __  "The area of a square that side is " __  a __  " = " __  result __  e..

    r_ result;
}
d.. areaRectangle(d.. a, d.. b)
{
    d.. result _ a * b;

    c__ __  "The area of a rectangle that first side is " __  a __  " the second side is " __  b __  " = " __  result __  e..

    r_ result;
}
d.. areaTriangle(d.. a, d.. h)
{
    d.. result _ (1/2.0) * a * h;

    c__ __  "The area of a rectangle that first side is " __  a __  " the second side is " __  h __  " = " __  result __  e..

    r_ result;
}
