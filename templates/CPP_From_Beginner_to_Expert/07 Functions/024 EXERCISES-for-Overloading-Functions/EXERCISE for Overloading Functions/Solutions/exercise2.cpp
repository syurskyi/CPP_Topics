? |i..
? <cstdlib>

u.. s..

v.. addition(d.., d..)sy.. p..
v.. addition(d.., d.., d..)sy.. p..
v.. addition(d.., d.., d.., d..)sy.. p..
v.. addition(d.., d.., d.., d.., d..)sy.. p..



in. main ()
{
    in. howManyValuessy.. p..
    d.. values[5]sy.. p..

    do
    {
        c__ __  "How many values you would like to add together (2 - 5): "sy.. p..
        c__ __ howManyValuessy.. p..
        system("cls")sy.. p..

    } w___(howManyValues < 2 || howManyValues > 5)sy.. p..


    ___ (in. i _ 0sy.. p.. i < howManyValuessy.. p.. ###)
    {
        c__ __  "Input " __  i+1 __  " value: "sy.. p..
        c__ __ values[i]sy.. p..
    }

    s.. (howManyValues)
    {
        c..
            addition(values[0], values[1])sy.. p..
            b..
        c.. 3:
            addition(values[0], values[1], values[2])sy.. p..
            b..
        c.. 4:
            addition(values[0], values[1], values[2], values[3])sy.. p..
            b..
        c.. 5:
            addition(values[0], values[1], values[2], values[3], values[4])sy.. p..
            b..
    }

    r_ 0sy.. p..
}

v.. addition(d.. n1, d.. n2)
{
    c__ __  n1 __  " + " __  n2 __  " = " __  n1 + n2sy.. p..
}

v.. addition(d.. n1, d.. n2, d.. n3)
{
    c__ __  n1 __  " + " __  n2 __  " + " __  n3 __  " = " __  n1 + n2 + n3sy.. p..
}

v.. addition(d.. n1, d.. n2, d.. n3, d.. n4)
{
    c__ __  n1 __  " + " __  n2 __  " + " __  n3 __  " + " __  n4 __  " = " __  n1 + n2 + n3 + n4sy.. p..
}

v.. addition(d.. n1, d.. n2, d.. n3, d.. n4, d.. n5)
{
    c__ __  n1 __  " + " __  n2 __  " + " __  n3 __  " + " __  n4 __  " + " __  n5 __  " = " __  n1 + n2 + n3 + n4 + n5sy.. p..
}

