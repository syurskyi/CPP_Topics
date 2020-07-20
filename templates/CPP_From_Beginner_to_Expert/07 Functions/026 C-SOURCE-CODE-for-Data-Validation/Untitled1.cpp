? |i..
?d.. PI 3.14
u.. s..
/*validating data
    buffer - temporary array
*/
v.. initMenu()
v.. menuDecision(in.)
d.. areaCircle(d..)
d.. areaSquare(d..)
d.. areaRectangle(d.., d..)
d.. areaTriangle(d.., d..)
bo.. isValid(s..)
bo.. isValid()
in. main()
{
    in. choicesy.. p..
    c.. contsy.. p..
    do
    {
        system("cls") //clear screen = cls
        initMenu()

        w___(!(c__ __ choice))
        {
            //cout << "state before: " << cin.rdstate() << endl;
            c__.clear()
            //cout << "state after: " << cin.rdstate() << endl;
            c__.ignore(numeric_limits<streamsize>::max(), '\n')

            system("cls")
            initMenu()
            c__ __  "You've just typed the wrong data to the input. " __  e..
        }

        menuDecision(choice)

        do
        {
            c__ __  "Do you want to continue the program? (Y/N)" __  e..
            c__ __ contsy.. p.. //asdfg
            c__.ignore(numeric_limits<streamsize>::max(), '\n')

        } w___(cont !_ 'y' && cont !_ 'Y' && cont !_ 'N' && cont !_ 'n')


    } w___(cont __ 'y' || cont __ 'Y')

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

            do { c__ __  "Enter the radius: " __  e.. c__ __ rsy.. p.. } w___(!isValid())
            areaCircle(r)
            b..
        c..
            c__ __  "Enter the side of a square: " __  e..
            do { c__ __ asy.. p.. } w___(!isValid("The data is wrong, please type it again:"))
            areaSquare(a)
            b..
        c.. 3:
            c__ __  "Enter the width and height of a rectangle: " __  e..
            do { c__ __ a __ bsy.. p.. } w___(!isValid("The data is wrong, please type it again:"))
            areaRectangle(a, b)
            b..
        c.. 4:
            c__ __  "Enter the base and height of a triangle: " __  e..
            do { c__ __ a __ hsy.. p.. } w___(!isValid("The data is wrong, please type it again:"))
            areaTriangle(a, h)
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
bo.. isValid(s.. error_msg)
{
    __ (c__.rdstate()) //state is wrong when it is not equal to 0
    {
        c__.clear()
        c__.ignore(numeric_limits<streamsize>::max(), '\n')
        system("cls")
        initMenu()
        c__ __  error_msg __  e..
        r_ falsesy.. p..
    }

    r_ truesy.. p..
}
bo.. isValid()
{
    __ (c__.rdstate()) //state is wrong when it is not equal to 0
    {
        c__.clear()
        c__.ignore(numeric_limits<streamsize>::max(), '\n')
        system("cls")
        initMenu()
        r_ falsesy.. p..
    }

    r_ truesy.. p..
}
