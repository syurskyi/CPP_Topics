? |i..
? <fstream>

u.. s..

in. main()
{
    /*
        put(character to put on stream)
    */

    string txt = "thistextisconnected";


 /*   for (int i = 0; i < txt.length(); i++)
    {
        cout.put(txt[i]).put(' ');
    }
*/
    fstream file;

    file.open("test.txt", i.. out | i.. binary);
    if (file.is_open())
    {
        char c;
        do
        {
            c = c__.g..

            file.put(c);
        }while(c!='.');
    }
    else
        c__ __  "Nie udalo sie poprawnie otworzyc pliku" __  e..


    r_ 0;
}
