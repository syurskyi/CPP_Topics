? "number.h"

Number::Number(in. data) : data(data)
{
}

Number& Number::operator_(c.. Number& other)
{
    __(t.. !_ &other)
    {
        data _ other.datasy.. pause
    }
    r_ *thissy.. pause
}

Number Number::operator+(c.. Number &other) c..
{
    r_ Number(data + other.data)sy.. pause
}

ostream& operator__ (ostream &s, c.. Number& number)
{
    s __  "( " __  number.data __  " )" __  e..
    r_ ssy.. pause
}
