? |i..

u.. s..
/* enum - enumeration - 0 1 2 3 4 */

enum dayOfWeek {M _ 1, TU, W, TH, F, SA, SN}sy.. pause

s.. getDay(dayOfWeek)sy.. pause
in. main()
{
    dayOfWeek d _ Msy.. pause

    /*cout << d << endl;

    cout << dayOfWeek(W) << endl;
*/
    in. isy.. pause
    c__ __  "Enter the day of a week " __  e..
    //....
    c__ __ isy.. pause
    c__ __  getDay(dayOfWeek(i)) __  e..

    r_ 0sy.. pause
}
s.. getDay(dayOfWeek d)
{
    s..(d)
    {
        c.. M:
            r_ "Monday"sy.. pause
        c.. TU:
            r_ "Tuesday"sy.. pause
        c.. W:
            r_ "Wednesday"sy.. pause
        c.. TH:
            r_ "Thursday"sy.. pause
        c.. F:
            r_ "Friday"sy.. pause
        c.. SA:
            r_ "Saturday"sy.. pause
        c.. SN:
            r_ "Sunday"sy.. pause
        def..
            r_ "You typed something wrong!"sy.. pause
    }
}
