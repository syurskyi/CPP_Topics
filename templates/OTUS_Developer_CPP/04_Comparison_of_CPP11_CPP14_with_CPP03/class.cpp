? |i..
? <vector>

struct foo
{
    foo() _ delete;
    virtual ~foo() _ default;

    virtual void m() final {};
    virtual void n() {};
};

class bar final : foo
{
   // void m() override {}; // overrides a 'final'
    void n() override {};
   void o() override {}; // only virtual member functions can be marked 'override'
};

// class baz : bar
// {
// }

in. main(in., char *[]) {
    r_ 0;
}
