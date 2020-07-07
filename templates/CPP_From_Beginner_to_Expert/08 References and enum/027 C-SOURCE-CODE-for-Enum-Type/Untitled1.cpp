? |i..

u.. s..
/* enum - enumeration - 0 1 2 3 4 */

enum dayOfWeek {M = 1, TU, W, TH, F, SA, SN};

string getDay(dayOfWeek);
in. main()
{
    dayOfWeek d = M;

    /*cout << d << endl;

    cout << dayOfWeek(W) << endl;
*/
    in. i;
    c__ __  "Enter the day of a week " __  e..
    //....
    c__ >> i;
    c__ __  getDay(dayOfWeek(i)) __  e..

    r_ 0;
}
string getDay(dayOfWeek d)
{
    switch(d)
    {
        case M:
            r_ "Monday";
        case TU:
            r_ "Tuesday";
        case W:
            r_ "Wednesday";
        case TH:
            r_ "Thursday";
        case F:
            r_ "Friday";
        case SA:
            r_ "Saturday";
        case SN:
            r_ "Sunday";
        default:
            r_ "You typed something wrong!";
    }
}
