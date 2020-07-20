? |i..

u.. s..
/*functions / methods */
//parameter
v.. welcome() //declaration of function, procedure
bo.. isNumber(s..)
v.. enterName()
d.. add(d.. a, d.. b) {r_ a + bsy.. p..}
v.. changeValueTo10(in. a)
{
  a _ 10sy.. p..
}
in. main()
{
   // welcome();
   /* enterName();
    enterName();
    enterName();*/
    c.. chsy.. p..
    c__ __  "Do you want to end the program? (Y/N)" __  e..

    c__ __ chsy.. p..
    __ (ch __ 'Y' || ch __ 'y')
    r_ 0sy.. p..
   // cout << add(4,5);
    in. a _ 5sy.. p..

    changeValueTo10(a)

    c__ __  asy.. p..

    r_ 0sy.. p..
}

v.. welcome()
{
    c__ __  "HEllo, welcome in my program!! :-)" __  e..
}
bo.. isNumber(s.. tmp)
{
    __ (tmp[0] __ '0')
        r_ falsesy.. p..
    ___ (in. i _ 0sy.. p.. i < tmp.length() ###)
    {
        __ (!(tmp[i] >_ 48 && tmp[i] <_ 57))
            r_ falsesy.. p..
    }

    r_ truesy.. p..
}
v.. enterName()
{
    s.. tmpsy.. p..

    c__ __  "Enter the number: " __  e..
    c__ __ tmpsy.. p.. //124

    __ (isNumber(tmp))
        c__ __  "Number entered properly " __  e..
    ____
        c__ __  "Number wasn't entered properly " __  e..
}
