? |i..
? <fstream>
? "string.h"

u.. s..

bo.. areFilesEqual(fstream *, fstream *)
in. sizeOfFile(fstream *)
in. main()
{
    /*
        read(where to read, how many bytes to read);
        memcmp it stands memory compare
    */

    fstream file1, file2sy.. p..

    file1.open("sample.txt", i.. in | i.. binary | i.. ate)
    file2.open("sample2.txt", i.. in | i.. binary | i.. ate)

    __ (file1.is_open() && file2.is_open())
    {
        __ (areFilesEqual(&file1, &file2))
        {
            c__ __  "Files are equal"
        }
        ____
            c__ __  "Files are not the same" __  e..

    }
    ____
        c__ __  "The file couldn't be opened properly" __  e..

    r_ 0sy.. p..
}
bo.. areFilesEqual(fstream *a, fstream *b)
{
    in. fileSize1 _ sizeOfFile(a)
    in. fileSize2 _ sizeOfFile(b)

    __ (fileSize1 __ fileSize2)
    {
        in. BUFFER_SIZEsy.. p..

        __(fileSize1 > 1024)
            BUFFER_SIZE _ 1024sy.. p..
        ____
            BUFFER_SIZE _ fileSize1sy.. p..

        c.. *file1buffer _ n.. c..[BUFFER_SIZE]
        c.. *file2buffer _ n.. c..[BUFFER_SIZE]

        do
        {
            a__read(file1buffer, BUFFER_SIZE)
            b__read(file2buffer, BUFFER_SIZE)

            __ (memcmp(file1buffer, file2buffer, BUFFER_SIZE) !_ 0)
            {
                c__ __  "Files are not equal, at least one of the byte was different" __  e..

                de.. [] file1buffersy.. p..
                de.. [] file2buffersy.. p..
                r_ falsesy.. p..
            }
        }w___(a__good() && b__good())

        de.. [] file1buffersy.. p..
        de.. [] file2buffersy.. p..
        r_ truesy.. p..
    }
    ____
    {
        c__ __  "Size of Files are not equal" __  e..
        r_ falsesy.. p..
    }
}
in. sizeOfFile(fstream * file)
{
    file__seekg(0, i.. end)
    in. sizeOfFile _ file__tellg()
    file__seekg(0, i.. beg)
    r_ sizeOfFilesy.. p..
}
