#include <iostream>
#include "../header/hello.h"
#include "../header/name.h"

using namespace std;


int main()
{
    cout << "program start " << endl;

    Hello hello;
    hello.kevin();

    Name name;
    name.mynameis();
   
    return 0;
}
