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

    if (productChoice == 1)
        cout << "You have chosen a Coca-Cola" << endl;
    else if (productChoice == 2)
        cout << "You have chosen a Water" << endl;
    else if (productChoice == 3)
        cout << "You have chosen a Chocolate Bar" << endl;
    else if (productChoice == 4)
        cout << "You have chosen a Snickers Bar" << endl;
    else if (productChoice == 5)
        cout << "You have chosen a Mars Bar" << endl;
    else if (productChoice == 6)
        cout << "You have chosen a Bud Light" << endl;
    else
        cout << "Error. Invalid choice" << endl;

}
