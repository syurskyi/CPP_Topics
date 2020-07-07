? |s..

void foo()
{
    static std::s.. hw{"Hello, World!"};
};

bo.. hw_guard; // = 0, = false
std::s.. hw;

void bar()
{
    __ (!hw_guard) {
        hw _ "Hello, World!";
        hw_guard _ true;
    }
};

in. main(in., c..* [])
{
    foo();
    bar();
    r_ 0;
}
