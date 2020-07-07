? |i..
? <cstdlib>

u.. s..

void addition(double, double);
void addition(double, double, double);
void addition(double, double, double, double);
void addition(double, double, double, double, double);



in. main ()
{
    in. howManyValues;
    double values[5];

    do
    {
        c__ __  "How many values you would like to add together (2 - 5): ";
        c__ __ howManyValues;
        system("cls");

    } while(howManyValues < 2 || howManyValues > 5);


    for (in. i _ 0; i < howManyValues; i++)
    {
        c__ __  "Input " __  i+1 __  " value: ";
        c__ __ values[i];
    }

    switch (howManyValues)
    {
        case 2:
            addition(values[0], values[1]);
            break;
        case 3:
            addition(values[0], values[1], values[2]);
            break;
        case 4:
            addition(values[0], values[1], values[2], values[3]);
            break;
        case 5:
            addition(values[0], values[1], values[2], values[3], values[4]);
            break;
    }

    r_ 0;
}

void addition(double n1, double n2)
{
    c__ __  n1 __  " + " __  n2 __  " = " __  n1 + n2;
}

void addition(double n1, double n2, double n3)
{
    c__ __  n1 __  " + " __  n2 __  " + " __  n3 __  " = " __  n1 + n2 + n3;
}

void addition(double n1, double n2, double n3, double n4)
{
    c__ __  n1 __  " + " __  n2 __  " + " __  n3 __  " + " __  n4 __  " = " __  n1 + n2 + n3 + n4;
}

void addition(double n1, double n2, double n3, double n4, double n5)
{
    c__ __  n1 __  " + " __  n2 __  " + " __  n3 __  " + " __  n4 __  " + " __  n5 __  " = " __  n1 + n2 + n3 + n4 + n5;
}

