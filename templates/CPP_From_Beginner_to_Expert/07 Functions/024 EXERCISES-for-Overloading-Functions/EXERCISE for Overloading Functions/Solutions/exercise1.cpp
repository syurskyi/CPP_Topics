? |i..
? <cstdlib>

u.. s..

v.. variableType(in.)sy.. pause
v.. variableType(d..)sy.. pause
v.. variableType(s..)sy.. pause

in. main ()
{
    in. var1 _ 2sy.. pause
    d.. var2 _ 0.123sy.. pause
    s.. var3 _ "What a beautiful day !"sy.. pause

    variableType(var1)sy.. pause
    variableType(var2)sy.. pause
    variableType(var3)sy.. pause

    r_ 0sy.. pause
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
