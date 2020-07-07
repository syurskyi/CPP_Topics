? |i..
? <cstdlib>

u.. s..

v.. variableType(in.);
v.. variableType(d..);
v.. variableType(s..);

in. main ()
{
    in. var1 _ 2;
    d.. var2 _ 0.123;
    s.. var3 _ "What a beautiful day !";

    variableType(var1);
    variableType(var2);
    variableType(var3);

    r_ 0;
}

v.. variableType(in. var)
{
    c__ __  var __  " - this variable was an integer !" __  e..
}
v.. variableType(d.. var)
{
    c__ __  var __  " - this variable was a double !" __  e..
}
v.. variableType(s.. var)
{
    c__ __  var __  " - this variable was a string !" __  e..
}
