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

    fstream file;

    file.open("sample.txt", i.. in | i.. binary);

    __ (file.is_open())
    {
        char first, second;
        char buffer[50];

        c__ >> buffer;

        c__ __  buffer __  e..
        do
        {
            file.getline(buffer, 50, ' ');

            second = file.g..

            file.ignore(40, '\n');

            c__ __  buffer __  " " __  second __  ". " __  e..

        } while(!file.eof());



    }
    ____
        c__ __  "The file couldn't be opened properly" __  e..

    r_ 0;
}
