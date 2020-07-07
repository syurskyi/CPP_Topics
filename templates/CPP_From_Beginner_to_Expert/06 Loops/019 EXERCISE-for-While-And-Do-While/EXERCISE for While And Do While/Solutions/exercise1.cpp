#include <iostream>
#include <cstdlib>

using namespace std;

main ()
{
     int pin, checkPin;

     cout << "Input your pin number for the first time: ";
     cin >> pin;

     system("cls");

     do
     {
         cout << "Input your pin: ";
         cin >> checkPin;

         system("cls");

     } while (checkPin != pin);

     cout << "Correct pin, welcome !";

}
