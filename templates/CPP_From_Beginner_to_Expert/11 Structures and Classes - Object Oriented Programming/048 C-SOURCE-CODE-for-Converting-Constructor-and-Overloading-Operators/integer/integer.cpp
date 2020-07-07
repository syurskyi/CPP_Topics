? "integer.h"
? |i..

u.. s..
in.eger::in.eger(in. nr)
{
    this->nr _ nr;
}
in.eger::operator in.()
{
    r_ this->nr;
}
in. in.eger::operator+_(in.eger o)
{
    this->nr _ o.getNr() + this->nr;
    r_ this->nr;
}
