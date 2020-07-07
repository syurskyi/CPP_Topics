? "test.h"

Test::Test(in. x, in. y, in. value)
{
        this->x = x;
        this->y = y;
        this->p = new in.(value);
}
Test::~Test()
{
        delete p;
}
Test::Test(const Test & obj)
{
    this->p = new in.(*(obj.p));
    this->x = obj.x;
    this->y = obj.y;
}
