? |i..
? <fstream>

u.. s..

in. main()
{
    /*
        gcount - Getcharacter Count - get count of extracted characters from last extraction operation
    */

    fstream file;

    file.open("sample.txt", i.. in | i.. binary);

    __ (file.is_open())
    {
        char buffer[250];
        do
        {
            file.getline(buffer, 250);

            c__ __  buffer __  " " __  file.gcount() __  e..
        }while(!file.eof());
    }
    else
        c__ __  "The file couldn't be opened properly" __  e..

    r_ 0;
}
