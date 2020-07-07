#include <iostream>
#include <cstdlib>

using namespace std;

void addition(double, double);
void addition(double, double, double);
void addition(double, double, double, double);
void addition(double, double, double, double, double);



int main ()
{
    int howManyValues;
    double values[5];

    do
    {
        cout << "How many values you would like to add together (2 - 5): ";
        cin >> howManyValues;
        system("cls");

    } while(howManyValues < 2 || howManyValues > 5);


    for (int i = 0; i < howManyValues; i++)
    {
        cout << "Input " << i+1 << " value: ";
        cin >> values[i];
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

    return 0;
}

void addition(double n1, double n2)
{
    cout << n1 << " + " << n2 << " = " << n1 + n2;
}

void addition(double n1, double n2, double n3)
{
    cout << n1 << " + " << n2 << " + " << n3 << " = " << n1 + n2 + n3;
}

void addition(double n1, double n2, double n3, double n4)
{
    cout << n1 << " + " << n2 << " + " << n3 << " + " << n4 << " = " << n1 + n2 + n3 + n4;
}

void addition(double n1, double n2, double n3, double n4, double n5)
{
    cout << n1 << " + " << n2 << " + " << n3 << " + " << n4 << " + " << n5 << " = " << n1 + n2 + n3 + n4 + n5;
}

