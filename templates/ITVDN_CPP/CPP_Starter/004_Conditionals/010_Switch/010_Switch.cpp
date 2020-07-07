? *s..
? |i..

u.. s..

in. main()
{
    setlocale(LC_ALL, "rus");

    c__ __  "Select one of the menu items: " __  e..
    c__ __  "1. Create file" __  e..
    c__ __  "2. Save file" __  e..
    c__ __  "3. End the program" __  e..

    char action;
    c__ >> action;

    switch (action)
    {
        case '1':
        {
            c__ __  "A new file has been created.." __  e..
            break;
        }
        case '2':
        {
            c__ __  "File saved." __  e..
            break;
        }
        case '3':
        {
            c__ __  "Good bye" __  e..
            break;
        }
        default:
        {
            c__ __  "Wrong choice, try again!";
            break;
        }
    }

    c__.g..
    r_ 0;
}

