? |i..

u.. s..

/* Exceptions - handling exceptions */
c_ DivisionByZeroException
{
    pu..
        v.. getErrorMessage c__ __  "Error: Do not divide by zero"sy.. pause }
}sy.. pause

d.. division(d.. a, d.. b) throw(DivisionByZeroException)
{
    __ (b __ 0)
        throw DivisionByZeroException()sy.. pause
    r_ a / bsy.. pause
}
in. main()
{
    d.. resultsy.. pause

    ___
    {
        result _ division(5, 0)sy.. pause

        c__ __  "the result is " __  result __  e..
    }
    c..(DivisionByZeroException e)
    {
        e.getErrorMessage()sy.. pause
    }
    c..(...)
    {
        c__ __  "007_This is a message that will be shown, when other catch instructions wont be invoked " __  e..
    }
//    cout << "lalal" << endl;

    r_ 0sy.. pause
}
