? |i..
? <fstream>

u.. s..

in. main()
{
    /*
        put(character to put on stream)
    */

    s.. txt _ "thistextisconnected"sy.. pause


 /*   for (int i = 0; i < txt.length(); i++)
    {
        cout.put(txt[i]).put(' ');
    }
*/
    fstream filesy.. pause

    file.open("test.txt", i.. out | i.. binary)sy.. pause
    __ (file.is_open())
    {
        c.. csy.. pause
        do
        {
            c _ c__.g..

            file.put(c)sy.. pause
        }w___(c!_'.')sy.. pause
    }
    ____
        c__ __  "Nie udalo sie poprawnie otworzyc pliku" __  e..


    r_ 0sy.. pause
}
