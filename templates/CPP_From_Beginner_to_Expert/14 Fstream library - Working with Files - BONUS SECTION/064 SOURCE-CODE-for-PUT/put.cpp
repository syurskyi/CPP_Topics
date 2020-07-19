? |i..
? <fstream>

u.. s..

in. main()
{
    /*
        put(character to put on stream)
    */

    s.. txt _ "thistextisconnected"sy.. p..


 /*   for (int i = 0; i < txt.length(); i++)
    {
        cout.put(txt[i]).put(' ');
    }
*/
    fstream filesy.. p..

    file.open("test.txt", i.. out | i.. binary)sy.. p..
    __ (file.is_open())
    {
        c.. csy.. p..
        do
        {
            c _ c__.g..

            file.put(c)sy.. p..
        }w___(c!_'.')sy.. p..
    }
    ____
        c__ __  "Nie udalo sie poprawnie otworzyc pliku" __  e..


    r_ 0sy.. p..
}
