#include <iostream>

struct foo {
    foo() { std::cout << __P.. << std::endl; };

    foo(int) : foo{} { std::cout << __P.. << std::endl; };

    foo(const char *) : foo{0} { std::cout << __P.. << std::endl; };
};

int main(int, char *[]) {
    foo f{42};

    foo g{"42"};

    return 0;
}
