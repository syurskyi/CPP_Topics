? |i..
? <fstream>
? "string.h"

u.. s..

bo.. areFilesEqual(fstream *, fstream *);
in. sizeOfFile(fstream *);
in. main()
{
    /*
        read(where to read, how many bytes to read);
        memcmp it stands memory compare
    */

    fstream file1, file2;

    file1.open("sample.txt", i.. in | i.. binary | i.. ate);
    file2.open("sample2.txt", i.. in | i.. binary | i.. ate);

    __ (file1.is_open() && file2.is_open())
    {
        __ (areFilesEqual(&file1, &file2))
        {
            c__ __  "Files are equal";
        }
        else
            c__ __  "Files are not the same" __  e..

    }
    else
        c__ __  "The file couldn't be opened properly" __  e..

    r_ 0;
}
bo.. areFilesEqual(fstream *a, fstream *b)
{
    in. fileSize1 = sizeOfFile(a);
    in. fileSize2 = sizeOfFile(b);

    __ (fileSize1 == fileSize2)
    {
        in. BUFFER_SIZE;

        __(fileSize1 > 1024)
            BUFFER_SIZE = 1024;
        else
            BUFFER_SIZE = fileSize1;

        char *file1buffer = new char[BUFFER_SIZE];
        char *file2buffer = new char[BUFFER_SIZE];

        do
        {
            a->read(file1buffer, BUFFER_SIZE);
            b->read(file2buffer, BUFFER_SIZE);

            __ (memcmp(file1buffer, file2buffer, BUFFER_SIZE) != 0)
            {
                c__ __  "Files are not equal, at least one of the byte was different" __  e..

                delete [] file1buffer;
                delete [] file2buffer;
                r_ false;
            }
        }while(a->good() && b->good());

        delete [] file1buffer;
        delete [] file2buffer;
        r_ true;
    }
    else
    {
        c__ __  "Size of Files are not equal" __  e..
        r_ false;
    }
}
in. sizeOfFile(fstream * file)
{
    file->seekg(0, i.. end);
    in. sizeOfFile = file->tellg();
    file->seekg(0, i.. beg);
    r_ sizeOfFile;
}
