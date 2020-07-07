? |i..

u.. s..
/* enum - enumeration - 0 1 2 3 4 */

enum dayOfWeek {M _ 1, TU, W, TH, F, SA, SN};

s.. getDay(dayOfWeek);
in. main()
{
    dayOfWeek d _ M;

    /*cout << d << endl;

    cout << dayOfWeek(W) << endl;
*/
    in. i;
    c__ __  "Enter the day of a week " __  e..
    //....
    c__ __ i;
    c__ __  getDay(dayOfWeek(i)) __  e..

    r_ 0;
}
s.. getDay(dayOfWeek d)
{
    s..(d)
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
