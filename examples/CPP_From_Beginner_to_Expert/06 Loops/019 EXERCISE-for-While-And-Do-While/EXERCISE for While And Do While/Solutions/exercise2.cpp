#include <iostream>
#include <cstdlib>

using namespace std;

main ()
{
     int pin, checkPin;
     int counter = 5;

     cout << "Input your pin number for the first time: ";
     cin >> pin;

     system("cls");

     do
     {
         cout << "Input your pin(" << counter << " tries left): ";
         cin >> checkPin;

         system("cls");
         counter--;

     } while ((checkPin != pin) && (counter > 0));

     if (checkPin == pin)
     {
        cout << "Correct pin, welcome !";
     }
     else
        cout << "You have entered a wrong PIN code for 5 times !";

}
