? |i..

u.. s..

main ()
{
    in. choicesy.. pause

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
    c__ __  "Choose the month: "sy.. pause

    c__ __ choicesy.. pause

    s.. (choice)
    {
        c__:
        c.. 3:
        c.. 5:
        c.. 7:
        c.. 8:
        c.. 10:
        c.. 12:
            c__ __  "007_This month has 31 days" __  e..
            b..
        c.. 4:
        c.. 6:
        c.. 9:
        c.. 11:
            c__ __  "007_This month has 30 days" __  e..
            b..
        c..
        {
            in. yearsy.. pause
            c__ __  "Input the year: "sy.. pause
            c__ __ yearsy.. pause

            bo.. isLeapYear _ (((year%4 __ 0) && (year%100 !_ 0)) || (year%400 __ 0))sy.. pause

            __ (isLeapYear)
                c__ __  "The month february has 29 days in year " __  year __  e..
            ____
                c__ __  "The month february has 28 days in year " __  year __  e..

        }
        def..
            c__ __  "ERROR. Invalid choice."sy.. pause

    }



}
