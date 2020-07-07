? "test.h"

Test::Test(in. x, in. y, in. value)
{
        this->x _ x;
        this->y _ y;
        this->p _ new in.(value);
}
Test::~Test()
{
        delete p;
}
Test::Test(const Test & obj)
{
    this->p _ new in.(*(obj.p));
    this->x _ obj.x;
    this->y _ obj.y;
}
