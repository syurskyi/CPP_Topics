#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "rus");

    cout << "Enter the day number of the week: " << endl;

    int dayNumber;
    cin >> dayNumber;

    switch (dayNumber)
    {
        case 1:
        case 2:
        case 3:
        case 4:
        case 5:
        {
            cout << "Working day." << endl;
            break;
        }
        case 6:
        case 7:
        {
            cout << "Day off" << endl;
            break;
        }
        default:
        {
            cout << "There is no such day of the week." << endl;
            break;
        }            
    }
    return 0;
}

