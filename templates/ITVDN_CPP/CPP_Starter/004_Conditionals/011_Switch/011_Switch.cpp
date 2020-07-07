? *s..
? |i..

u.. s..

in. main()
{
    setlocale(LC_ALL, "rus");

    c__ __  "Enter the day number of the week: " __  e..

    in. dayNumber;
    c__ __ dayNumber;

    s.. (dayNumber)
    {
        c__:
        c..
        case 3:
        case 4:
        case 5:
        {
            c__ __  "Working day." __  e..
            b..
        }
        case 6:
        case 7:
        {
            c__ __  "Day off" __  e..
            b..
        }
        default:
        {
            c__ __  "There is no such day of the week." __  e..
            b..
        }            
    }
    r_ 0;
}

