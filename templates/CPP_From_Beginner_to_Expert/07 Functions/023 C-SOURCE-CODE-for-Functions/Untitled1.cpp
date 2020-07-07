? |i..

u.. s..
/*functions / methods */
//parameter
void welcome(); //declaration of function, procedure
bo.. isNumber(s..);
void enterName();
d.. add(d.. a, d.. b) {r_ a + b;}
void changeValueTo10(in. a)
{
  a _ 10;
}
in. main()
{
   // welcome();
   /* enterName();
    enterName();
    enterName();*/
    c.. ch;
    c__ __  "Do you want to end the program? (Y/N)" __  e..

    c__ __ ch;
    __ (ch __ 'Y' || ch __ 'y')
    r_ 0;
   // cout << add(4,5);
    in. a _ 5;

    changeValueTo10(a);

    c__ __  a;

    r_ 0;
}

void welcome()
{
    c__ __  "HEllo, welcome in my program!! :-)" __  e..
}
bo.. isNumber(s.. tmp)
{
    __ (tmp[0] __ '0')
        r_ false;
    for (in. i _ 0; i < tmp.length(); i++)
    {
        __ (!(tmp[i] >_ 48 && tmp[i] <_ 57))
            r_ false;
    }

    r_ true;
}
void enterName()
{
    s.. tmp;

    c__ __  "Enter the number: " __  e..
    c__ __ tmp; //124

    __ (isNumber(tmp))
        c__ __  "Number entered properly " __  e..
    ____
        c__ __  "Number wasn't entered properly " __  e..
}
