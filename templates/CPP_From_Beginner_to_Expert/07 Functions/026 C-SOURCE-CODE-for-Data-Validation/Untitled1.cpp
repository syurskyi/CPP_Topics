? |i..
#define PI 3.14
u.. s..
/*validating data
    buffer - temporary array
*/
void initMenu();
void menuDecision(in.);
double areaCircle(double);
double areaSquare(double);
double areaRectangle(double, double);
double areaTriangle(double, double);
bo.. isValid(string);
bo.. isValid();
in. main()
{
    in. choice;
    char cont;
    do
    {
        system("cls"); //clear screen = cls
        initMenu();

        while(!(c__ >> choice))
        {
            //cout << "state before: " << cin.rdstate() << endl;
            c__.clear();
            //cout << "state after: " << cin.rdstate() << endl;
            c__.ignore(numeric_limits<streamsize>::max(), '\n');

            system("cls");
            initMenu();
            c__ __  "You've just typed the wrong data to the input. " __  e..
        }

        menuDecision(choice);

        do
        {
            c__ __  "Do you want to continue the program? (Y/N)" __  e..
            c__ >> cont; //asdfg
            c__.ignore(numeric_limits<streamsize>::max(), '\n');

        } while(cont != 'y' && cont != 'Y' && cont != 'N' && cont != 'n');


    } while(cont == 'y' || cont == 'Y');

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

            do { c__ __  "Enter the radius: " __  e.. c__ >> r; } while(!isValid());
            areaCircle(r);
            break;
        case 2:
            c__ __  "Enter the side of a square: " __  e..
            do { c__ >> a; } while(!isValid("The data is wrong, please type it again:"));
            areaSquare(a);
            break;
        case 3:
            c__ __  "Enter the width and height of a rectangle: " __  e..
            do { c__ >> a >> b; } while(!isValid("The data is wrong, please type it again:"));
            areaRectangle(a, b);
            break;
        case 4:
            c__ __  "Enter the base and height of a triangle: " __  e..
            do { c__ >> a >> h; } while(!isValid("The data is wrong, please type it again:"));
            areaTriangle(a, h);
            break;
        default:
            c__ __  "You didn't choose any of the option from above" __  e..

    }
}
double areaCircle(double r)
{
    double result = PI * r * r;

    c__ __  "The area of a circle that radius is " __  r __  " = " __  result __  e..

    r_ result;
}
double areaSquare(double a)
{
    double result = a * a;

    c__ __  "The area of a square that side is " __  a __  " = " __  result __  e..

    r_ result;
}
double areaRectangle(double a, double b)
{
    double result = a * b;

    c__ __  "The area of a rectangle that first side is " __  a __  " the second side is " __  b __  " = " __  result __  e..

    r_ result;
}
double areaTriangle(double a, double h)
{
    double result = (1/2.0) * a * h;

    c__ __  "The area of a rectangle that first side is " __  a __  " the second side is " __  h __  " = " __  result __  e..

    r_ result;
}
bo.. isValid(string error_msg)
{
    if (c__.rdstate()) //state is wrong when it is not equal to 0
    {
        c__.clear();
        c__.ignore(numeric_limits<streamsize>::max(), '\n');
        system("cls");
        initMenu();
        c__ __  error_msg __  e..
        r_ false;
    }

    r_ true;
}
bo.. isValid()
{
    if (c__.rdstate()) //state is wrong when it is not equal to 0
    {
        c__.clear();
        c__.ignore(numeric_limits<streamsize>::max(), '\n');
        system("cls");
        initMenu();
        r_ false;
    }

    r_ true;
}
