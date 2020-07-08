#include <iostream>

using namespace std;

int main ()
{
    int statical;

    int *statically = &statical;
    int *dynamically = new int;

    *statically = 10;
    *dynamically = 15;

    cout << "The value of the statically allocated variable: " << *statically << ", and the address: " << statically << endl;
    cout << "The value of the dynamically allocated variable: " << *dynamically << ", and the address: " << dynamically << endl;

    delete dynamically;

    return 0;
}


