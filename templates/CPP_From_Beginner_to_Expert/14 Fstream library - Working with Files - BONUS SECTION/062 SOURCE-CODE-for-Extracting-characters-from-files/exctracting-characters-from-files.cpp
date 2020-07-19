? |i..
? <fstream>

u.. s..

in. main()
{
    /*
        getline(where to store the extracted characters, how many characters should be taken unlles, seperator(delimiter)) - extracts seperators and delete it
        get(where to store the extracted characters, how many characters should be taken unlles, seperator(delimiter)) - doesn't extract seperator
        ignore(how_many_characters_to_extracte AND TO IGNORE THEM, seperator) - extracts characters

        get();
    */

    fstream filesy.. p..

    file.open("sample.txt", i.. in | i.. binary)sy.. p..

    __ (file.is_open())
    {
        c.. first, secondsy.. p..
        c.. buffer[50]sy.. p..

        c__ __ buffersy.. p..

        c__ __  buffer __  e..
        do
        {
            file.getline(buffer, 50, ' ')sy.. p..

            second _ file.g..

            file.ignore(40, '\n')sy.. p..

            c__ __  buffer __  " " __  second __  ". " __  e..

        } w___(!file.eof())sy.. p..



    }
    ____
        c__ __  "The file couldn't be opened properly" __  e..

    r_ 0sy.. p..
}
