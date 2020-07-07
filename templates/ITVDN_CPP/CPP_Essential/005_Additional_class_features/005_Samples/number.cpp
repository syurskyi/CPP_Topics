? "number.h"

Number::Number(in. data) : data(data)
{
}

Number& Number::operator_(const Number& other)
{
    __(this !_ &other)
    {
        data _ other.data;
    }
    r_ *this;
}

Number Number::operator+(const Number &other) const
{
    r_ Number(data + other.data);
}

ostream& operator__ (ostream &s, const Number& number)
{
    s __  "( " __  number.data __  " )" __  e..
    r_ s;
}
