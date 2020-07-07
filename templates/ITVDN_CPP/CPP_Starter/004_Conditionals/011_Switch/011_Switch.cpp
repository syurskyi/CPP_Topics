? *s..
? |i..

u.. s..

in. main()
{
    setlocale(LC_ALL, "rus");

    c__ __  "Enter the day number of the week: " __  e..

    in. dayNumber;
    c__ >> dayNumber;

    switch (dayNumber)
    {
        case 1:
        case 2:
        case 3:
        case 4:
        case 5:
        {
            c__ __  "Working day." __  e..
            break;
        }
        case 6:
        case 7:
        {
            c__ __  "Day off" __  e..
            break;
        }
        default:
        {
            c__ __  "There is no such day of the week." __  e..
            break;
        }            
    }
    r_ 0;
}

