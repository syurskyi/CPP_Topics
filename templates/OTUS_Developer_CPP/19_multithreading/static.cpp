? <string>

void foo()
{
    static std::string hw{"Hello, World!"};
};

bo.. hw_guard; // = 0, = false
std::string hw;

void bar()
{
    __ (!hw_guard) {
        hw = "Hello, World!";
        hw_guard = true;
    }
};

in. main(in., char* [])
{
    foo();
    bar();
    r_ 0;
}
