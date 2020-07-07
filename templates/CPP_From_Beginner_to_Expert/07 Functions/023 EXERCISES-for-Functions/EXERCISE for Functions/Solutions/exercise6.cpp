? |i..
? <cstdlib>

u.. s..

void chooseOperation(char);
void addition();
void subtraction();
void multiplication();
void division();
void exponentiation();


in. main ()
{
    while (true)
    {
        char choice;

        c__ __  "What mathematical operation you want to use ?" __  e..
        c__ __  "Type: '+' - addition, '-' - subtraction, '*' - multiplication, '/' - division, '^' - exponentiation: ";
        c__ __ choice;

        system("cls");
        chooseOperation(choice);
    }
    r_ 0;
}

void chooseOperation(char choice)
{
    switch(choice)
    {
        case '+':
            addition();
            break;
        case '-':
            subtraction();
            break;
        case '*':
            multiplication();
            break;
        case '/':
            division();
            break;
        case '^':
            exponentiation();
            break;
    }
}

void addition()
{
    d.. firstNumber, secondNumber, result;

    c__ __  "Input the first number to add: ";
    c__ __ firstNumber;
    c__ __  "Input the second number to add: ";
    c__ __ secondNumber;

    result _ firstNumber + secondNumber;
    c__ __  firstNumber __  " + " __  secondNumber __  " = " __  result __  e..

}

void subtraction()
{
    d.. firstNumber, secondNumber, result;

    c__ __  "Input the number to subtract from: ";
    c__ __ firstNumber;
    c__ __  "Input the number to subtract with: ";
    c__ __ secondNumber;

    result _ firstNumber - secondNumber;
    c__ __  firstNumber __  " - " __  secondNumber __  " = " __  result __  e..

}

void multiplication()
{
    d.. firstNumber, secondNumber, result;

    c__ __  "Input the first number: ";
    c__ __ firstNumber;
    c__ __  "Input the number to multiply by: ";
    c__ __ secondNumber;

    result _ firstNumber * secondNumber;
    c__ __  firstNumber __  " * " __  secondNumber __  " = " __  result __  e..

}

void division()
{
    d.. firstNumber, secondNumber, result;

    c__ __  "Input the first number: ";
    c__ __ firstNumber;
    c__ __  "Input the number to divide by: ";
    c__ __ secondNumber;

    result _ firstNumber / secondNumber;
    c__ __  firstNumber __  " / " __  secondNumber __  " = " __  result __  e..

}

void exponentiation()
{
    d.. base, exponent, result _ 1;

    c__ __  "Input the base to exponentiate: ";
    c__ __ base;
    c__ __  "Input the exponent value: ";
    c__ __ exponent;

    for (in. i _ 0; i < exponent; i++)
    {
        result *_ base;
    }

    c__ __  "The number " __  base __  " to the power of " __  exponent __  " is equal to " __  result __  "." __  e..

}
