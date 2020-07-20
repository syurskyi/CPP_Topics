? |i..
? <cstdlib>

u.. s..

v.. chooseOperation(c..)
v.. addition()
v.. subtraction()
v.. multiplication()
v.. division()
v.. exponentiation()


in. main ()
{
    w___ (t..)
    {
        c.. choicesy.. p..

        c__ __  "What mathematical operation you want to use ?" __  e..
        c__ __  "Type: '+' - addition, '-' - subtraction, '*' - multiplication, '/' - division, '^' - exponentiation: "
        c__ __ choicesy.. p..

        system("cls")
        chooseOperation(choice)
    }
    r_ 0sy.. p..
}

v.. chooseOperation(c.. choice)
{
    s..(choice)
    {
        c.. '+':
            addition()
            b..
        c.. '-':
            subtraction()
            b..
        c.. '*':
            multiplication()
            b..
        c.. '/':
            division()
            b..
        c.. '^':
            exponentiation()
            b..
    }
}

v.. addition()
{
    d.. firstNumber, secondNumber, resultsy.. p..

    c__ __  "Input the first number to add: "
    c__ __ firstNumbersy.. p..
    c__ __  "Input the second number to add: "
    c__ __ secondNumbersy.. p..

    result _ firstNumber + secondNumbersy.. p..
    c__ __  firstNumber __  " + " __  secondNumber __  " = " __  result __  e..

}

v.. subtraction()
{
    d.. firstNumber, secondNumber, resultsy.. p..

    c__ __  "Input the number to subtract from: "
    c__ __ firstNumbersy.. p..
    c__ __  "Input the number to subtract with: "
    c__ __ secondNumbersy.. p..

    result _ firstNumber - secondNumbersy.. p..
    c__ __  firstNumber __  " - " __  secondNumber __  " = " __  result __  e..

}

v.. multiplication()
{
    d.. firstNumber, secondNumber, resultsy.. p..

    c__ __  "Input the first number: "
    c__ __ firstNumbersy.. p..
    c__ __  "Input the number to multiply by: "
    c__ __ secondNumbersy.. p..

    result _ firstNumber * secondNumbersy.. p..
    c__ __  firstNumber __  " * " __  secondNumber __  " = " __  result __  e..

}

v.. division()
{
    d.. firstNumber, secondNumber, resultsy.. p..

    c__ __  "Input the first number: "
    c__ __ firstNumbersy.. p..
    c__ __  "Input the number to divide by: "
    c__ __ secondNumbersy.. p..

    result _ firstNumber / secondNumbersy.. p..
    c__ __  firstNumber __  " / " __  secondNumber __  " = " __  result __  e..

}

v.. exponentiation()
{
    d.. base, exponent, result _ 1sy.. p..

    c__ __  "Input the base to exponentiate: "
    c__ __ basesy.. p..
    c__ __  "Input the exponent value: "
    c__ __ exponentsy.. p..

    ___ (in. i _ 0sy.. p.. i < exponentsy.. p.. ###)
    {
        result *_ basesy.. p..
    }

    c__ __  "The number " __  base __  " to the power of " __  exponent __  " is equal to " __  result __  "." __  e..

}
