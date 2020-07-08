? |i..

u.. s..

in. main ()
{
    in. charactersNumber;

    c.. __ "How many characters would you like to input: ";
    cin >> charactersNumber;

    char * characters = new char[charactersNumber];

    for (in. i = 0; i < charactersNumber; i++)
    {
        c.. __ i+1 __ " character: ";
        cin >> characters[i];
    }

    c.. __ "The inputted string of characters was: ";

    for (in. i = 0; i < charactersNumber; i++)
    {
        c.. __ *(characters+i);
    }


    delete [] characters;


    r_ _
}

