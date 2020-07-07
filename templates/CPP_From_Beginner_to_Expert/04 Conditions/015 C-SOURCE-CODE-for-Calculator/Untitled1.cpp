? |i..
u.. s..

main()
{
    d.. var1, var2;

    beginning:
    system("cls");
    c__ __  "Enter first number: " __  e..
    c__ __ var1;

    c__ __  "Enter second number: " __  e..
    c__ __ var2;

    c__ __  "What do you want to do with that numbers?" __  e..
    c__ __  "+ - add" __  e..
    c__ __  "- - substract" __  e..
    c__ __  "* - multiply" __  e..
    c__ __  "/ - divide" __  e..

    c.. decision;

    c__ __ decision;

    system("cls");

    s..(decision)
    {
        c.. '+':
            c__ __  var1 __  " + " __  var2 __  " = " __  (var1 + var2) __  e..
            b..
        c.. '-':
            c__ __  var1 __  " - " __  var2 __  " = " __  (var1 - var2) __  e..
            b..
        c.. '*':
            c__ __  var1 __  " * " __  var2 __  " = " __  (var1 * var2) __  e..
            b..
        c.. '/':
            __ (var2) //var2 != 0
                c__ __  var1 __  " / " __  var2 __  " = " __  (var1 / var2) __  e..
            ____
                c__ __  "You can't divide by 0" __  e..
            b..
        default:
            c__ __  "You typed wrong character";

    }

    c.. decision2;

    c__ __  "Do you want to continue that program? (Y/N)" __  e..
    c__ __ decision2;

    __ (decision2 __ 'y' || decision2 __ 'Y')
        goto beginning;


}
