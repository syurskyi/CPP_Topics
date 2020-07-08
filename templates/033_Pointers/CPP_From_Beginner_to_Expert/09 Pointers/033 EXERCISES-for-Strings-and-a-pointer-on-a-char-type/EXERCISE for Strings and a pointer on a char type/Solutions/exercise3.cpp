? |i..

u.. s..

in. main ()
{
    in. charactersNumber

    c.. __ "How many characters would you like to input: "
    cin >> charactersNumber

    ch.. * characters _ new ch..[charactersNumber]

    ___ (in. i _ 0 i < charactersNumber i++)
    {
        c.. __ i+1 __ " character: "
        cin >> characters[i]
    }

    c.. __ "The inputted string of characters was: "

    ___ (in. i _ 0 i < charactersNumber i++)
    {
        c.. __ *(characters+i)
    }


    delete [] characters


    r_ _
}

