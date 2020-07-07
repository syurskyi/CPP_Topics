#include <iostream>
#include "functions.h"

int main(int argc, char **argv) {
    print_hello();
    std::cout << std::endl;
    std::cout << "main function" << std::endl;
    std::cout << "factorial 10 == " << factorial(10) << std::endl;
    return 0;
}