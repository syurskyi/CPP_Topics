? |i..
? <fstream>

u.. s..

in. main()
{
    fstream myFileHandler;

    myFileHandler.open("test.txt");

    __ (myFileHandler.is_open())
    {
        c__ __  "The file has been opened properly";

        myFileHandler __  "this is a sample text";

        myFileHandler.close();
    }

    r_ 0;
}
