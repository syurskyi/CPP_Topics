#include <iostream>

using namespace std;

main ()
{

    char lowerCaseLetter = 'a';
    char upperCaseLetter = 'A';

    for (int i = 0; i <= ('Z'-'A'); i++) //A has a value 65 in ASCII table, B has 66, C has 67 and so on. Z has a value 90 so the loop iterates 25 times in order to sort through the alphabet
    {
        cout << upperCaseLetter << " ";
        cout << lowerCaseLetter << " ";

        lowerCaseLetter++;
        upperCaseLetter++;
    }

}
