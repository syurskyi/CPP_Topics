#include <iostream>

using namespace std;

int main ()
{
    int charactersNumber;

    cout << "How many characters would you like to input: ";
    cin >> charactersNumber;

    char * characters = new char[charactersNumber];

    for (int i = 0; i < charactersNumber; i++)
    {
        cout << i+1 << " character: ";
        cin >> characters[i];
    }

    cout << "The inputted string of characters was: ";

    for (int i = 0; i < charactersNumber; i++)
    {
        cout << *(characters+i);
    }


    delete [] characters;


    return 0;
}

