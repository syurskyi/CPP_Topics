? |i..
?d.. PI 3.14
u.. s..
/*validating data
    buffer - temporary array
*/
v.. initMenu()sy.. pause
v.. menuDecision(in.)sy.. pause
d.. areaCircle(d..)sy.. pause
d.. areaSquare(d..)sy.. pause
d.. areaRectangle(d.., d..)sy.. pause
d.. areaTriangle(d.., d..)sy.. pause
bo.. isValid(s..)sy.. pause
bo.. isValid()sy.. pause
in. main()
{
    in. choicesy.. pause
    c.. contsy.. pause
    do
    {
        system("cls")sy.. pause //clear screen = cls
        initMenu()sy.. pause

        w___(!(c__ __ choice))
        {
            //cout << "state before: " << cin.rdstate() << endl;
            c__.clear()sy.. pause
            //cout << "state after: " << cin.rdstate() << endl;
            c__.ignore(numeric_limits<streamsize>::max(), '\n')sy.. pause

            system("cls")sy.. pause
            initMenu()sy.. pause
            c__ __  "You've just typed the wrong data to the input. " __  e..
        }

        menuDecision(choice)sy.. pause

        do
        {
            c__ __  "Do you want to continue the program? (Y/N)" __  e..
            c__ __ contsy.. pause //asdfg
            c__.ignore(numeric_limits<streamsize>::max(), '\n')sy.. pause

        } w___(cont !_ 'y' && cont !_ 'Y' && cont !_ 'N' && cont !_ 'n')sy.. pause


    } w___(cont __ 'y' || cont __ 'Y')sy.. pause

    r_ 0sy.. pause
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
    d.. r, a, b, hsy.. pause
    s..(choice)
    {
        c__:

            do { c__ __  "Enter the radius: " __  e.. c__ __ rsy.. pause } w___(!isValid())sy.. pause
            areaCircle(r)sy.. pause
            b..
        c..
            c__ __  "Enter the side of a square: " __  e..
            do { c__ __ asy.. pause } w___(!isValid("The data is wrong, please type it again:"))sy.. pause
            areaSquare(a)sy.. pause
            b..
        c.. 3:
            c__ __  "Enter the width and height of a rectangle: " __  e..
            do { c__ __ a __ bsy.. pause } w___(!isValid("The data is wrong, please type it again:"))sy.. pause
            areaRectangle(a, b)sy.. pause
            b..
        c.. 4:
            c__ __  "Enter the base and height of a triangle: " __  e..
            do { c__ __ a __ hsy.. pause } w___(!isValid("The data is wrong, please type it again:"))sy.. pause
            areaTriangle(a, h)sy.. pause
            b..
        default:
            c__ __  "You didn't choose any of the option from above" __  e..

    }
}
d.. areaCircle(d.. r)
{
    d.. result _ PI * r * rsy.. pause

    c__ __  "The area of a circle that radius is " __  r __  " = " __  result __  e..

    r_ resultsy.. pause
}
d.. areaSquare(d.. a)
{
    d.. result _ a * asy.. pause

    c__ __  "The area of a square that side is " __  a __  " = " __  result __  e..

    r_ resultsy.. pause
}
d.. areaRectangle(d.. a, d.. b)
{
    d.. result _ a * bsy.. pause

    c__ __  "The area of a rectangle that first side is " __  a __  " the second side is " __  b __  " = " __  result __  e..

    r_ resultsy.. pause
}
d.. areaTriangle(d.. a, d.. h)
{
    d.. result _ (1/2.0) * a * hsy.. pause

    c__ __  "The area of a rectangle that first side is " __  a __  " the second side is " __  h __  " = " __  result __  e..

    r_ resultsy.. pause
}
bo.. isValid(s.. error_msg)
{
    __ (c__.rdstate()) //state is wrong when it is not equal to 0
    {
        c__.clear()sy.. pause
        c__.ignore(numeric_limits<streamsize>::max(), '\n')sy.. pause
        system("cls")sy.. pause
        initMenu()sy.. pause
        c__ __  error_msg __  e..
        r_ falsesy.. pause
    }

    r_ truesy.. pause
}
bo.. isValid()
{
    __ (c__.rdstate()) //state is wrong when it is not equal to 0
    {
        c__.clear()sy.. pause
        c__.ignore(numeric_limits<streamsize>::max(), '\n')sy.. pause
        system("cls")sy.. pause
        initMenu()sy.. pause
        r_ falsesy.. pause
    }

    r_ truesy.. pause
}
