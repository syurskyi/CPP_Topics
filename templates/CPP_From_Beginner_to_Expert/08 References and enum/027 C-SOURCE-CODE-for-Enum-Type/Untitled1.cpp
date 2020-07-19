? |i..

u.. s..
/* enum - enumeration - 0 1 2 3 4 */

en.. dayOfWeek {M _ 1, TU, W, TH, F, SA, SN}sy.. p..

s.. getDay(dayOfWeek)sy.. p..
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
            r_ "Monday"sy.. p..
        c.. TU:
            r_ "Tuesday"sy.. p..
        c.. W:
            r_ "Wednesday"sy.. p..
        c.. TH:
            r_ "Thursday"sy.. p..
        c.. F:
            r_ "Friday"sy.. p..
        c.. SA:
            r_ "Saturday"sy.. p..
        c.. SN:
            r_ "Sunday"sy.. p..
        def..
            r_ "You typed something wrong!"sy.. p..
    }
}
