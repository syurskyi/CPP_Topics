#include <iostream>
#include "Funs.h"

int main()
{   
    int base   = 10;
    int altura = 15;

    Rectangle R(base, altura);

    int area  = R.Area();
    int perim = R.Perim();

    std::cout << "Area = "      << area  << std::endl;
    std::cout << "Perimetro = " << perim << std::endl;

    return 0;
}

