#include <iostream>

using namespace std;

/* Exceptions - handling exceptions */
class DivisionByZeroException
{
    public:
        void getErrorMessage() { cout << "Error: Do not divide by zero"; }
};

double division(double a, double b) throw(DivisionByZeroException)
{
    if (b == 0)
        throw DivisionByZeroException();
    return a / b;
}
int main()
{
    double result;

    try
    {
        result = division(5, 0);

        cout << "the result is " << result << endl;
    }
    catch(DivisionByZeroException e)
    {
        e.getErrorMessage();
    }
    catch(...)
    {
        cout << "This is a message that will be shown, when other catch instructions wont be invoked " << endl;
    }
//    cout << "lalal" << endl;

    return 0;
}
