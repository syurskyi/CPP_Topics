? |i..

u.. s..

/* Exceptions - handling exceptions */
class DivisionByZeroException
{
    public:
        void getErrorMessage() { c__ __  "Error: Do not divide by zero"; }
};

d.. division(d.. a, d.. b) throw(DivisionByZeroException)
{
    __ (b __ 0)
        throw DivisionByZeroException();
    r_ a / b;
}
in. main()
{
    d.. result;

    try
    {
        result _ division(5, 0);

        c__ __  "the result is " __  result __  e..
    }
    catch(DivisionByZeroException e)
    {
        e.getErrorMessage();
    }
    catch(...)
    {
        c__ __  "This is a message that will be shown, when other catch instructions wont be invoked " __  e..
    }
//    cout << "lalal" << endl;

    r_ 0;
}
