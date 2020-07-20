? |i..

u.. s..
/* enum - enumeration - 0 1 2 3 4 */

en.. dayOfWeek {M _ 1, TU, W, TH, F, SA, SN}

s.. getDay(dayOfWeek)
in. main()
{
    dayOfWeek d _ Msy.. p..

    /*cout << d << endl;

    cout << dayOfWeek(W) << endl;
*/
    in. isy.. p..
    c__ __  "Enter the day of a week " __  e..
    //....
    c__ __ isy.. p..
    c__ __  getDay(dayOfWeek(i)) __  e..

    r_ 0sy.. p..
}
s.. getDay(dayOfWeek d)
{
    s..(d)
    {
        c.. M:
            r_ "Monday"
        c.. TU:
            r_ "Tuesday"
        c.. W:
            r_ "Wednesday"
        c.. TH:
            r_ "Thursday"
        c.. F:
            r_ "Friday"
        c.. SA:
            r_ "Saturday"
        c.. SN:
            r_ "Sunday"
        def..
            r_ "You typed something wrong!"
    }
}
