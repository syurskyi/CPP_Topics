#include <iostream>

using namespace std;

main ()
{
    int choice;

    cout << "1. January" << endl;
    cout << "2. February" << endl;
    cout << "3. March" << endl;
    cout << "4. April" << endl;
    cout << "5. May" << endl;
    cout << "6. June" << endl;
    cout << "7. July" << endl;
    cout << "8. August" << endl;
    cout << "9. September" << endl;
    cout << "10. October" << endl;
    cout << "11. November" << endl;
    cout << "12. December" << endl;
    cout << "Choose the month: ";

    cin >> choice;

    switch (choice)
    {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            cout << "This month has 31 days" << endl;
            break;
        case 4:
        case 6:
        case 9:
        case 11:
            cout << "This month has 30 days" << endl;
            break;
        case 2:
        {
            int year;
            cout << "Input the year: ";
            cin >> year;

            bool isLeapYear = (((year%4 == 0) && (year%100 != 0)) || (year%400 == 0));

            if (isLeapYear)
                cout << "The month february has 29 days in year " << year << endl;
            else
                cout << "The month february has 28 days in year " << year << endl;

        }
        default:
            cout << "ERROR. Invalid choice.";

    }



}
