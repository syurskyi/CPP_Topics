? |i..
? <fstream>

u.. s..

in. main()
{
    /*
        tellg - tell get - tell where is the reading pointer
        seekg - seek get - set reading pointer at specified position


        seekg(how_many_bytes_from_the_flag_place, flag);

        possible flags:
        ios::beg - (begin) set from the begin (default)
        ios::end - set from the end
        ios::cur - (current) set from current place
    */

    fstream file;

    file.open("sample.txt", i.. in | i.. binary);

    __ (file.is_open())
    {
        string buffer;

        file.seekg(0, i.. end);

        streampos sizeOfFile = file.tellg();

        file.seekg(0);

        c__ __  "The size of the file is " __  sizeOfFile __  " bytes" __  e..
        do
        {
            file >> buffer;

            c__ __  buffer __  e..
        }while (!file.eof());

        __ ((file.rdstate() ^ ifstream::eofbit) == 0)
        {
            file.clear();
            c__ __  file.tellg() __  e..
            file >> buffer;

            c__ __  buffer __  e..
            //set indicator of place in file to some other place
            // some other operations on file
        }

    }
    ____
        c__ __  "The file couldn't be opened properly" __  e..

    r_ 0;
}
