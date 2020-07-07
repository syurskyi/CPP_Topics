? |i..
? <cstdlib>

u.. s..

v.. chooseOperation(c..);
v.. addition();
v.. subtraction();
v.. multiplication();
v.. division();
v.. exponentiation();


in. main ()
{
    w___ (true)
    {
        c.. choice;

        c__ __  "What mathematical operation you want to use ?" __  e..
        c__ __  "Type: '+' - addition, '-' - subtraction, '*' - multiplication, '/' - division, '^' - exponentiation: ";
        c__ __ choice;

        system("cls");
        chooseOperation(choice);
    }
    r_ 0;
}

v.. chooseOperation(c.. choice)
{
    s..(choice)
    {
        c.. '+':
            addition();
            b..
        c.. '-':
            subtraction();
            b..
        c.. '*':
            multiplication();
            b..
        c.. '/':
            division();
            b..
        c.. '^':
            exponentiation();
            b..
    }
}

v.. addition()
{
    d.. firstNumber, secondNumber, result;

    c__ __  "Input the first number to add: ";
    c__ __ firstNumber;
    c__ __  "Input the second number to add: ";
    c__ __ secondNumber;

    result _ firstNumber + secondNumber;
    c__ __  firstNumber __  " + " __  secondNumber __  " = " __  result __  e..

}

v.. subtraction()
{
    d.. firstNumber, secondNumber, result;

    c__ __  "Input the number to subtract from: ";
    c__ __ firstNumber;
    c__ __  "Input the number to subtract with: ";
    c__ __ secondNumber;

    result _ firstNumber - secondNumber;
    c__ __  firstNumber __  " - " __  secondNumber __  " = " __  result __  e..

}

v.. multiplication()
{
    d.. firstNumber, secondNumber, result;

    c__ __  "Input the first number: ";
    c__ __ firstNumber;
    c__ __  "Input the number to multiply by: ";
    c__ __ secondNumber;

    result _ firstNumber * secondNumber;
    c__ __  firstNumber __  " * " __  secondNumber __  " = " __  result __  e..

}

v.. division()
{
    d.. firstNumber, secondNumber, result;

    c__ __  "Input the first number: ";
    c__ __ firstNumber;
    c__ __  "Input the number to divide by: ";
    c__ __ secondNumber;

    result _ firstNumber / secondNumber;
    c__ __  firstNumber __  " / " __  secondNumber __  " = " __  result __  e..

}

v.. exponentiation()
{
    d.. base, exponent, result _ 1;

    c__ __  "Input the base to exponentiate: ";
    c__ __ base;
    c__ __  "Input the exponent value: ";
    c__ __ exponent;

    ___ (in. i _ 0; i < exponent; i++)
    {
        result *_ base;
    }

    c__ __  "The number " __  base __  " to the power of " __  exponent __  " is equal to " __  result __  "." __  e..

}
