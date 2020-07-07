? |i..

u.. s..

in. main ()
{
    in. charactersNumber;

    c__ __  "How many characters would you like to input: ";
    c__ >> charactersNumber;

    char * characters = new char[charactersNumber];

    for (in. i = 0; i < charactersNumber; i++)
    {
        c__ __  i+1 __  " character: ";
        c__ >> characters[i];
    }

    c__ __  "The inputted string of characters was: ";

    for (in. i = 0; i < charactersNumber; i++)
    {
        c__ __  *(characters+i);
    }


    delete [] characters;


    r_ 0;
}

