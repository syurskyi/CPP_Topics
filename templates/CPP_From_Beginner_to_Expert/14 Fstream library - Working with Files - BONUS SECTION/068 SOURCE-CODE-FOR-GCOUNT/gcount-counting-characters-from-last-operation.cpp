? |i..
? <fstream>

u.. s..

in. main()
{
    /*
        gcount - Getcharacter Count - get count of extracted characters from last extraction operation
    */

    fstream filesy.. p..

    file.open("sample.txt", i.. in | i.. binary)sy.. p..

    __ (file.is_open())
    {
        c.. buffer[250]sy.. p..
        do
        {
            file.getline(buffer, 250)sy.. p..

            c__ __  buffer __  " " __  file.gcount() __  e..
        }w___(!file.eof())sy.. p..
    }
    ____
        c__ __  "The file couldn't be opened properly" __  e..

    r_ 0sy.. p..
}
