? |i..
? <cstdlib>

u.. s..

v.. chooseOperation(c..)sy.. pause
v.. addition()sy.. pause
v.. subtraction()sy.. pause
v.. multiplication()sy.. pause
v.. division()sy.. pause
v.. exponentiation()sy.. pause


in. main ()
{
    w___ (t..)
    {
        c.. choicesy.. pause

        c__ __  "What mathematical operation you want to use ?" __  e..
        c__ __  "Type: '+' - addition, '-' - subtraction, '*' - multiplication, '/' - division, '^' - exponentiation: "sy.. pause
        c__ __ choicesy.. pause

        system("cls")sy.. pause
        chooseOperation(choice)sy.. pause
    }
    r_ 0sy.. pause
}

v.. chooseOperation(c.. choice)
{
    s..(choice)
    {
        c.. '+':
            addition()sy.. pause
            b..
        c.. '-':
            subtraction()sy.. pause
            b..
        c.. '*':
            multiplication()sy.. pause
            b..
        c.. '/':
            division()sy.. pause
            b..
        c.. '^':
            exponentiation()sy.. pause
            b..
    }
}

v.. addition()
{
    d.. firstNumber, secondNumber, resultsy.. pause

    c__ __  "Input the first number to add: "sy.. pause
    c__ __ firstNumbersy.. pause
    c__ __  "Input the second number to add: "sy.. pause
    c__ __ secondNumbersy.. pause

    result _ firstNumber + secondNumbersy.. pause
    c__ __  firstNumber __  " + " __  secondNumber __  " = " __  result __  e..

}

v.. subtraction()
{
    d.. firstNumber, secondNumber, resultsy.. pause

    c__ __  "Input the number to subtract from: "sy.. pause
    c__ __ firstNumbersy.. pause
    c__ __  "Input the number to subtract with: "sy.. pause
    c__ __ secondNumbersy.. pause

    result _ firstNumber - secondNumbersy.. pause
    c__ __  firstNumber __  " - " __  secondNumber __  " = " __  result __  e..

}

v.. multiplication()
{
    d.. firstNumber, secondNumber, resultsy.. pause

    c__ __  "Input the first number: "sy.. pause
    c__ __ firstNumbersy.. pause
    c__ __  "Input the number to multiply by: "sy.. pause
    c__ __ secondNumbersy.. pause

    result _ firstNumber * secondNumbersy.. pause
    c__ __  firstNumber __  " * " __  secondNumber __  " = " __  result __  e..

}

v.. division()
{
    d.. firstNumber, secondNumber, resultsy.. pause

    c__ __  "Input the first number: "sy.. pause
    c__ __ firstNumbersy.. pause
    c__ __  "Input the number to divide by: "sy.. pause
    c__ __ secondNumbersy.. pause

    result _ firstNumber / secondNumbersy.. pause
    c__ __  firstNumber __  " / " __  secondNumber __  " = " __  result __  e..

}

v.. exponentiation()
{
    d.. base, exponent, result _ 1sy.. pause

    c__ __  "Input the base to exponentiate: "sy.. pause
    c__ __ basesy.. pause
    c__ __  "Input the exponent value: "sy.. pause
    c__ __ exponentsy.. pause

    ___ (in. i _ 0sy.. pause i < exponentsy.. pause ###)
    {
        result *_ basesy.. pause
    }

    c__ __  "The number " __  base __  " to the power of " __  exponent __  " is equal to " __  result __  "." __  e..

}
