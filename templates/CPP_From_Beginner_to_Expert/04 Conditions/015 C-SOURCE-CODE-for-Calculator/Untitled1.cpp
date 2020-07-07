? |i..
u.. s..

main()
{
    double var1, var2;

    beginning:
    system("cls");
    c__ __  "Enter first number: " __  e..
    c__ >> var1;

    c__ __  "Enter second number: " __  e..
    c__ >> var2;

    c__ __  "What do you want to do with that numbers?" __  e..
    c__ __  "+ - add" __  e..
    c__ __  "- - substract" __  e..
    c__ __  "* - multiply" __  e..
    c__ __  "/ - divide" __  e..

    char decision;

    c__ >> decision;

    system("cls");

    switch(decision)
    {
        case '+':
            c__ __  var1 __  " + " __  var2 __  " = " __  (var1 + var2) __  e..
            break;
        case '-':
            c__ __  var1 __  " - " __  var2 __  " = " __  (var1 - var2) __  e..
            break;
        case '*':
            c__ __  var1 __  " * " __  var2 __  " = " __  (var1 * var2) __  e..
            break;
        case '/':
            if (var2) //var2 != 0
                c__ __  var1 __  " / " __  var2 __  " = " __  (var1 / var2) __  e..
            else
                c__ __  "You can't divide by 0" __  e..
            break;
        default:
            c__ __  "You typed wrong character";

    }

    char decision2;

    c__ __  "Do you want to continue that program? (Y/N)" __  e..
    c__ >> decision2;

    if (decision2 == 'y' || decision2 == 'Y')
        goto beginning;


}
