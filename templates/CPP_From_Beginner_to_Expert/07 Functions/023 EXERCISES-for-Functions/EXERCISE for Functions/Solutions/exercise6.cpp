? |i..
? <cstdlib>

u.. s..

v.. chooseOperation(c..)sy.. p..
v.. addition()sy.. p..
v.. subtraction()sy.. p..
v.. multiplication()sy.. p..
v.. division()sy.. p..
v.. exponentiation()sy.. p..


in. main ()
{
    w___ (t..)
    {
        c.. choicesy.. p..

        c__ __  "What mathematical operation you want to use ?" __  e..
        c__ __  "Type: '+' - addition, '-' - subtraction, '*' - multiplication, '/' - division, '^' - exponentiation: "sy.. p..
        c__ __ choicesy.. p..

        system("cls")sy.. p..
        chooseOperation(choice)sy.. p..
    }
    r_ 0sy.. p..
}

v.. chooseOperation(c.. choice)
{
    s..(choice)
    {
        c.. '+':
            addition()sy.. p..
            b..
        c.. '-':
            subtraction()sy.. p..
            b..
        c.. '*':
            multiplication()sy.. p..
            b..
        c.. '/':
            division()sy.. p..
            b..
        c.. '^':
            exponentiation()sy.. p..
            b..
    }
}

v.. addition()
{
    d.. firstNumber, secondNumber, resultsy.. p..

    c__ __  "Input the first number to add: "sy.. p..
    c__ __ firstNumbersy.. p..
    c__ __  "Input the second number to add: "sy.. p..
    c__ __ secondNumbersy.. p..

    result _ firstNumber + secondNumbersy.. p..
    c__ __  firstNumber __  " + " __  secondNumber __  " = " __  result __  e..

}

v.. subtraction()
{
    d.. firstNumber, secondNumber, resultsy.. p..

    c__ __  "Input the number to subtract from: "sy.. p..
    c__ __ firstNumbersy.. p..
    c__ __  "Input the number to subtract with: "sy.. p..
    c__ __ secondNumbersy.. p..

    result _ firstNumber - secondNumbersy.. p..
    c__ __  firstNumber __  " - " __  secondNumber __  " = " __  result __  e..

}

v.. multiplication()
{
    d.. firstNumber, secondNumber, resultsy.. p..

    c__ __  "Input the first number: "sy.. p..
    c__ __ firstNumbersy.. p..
    c__ __  "Input the number to multiply by: "sy.. p..
    c__ __ secondNumbersy.. p..

    result _ firstNumber * secondNumbersy.. p..
    c__ __  firstNumber __  " * " __  secondNumber __  " = " __  result __  e..

}

v.. division()
{
    d.. firstNumber, secondNumber, resultsy.. p..

    c__ __  "Input the first number: "sy.. p..
    c__ __ firstNumbersy.. p..
    c__ __  "Input the number to divide by: "sy.. p..
    c__ __ secondNumbersy.. p..

    result _ firstNumber / secondNumbersy.. p..
    c__ __  firstNumber __  " / " __  secondNumber __  " = " __  result __  e..

}

v.. exponentiation()
{
    d.. base, exponent, result _ 1sy.. p..

    c__ __  "Input the base to exponentiate: "sy.. p..
    c__ __ basesy.. p..
    c__ __  "Input the exponent value: "sy.. p..
    c__ __ exponentsy.. p..

    ___ (in. i _ 0sy.. p.. i < exponentsy.. p.. ###)
    {
        result *_ basesy.. p..
    }

    c__ __  "The number " __  base __  " to the power of " __  exponent __  " is equal to " __  result __  "." __  e..

}
