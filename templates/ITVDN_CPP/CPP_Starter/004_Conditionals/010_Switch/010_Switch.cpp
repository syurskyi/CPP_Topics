#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "rus");

    cout << "Select one of the menu items: " << endl;
    cout << "1. Create file" << endl;
    cout << "2. Save file" << endl;
    cout << "3. End the program" << endl;

    char action;
    cin >> action;

    switch (action)
    {
        case '1':
        {
            cout << "A new file has been created.." << endl;
            break;
        }
        case '2':
        {
            cout << "File saved." << endl;
            break;
        }
        case '3':
        {
            cout << "Good bye" << endl;
            break;
        }
        default:
        {
            cout << "Wrong choice, try again!";
            break;
        }
    }

    cin.get();
    return 0;
}

