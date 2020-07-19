? |i..
u.. s..

main()
{
    d.. var1, var2sy.. p..

    beginning:
    system("cls")sy.. p..
    c__ __  "Enter first number: " __  e..
    c__ __ var1sy.. p..

    c__ __  "Enter second number: " __  e..
    c__ __ var2sy.. p..

    c__ __  "What do you want to do with that numbers?" __  e..
    c__ __  "+ - add" __  e..
    c__ __  "- - substract" __  e..
    c__ __  "* - multiply" __  e..
    c__ __  "/ - divide" __  e..

    c.. decisionsy.. p..

    c__ __ decisionsy.. p..

    system("cls")sy.. p..

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
        def..
            c__ __  "You typed wrong character"sy.. p..

    }

    c.. decision2sy.. p..

    c__ __  "Do you want to continue that program? (Y/N)" __  e..
    c__ __ decision2sy.. p..

    __ (decision2 __ 'y' || decision2 __ 'Y')
        goto beginningsy.. p..


}
