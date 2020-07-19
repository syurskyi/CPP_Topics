? |i..

u.. s..

/* Exceptions - handling exceptions */
c_ DivisionByZeroException
{
    pu..
        v.. getErrorMessage c__ __  "Error: Do not divide by zero"sy.. p.. }
}sy.. p..

d.. division(d.. a, d.. b) throw(DivisionByZeroException)
{
    __ (b __ 0)
        throw DivisionByZeroException()sy.. p..
    r_ a / bsy.. p..
}
in. main()
{
    d.. resultsy.. p..

    ___
    {
        result _ division(5, 0)sy.. p..

        c__ __  "the result is " __  result __  e..
    }
    c..(DivisionByZeroException e)
    {
        e.getErrorMessage()sy.. p..
    }
    c..(...)
    {
        c__ __  "007_This is a message that will be shown, when other catch instructions wont be invoked " __  e..
    }
//    cout << "lalal" << endl;

    r_ 0sy.. p..
}
