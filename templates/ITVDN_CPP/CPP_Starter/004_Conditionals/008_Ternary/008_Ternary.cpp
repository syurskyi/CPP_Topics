? *s..
? |i..

u.. s..

in. main()
{
    setlocale(LC_ALL, "en_US.UTF-8");

    in.     quantity    = 8;   // количесво единиц товара
    in.     price       = 75;   // цена за единицу товара
    double  discount    = 0.75; // скидка на общую стоимость 25%
    in.     cost;               // общая стоимость товара

    //ЕСЛИ: количество тавара 10, или больше. ТО: получить скидку 25%. ИНАЧЕ: скидку не давать.

    cost = (quantity >= 10) ? quantity * price * discount : quantity * price;

    c__ __  "Total cost of goods: " __  cost __  e..


    c__.g..
    r_ 0;
}

