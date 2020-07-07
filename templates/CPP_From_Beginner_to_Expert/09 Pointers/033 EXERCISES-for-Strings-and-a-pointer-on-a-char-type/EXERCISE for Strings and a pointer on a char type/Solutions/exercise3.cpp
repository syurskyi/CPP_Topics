? |i..

u.. s..

in. main ()
{
    in. charactersNumber;

    c__ __  "How many characters would you like to input: ";
    c__ __ charactersNumber;

    char * characters _ new char[charactersNumber];

    for (in. i _ 0; i < charactersNumber; i++)
    {
        c__ __  i+1 __  " character: ";
        c__ __ characters[i];
    }

    c__ __  "The inputted string of characters was: ";

    for (in. i _ 0; i < charactersNumber; i++)
    {
        c__ __  *(characters+i);
    }


    delete [] characters;


    r_ 0;
}

