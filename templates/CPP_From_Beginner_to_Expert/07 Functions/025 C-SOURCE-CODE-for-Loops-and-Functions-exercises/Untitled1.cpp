? |i..
?d.. PI 3.14
u.. s..

v.. initMenu()sy.. p..
v.. menuDecision(in.)sy.. p..
d.. areaCircle(d..)sy.. p..
d.. areaSquare(d..)sy.. p..
d.. areaRectangle(d.., d..)sy.. p..
d.. areaTriangle(d.., d..)sy.. p..
in. main()
{
    in. choicesy.. p..
    c.. contsy.. p..
    do
    {
        system("cls")sy.. p.. //clear screen = cls
        initMenu()sy.. p..

        c__ __ choicesy.. p..

        menuDecision(choice)sy.. p..

        do
        {
            c__ __  "Do you want to continue the program? (Y/N)" __  e..
            c__ __ contsy.. p..
        } w___(cont !_ 'y' && cont !_ 'Y' && cont !_ 'N' && cont !_ 'n')sy.. p..


    } w___(cont __ 'y' || cont __ 'Y')sy.. p..

    r_ 0sy.. p..
}
v.. initMenu()
{
    c__ __  "Enter option:" __  e..
    c__ __  "1. Circle" __  e..
    c__ __  "2. Square" __  e..
    c__ __  "3. Rectangle" __  e..
    c__ __  "4. Triangle" __  e..
}
v.. menuDecision(in. choice)
{
    d.. r, a, b, hsy.. p..
    s..(choice)
    {
        c__:
            c__ __  "Enter the radius: " __  e..
            c__ __ rsy.. p..
            areaCircle(r)sy.. p..
            b..
        c..
            c__ __  "Enter the side of a square: " __  e..
            c__ __ asy.. p..
            areaSquare(a)sy.. p..
            b..
        c.. 3:
            c__ __  "Enter the width and height of a rectangle: " __  e..
            c__ __ a __ bsy.. p..
            areaRectangle(a, b)sy.. p..
            b..
        c.. 4:
            c__ __  "Enter the base and height of a triangle: " __  e..
            c__ __ a __ hsy.. p..
            areaTriangle(a, h)sy.. p..
            b..
        def..
            c__ __  "You didn't choose any of the option from above" __  e..

    }
}
d.. areaCircle(d.. r)
{
    d.. result _ PI * r * rsy.. p..

    c__ __  "The area of a circle that radius is " __  r __  " = " __  result __  e..

    r_ resultsy.. p..
}
d.. areaSquare(d.. a)
{
    d.. result _ a * asy.. p..

    c__ __  "The area of a square that side is " __  a __  " = " __  result __  e..

    r_ resultsy.. p..
}
d.. areaRectangle(d.. a, d.. b)
{
    d.. result _ a * bsy.. p..

    c__ __  "The area of a rectangle that first side is " __  a __  " the second side is " __  b __  " = " __  result __  e..

    r_ resultsy.. p..
}
d.. areaTriangle(d.. a, d.. h)
{
    d.. result _ (1/2.0) * a * hsy.. p..

    c__ __  "The area of a rectangle that first side is " __  a __  " the second side is " __  h __  " = " __  result __  e..

    r_ resultsy.. p..
}
