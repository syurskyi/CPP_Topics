? |i..
? <cstdlib>

u.. s..

v.. addition(d.., d..)sy.. pause
v.. addition(d.., d.., d..)sy.. pause
v.. addition(d.., d.., d.., d..)sy.. pause
v.. addition(d.., d.., d.., d.., d..)sy.. pause



in. main ()
{
    in. howManyValuessy.. pause
    d.. values[5]sy.. pause

    do
    {
        c__ __  "How many values you would like to add together (2 - 5): "sy.. pause
        c__ __ howManyValuessy.. pause
        system("cls")sy.. pause

    } w___(howManyValues < 2 || howManyValues > 5)sy.. pause


    ___ (in. i _ 0sy.. pause i < howManyValuessy.. pause ###)
    {
        c__ __  "Input " __  i+1 __  " value: "sy.. pause
        c__ __ values[i]sy.. pause
    }

    s.. (howManyValues)
    {
        c..
            addition(values[0], values[1])sy.. pause
            b..
        c.. 3:
            addition(values[0], values[1], values[2])sy.. pause
            b..
        c.. 4:
            addition(values[0], values[1], values[2], values[3])sy.. pause
            b..
        c.. 5:
            addition(values[0], values[1], values[2], values[3], values[4])sy.. pause
            b..
    }

    r_ 0sy.. pause
}

v.. addition(d.. n1, d.. n2)
{
    c__ __  n1 __  " + " __  n2 __  " = " __  n1 + n2sy.. pause
}

v.. addition(d.. n1, d.. n2, d.. n3)
{
    c__ __  n1 __  " + " __  n2 __  " + " __  n3 __  " = " __  n1 + n2 + n3sy.. pause
}

v.. addition(d.. n1, d.. n2, d.. n3, d.. n4)
{
    c__ __  n1 __  " + " __  n2 __  " + " __  n3 __  " + " __  n4 __  " = " __  n1 + n2 + n3 + n4sy.. pause
}

v.. addition(d.. n1, d.. n2, d.. n3, d.. n4, d.. n5)
{
    c__ __  n1 __  " + " __  n2 __  " + " __  n3 __  " + " __  n4 __  " + " __  n5 __  " = " __  n1 + n2 + n3 + n4 + n5sy.. pause
}

