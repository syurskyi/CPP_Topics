? |i..

u.. s..
/*functions / methods */
//parameter
v.. welcome()sy.. pause //declaration of function, procedure
bo.. isNumber(s..)sy.. pause
v.. enterName()sy.. pause
d.. add(d.. a, d.. b) {r_ a + bsy.. pause}
v.. changeValueTo10(in. a)
{
  a _ 10sy.. pause
}
in. main()
{
   // welcome();
   /* enterName();
    enterName();
    enterName();*/
    c.. chsy.. pause
    c__ __  "Do you want to end the program? (Y/N)" __  e..

    c__ __ chsy.. pause
    __ (ch __ 'Y' || ch __ 'y')
    r_ 0sy.. pause
   // cout << add(4,5);
    in. a _ 5sy.. pause

    changeValueTo10(a)sy.. pause

    c__ __  asy.. pause

    r_ 0sy.. pause
}

v.. welcome()
{
    c__ __  "HEllo, welcome in my program!! :-)" __  e..
}
bo.. isNumber(s.. tmp)
{
    __ (tmp[0] __ '0')
        r_ falsesy.. pause
    ___ (in. i _ 0sy.. pause i < tmp.length()sy.. pause ###)
    {
        __ (!(tmp[i] >_ 48 && tmp[i] <_ 57))
            r_ falsesy.. pause
    }

    r_ truesy.. pause
}
v.. enterName()
{
    s.. tmpsy.. pause

    c__ __  "Enter the number: " __  e..
    c__ __ tmpsy.. pause //124

    __ (isNumber(tmp))
        c__ __  "Number entered properly " __  e..
    ____
        c__ __  "Number wasn't entered properly " __  e..
}
