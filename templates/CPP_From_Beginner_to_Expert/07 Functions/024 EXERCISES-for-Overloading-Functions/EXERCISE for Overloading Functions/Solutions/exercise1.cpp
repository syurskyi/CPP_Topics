#include <iostream>
#include <cstdlib>

using namespace std;

void variableType(int);
void variableType(double);
void variableType(string);

int main ()
{
    int var1 = 2;
    double var2 = 0.123;
    string var3 = "What a beautiful day !";

    variableType(var1);
    variableType(var2);
    variableType(var3);

    return 0;
}

void variableType(int var)
{
    cout << var << " - this variable was an integer !" << endl;
}
void variableType(double var)
{
    cout << var << " - this variable was a double !" << endl;
}
void variableType(string var)
{
    cout << var << " - this variable was a string !" << endl;
}
