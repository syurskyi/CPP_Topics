#include <iostream>

using namespace std;

main ()
{
    int productChoice;

    cout << "1.Coca-Cola" << endl;
    cout << "2.Water" << endl;
    cout << "3.Chocolate Bar" << endl;
    cout << "4.Snickers Bar" << endl;
    cout << "5.Mars Bar" << endl;
    cout << "6.Bud Light" << endl << endl;
    cout << "Enter your choice: ";

    cin >> productChoice;

    switch (productChoice)
    {
        case 1:
            cout << "You have chosen a Coca-Cola" << endl;
            break;
        case 2:
            cout << "You have chosen a Water" << endl;
            break;
        case 3:
            cout << "You have chosen a Chocolate Bar" << endl;
            break;
        case 4:
            cout << "You have chosen a Snickers Bar" << endl;
            break;
        case 5:
            cout << "You have chosen a Mars Bar" << endl;
            break;
        case 6:
            cout << "You have chosen a Bud Light" << endl;
            break;
        default:
            cout << "Error. Invalid choice" << endl;
            break;
    }
}
