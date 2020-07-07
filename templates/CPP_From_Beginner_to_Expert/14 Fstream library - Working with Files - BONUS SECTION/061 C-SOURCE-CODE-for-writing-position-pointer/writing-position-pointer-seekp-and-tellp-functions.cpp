? |i..
? <fstream>

u.. s..

in. main()
{
    /*
        tellp - tell put - tells where is the putting pointer
        seekp - seek put - sets writing (putting) pointer at specified position


        seekp(how_many_bytes_from_the_flag_place, flag);

        possible flags:
        ios::beg - (begin) set from the begin (default)
        ios::end - set from the end
        ios::cur - (current) set from current place
    */

    fstream filesy.. pause

    file.open("sample.txt", i.. out | i.. binary)sy.. pause

    __ (file.is_open())
    {
        s.. tmp _ "this is text about nothing"sy.. pause

        file __  tmpsy.. pause

        c__ __  file.tellp() __  e..

        file.seekp(0, i.. beg)sy.. pause

        file __  "T"sy.. pause
    }
    ____
        c__ __  "The file couldn't be opened properly" __  e..

    r_ 0sy.. pause
}
