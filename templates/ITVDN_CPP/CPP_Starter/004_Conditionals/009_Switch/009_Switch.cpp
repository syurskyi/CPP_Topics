﻿? *s..
? |i..

u.. s..

in. main()
{
    setlocale(LC_ALL, "rus");

    in. number;
    c__ __  "Enter the number 1 or 2: " __  e..
    c__ >> number;

    // ­  На 16-й строке создаем оператор многозначного выбора, и в качестве выражения селектора передаем переменную - number
    
    switch (number)     // (number) - выражение селектор
    {
        case 1:         // 1-е Постоянное выражение
        {
            c__ __  "One" __  e..     // Ветвь 1
            break;
        }
        case 2:         // 2-е Постоянное выражение
        {
            c__ __  "Two" __  e..      // Ветвь 2
            break;
        }
    }
    
    c__.g..
    r_ 0;
}

