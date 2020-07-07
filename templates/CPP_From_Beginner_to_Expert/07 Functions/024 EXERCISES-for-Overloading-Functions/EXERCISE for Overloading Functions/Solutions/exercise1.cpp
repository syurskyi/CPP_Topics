? |i..
? <cstdlib>

u.. s..

void variableType(in.);
void variableType(double);
void variableType(s..);

in. main ()
{
    in. var1 _ 2;
    double var2 _ 0.123;
    s.. var3 _ "What a beautiful day !";

    variableType(var1);
    variableType(var2);
    variableType(var3);

    r_ 0;
}

void variableType(in. var)
{
    c__ __  var __  " - this variable was an integer !" __  e..
}
void variableType(double var)
{
    c__ __  var __  " - this variable was a double !" __  e..
}
void variableType(s.. var)
{
    c__ __  var __  " - this variable was a string !" __  e..
}
