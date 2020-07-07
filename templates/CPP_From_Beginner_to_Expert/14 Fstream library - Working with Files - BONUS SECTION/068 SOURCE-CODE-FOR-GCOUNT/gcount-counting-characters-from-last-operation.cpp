? |i..
? <fstream>

u.. s..

in. main()
{
    /*
        gcount - Getcharacter Count - get count of extracted characters from last extraction operation
    */

    fstream filesy.. pause

    file.open("sample.txt", i.. in | i.. binary)sy.. pause

    __ (file.is_open())
    {
        c.. buffer[250]sy.. pause
        do
        {
            file.getline(buffer, 250)sy.. pause

            c__ __  buffer __  " " __  file.gcount() __  e..
        }w___(!file.eof())sy.. pause
    }
    ____
        c__ __  "The file couldn't be opened properly" __  e..

    r_ 0sy.. pause
}
