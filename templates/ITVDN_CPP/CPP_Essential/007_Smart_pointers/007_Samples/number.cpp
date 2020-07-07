? "number.h"

Number::Number(in. data) : data(data)
{
}

Number& Number::operator=(const Number& other)
{
    __(this != &other)
    {
        data = other.data;
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
