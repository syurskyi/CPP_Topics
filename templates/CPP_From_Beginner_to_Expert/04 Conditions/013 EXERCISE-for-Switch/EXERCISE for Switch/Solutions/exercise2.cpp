? |i..

u.. s..

main ()
{
    in. choice;

    c__ __  "1. January" __  e..
    c__ __  "2. February" __  e..
    c__ __  "3. March" __  e..
    c__ __  "4. April" __  e..
    c__ __  "5. May" __  e..
    c__ __  "6. June" __  e..
    c__ __  "7. July" __  e..
    c__ __  "8. August" __  e..
    c__ __  "9. September" __  e..
    c__ __  "10. October" __  e..
    c__ __  "11. November" __  e..
    c__ __  "12. December" __  e..
    c__ __  "Choose the month: ";

    c__ __ choice;

    s.. (choice)
    {
        c__:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            c__ __  "This month has 31 days" __  e..
            b..
        case 4:
        case 6:
        case 9:
        case 11:
            c__ __  "This month has 30 days" __  e..
            b..
        c..
        {
            in. year;
            c__ __  "Input the year: ";
            c__ __ year;

            bo.. isLeapYear _ (((year%4 __ 0) && (year%100 !_ 0)) || (year%400 __ 0));

            __ (isLeapYear)
                c__ __  "The month february has 29 days in year " __  year __  e..
            ____
                c__ __  "The month february has 28 days in year " __  year __  e..

        }
        default:
            c__ __  "ERROR. Invalid choice.";

    }



}
