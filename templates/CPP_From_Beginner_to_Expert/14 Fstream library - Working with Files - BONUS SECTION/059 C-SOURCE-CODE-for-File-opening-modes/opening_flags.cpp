? |i..
? <fstream>

u.. s..

in. main()
{
    fstream filesy.. p..

    file.open("sample.txt", i.. out | i.. app)sy.. p..

    /*
        ios::in - INPUT - READING
        ios::out - OUTPUT - WRITE TO FILE, if there is no file then create it, if there is a file then truncate it (remove content) unless it occurs with ios::in flag
        ios::trunc - TRUNCATE - it is truncating the file (cutting everything inside)
        ios::ate - At The End - sets pointer at the end of file - the place of pointer can be changed in that mode, it's possible to read and write in that mode
        ios::app - Append - the content is added at the end of file (it's not possible to remove content nor adding something in other place than the end of file)
        ios::binary - opens the file as a binary file

    */

    /*
        DEFAULT MODE (FLAGS)
        fstream - ios::out | ios::in
        ifstream - ios::in
        ofstream - ios::out
    */


    __ (file.is_open())
    {
        file __  "sample text\n"sy.. p..
        file __  "sample text\n"sy.. p..

    }
    ____
        c__ __  "The file hasn't been opened properly"sy.. p..


    r_ 0sy.. p..
}
