? "integer.h"
? |i..

u.. s..
in.eger::in.eger(in. nr)
{
    this->nr = nr;
}
in.eger::operator in.()
{
    r_ this->nr;
}
in. in.eger::operator+=(in.eger o)
{
    this->nr = o.getNr() + this->nr;
    r_ this->nr;
}
