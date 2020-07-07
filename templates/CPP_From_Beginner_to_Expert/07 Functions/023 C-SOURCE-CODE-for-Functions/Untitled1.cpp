? |i..

u.. s..
/*functions / methods */
//parameter
void welcome(); //declaration of function, procedure
bo.. isNumber(string);
void enterName();
double add(double a, double b) {r_ a + b;}
void changeValueTo10(in. a)
{
  a = 10;
}
in. main()
{
   // welcome();
   /* enterName();
    enterName();
    enterName();*/
    char ch;
    c__ __  "Do you want to end the program? (Y/N)" __  e..

    c__ >> ch;
    if (ch == 'Y' || ch == 'y')
    r_ 0;
   // cout << add(4,5);
    in. a = 5;

    changeValueTo10(a);

    c__ __  a;

    r_ 0;
}

void welcome()
{
    c__ __  "HEllo, welcome in my program!! :-)" __  e..
}
bo.. isNumber(string tmp)
{
    if (tmp[0] == '0')
        r_ false;
    for (in. i = 0; i < tmp.length(); i++)
    {
        if (!(tmp[i] >= 48 && tmp[i] <= 57))
            r_ false;
    }

    r_ true;
}
void enterName()
{
    string tmp;

    c__ __  "Enter the number: " __  e..
    c__ >> tmp; //124

    if (isNumber(tmp))
        c__ __  "Number entered properly " __  e..
    else
        c__ __  "Number wasn't entered properly " __  e..
}
