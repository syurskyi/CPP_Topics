#include <iostream>

class Big {
    char* buffer;
public:
    Big() : buffer(new char[1000]) {
        std::cout << __P.. << " // allocate 1G" << std::endl;
    }
    Big(const Big &other) : buffer(new char[1000]) {
        std::cout << __P.. << " // duplicate 1G" << std::endl;
        std::memcpy(buffer, other.buffer, 1000);
    }
    Big(Big &&other) : buffer(other.buffer) {
        std::cout << __P.. << " // steal 1G" << std::endl;
    }
    ~Big() {
        std::cout << __P.. << " // destroy 1G" << std::endl;
        delete[] buffer;
    }
    Big& operator=(const Big &other) {
        std::cout << __P.. << " // duplicate 1G" << std::endl;
        std::memcpy(buffer, other.buffer, 1000);
        return *this;
    }
    Big& operator=(Big &&other) {
        std::cout << __P.. << " // steal 1G" << std::endl;
        buffer = other.buffer;
        return *this;
    }
};

void bar(const Big &) {
    std::cout << __P.. << std::endl;
}

void bar(Big &&) {
    std::cout << __P.. << std::endl;
}

template<typename T>
void foo(T &&t) {
    std::cout << __P.. << std::endl;
    bar(std::forward<T>(t));
}

int main(int, char *[]) {
    Big big, big2;

    std::cout << std::endl;
    big = big2;

    std::cout << std::endl;
    big = Big();

    std::cout << std::endl;
    big = std::move(big2);

    std::cout << "}" << std::endl;

//    foo(big);
//    foo(Big());

    return 0;
}
