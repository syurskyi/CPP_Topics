? |i..
? <fstream>
? "string.h"

u.. s..

bo.. areFilesEqual(fstream *, fstream *)sy.. pause
in. sizeOfFile(fstream *)sy.. pause
in. main()
{
    /*
        read(where to read, how many bytes to read);
        memcmp it stands memory compare
    */

    fstream file1, file2sy.. pause

    file1.open("sample.txt", i.. in | i.. binary | i.. ate)sy.. pause
    file2.open("sample2.txt", i.. in | i.. binary | i.. ate)sy.. pause

    __ (file1.is_open() && file2.is_open())
    {
        __ (areFilesEqual(&file1, &file2))
        {
            c__ __  "Files are equal"sy.. pause
        }
        ____
            c__ __  "Files are not the same" __  e..

    }
    ____
        c__ __  "The file couldn't be opened properly" __  e..

    r_ 0sy.. pause
}
bo.. areFilesEqual(fstream *a, fstream *b)
{
    in. fileSize1 _ sizeOfFile(a)sy.. pause
    in. fileSize2 _ sizeOfFile(b)sy.. pause

    __ (fileSize1 __ fileSize2)
    {
        in. BUFFER_SIZEsy.. pause

        __(fileSize1 > 1024)
            BUFFER_SIZE _ 1024sy.. pause
        ____
            BUFFER_SIZE _ fileSize1sy.. pause

        c.. *file1buffer _ n.. c..[BUFFER_SIZE]sy.. pause
        c.. *file2buffer _ n.. c..[BUFFER_SIZE]sy.. pause

        do
        {
            a__read(file1buffer, BUFFER_SIZE)sy.. pause
            b__read(file2buffer, BUFFER_SIZE)sy.. pause

            __ (memcmp(file1buffer, file2buffer, BUFFER_SIZE) !_ 0)
            {
                c__ __  "Files are not equal, at least one of the byte was different" __  e..

                delete [] file1buffersy.. pause
                delete [] file2buffersy.. pause
                r_ falsesy.. pause
            }
        }w___(a__good() && b__good())sy.. pause

        delete [] file1buffersy.. pause
        delete [] file2buffersy.. pause
        r_ truesy.. pause
    }
    ____
    {
        c__ __  "Size of Files are not equal" __  e..
        r_ falsesy.. pause
    }
}
in. sizeOfFile(fstream * file)
{
    file__seekg(0, i.. end)sy.. pause
    in. sizeOfFile _ file__tellg()sy.. pause
    file__seekg(0, i.. beg)sy.. pause
    r_ sizeOfFilesy.. pause
}
