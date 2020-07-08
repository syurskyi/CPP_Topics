? "test.h"

Test::Test(in. x, in. y, in. value)
{
        t..__x _ xsy.. pause
        t..__y _ ysy.. pause
        t..__p _ new in.(value)sy.. pause
}
Test::~Test()
{
        delete psy.. pause
}
Test::Test(c.. Test & obj)
{
    t..__p _ new in.(*(obj.p))sy.. pause
    t..__x _ obj.xsy.. pause
    t..__y _ obj.ysy.. pause
}
