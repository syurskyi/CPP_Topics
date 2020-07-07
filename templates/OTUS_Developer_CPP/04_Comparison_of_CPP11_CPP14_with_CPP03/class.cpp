? |i..
? <vector>

struct foo
{
    foo() _ delete;
    virtual ~foo() _ default;

    virtual v.. m() final {};
    virtual v.. n() {};
};

class bar final : foo
{
   // void m() override {}; // overrides a 'final'
    v.. n() override {};
   v.. o() override {}; // only virtual member functions can be marked 'override'
};

// class baz : bar
// {
// }

in. main(in., c.. *[]) {
    r_ 0;
}
