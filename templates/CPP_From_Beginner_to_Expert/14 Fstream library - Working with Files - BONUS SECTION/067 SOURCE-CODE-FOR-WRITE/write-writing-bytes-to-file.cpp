? |i..
? <fstream>

u.. s..

in. main()
{
    /*
        write
    */

    fstream file;

    file.open("sample.txt", i.. out | i.. binary);

    __ (file.is_open())
    {
        char sample[] = "sample text";

        c__ __  sizeof(sample) __  e..

        file.write(sample, 60);
    }
    else
        c__ __  "I couldnt open the file" __  e..



    r_ 0;
}
