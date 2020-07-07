? |i..
? <cstdlib>

u.. s..

v.. addition(d.., d..);
v.. addition(d.., d.., d..);
v.. addition(d.., d.., d.., d..);
v.. addition(d.., d.., d.., d.., d..);



in. main ()
{
    in. howManyValues;
    d.. values[5];

    do
    {
        c__ __  "How many values you would like to add together (2 - 5): ";
        c__ __ howManyValues;
        system("cls");

    } w___(howManyValues < 2 || howManyValues > 5);


    ___ (in. i _ 0; i < howManyValues; i++)
    {
        c__ __  "Input " __  i+1 __  " value: ";
        c__ __ values[i];
    }

    s.. (howManyValues)
    {
        c..
            addition(values[0], values[1]);
            b..
        c.. 3:
            addition(values[0], values[1], values[2]);
            b..
        c.. 4:
            addition(values[0], values[1], values[2], values[3]);
            b..
        c.. 5:
            addition(values[0], values[1], values[2], values[3], values[4]);
            b..
    }

    r_ 0;
}

v.. addition(d.. n1, d.. n2)
{
    c__ __  n1 __  " + " __  n2 __  " = " __  n1 + n2;
}

v.. addition(d.. n1, d.. n2, d.. n3)
{
    c__ __  n1 __  " + " __  n2 __  " + " __  n3 __  " = " __  n1 + n2 + n3;
}

v.. addition(d.. n1, d.. n2, d.. n3, d.. n4)
{
    c__ __  n1 __  " + " __  n2 __  " + " __  n3 __  " + " __  n4 __  " = " __  n1 + n2 + n3 + n4;
}

v.. addition(d.. n1, d.. n2, d.. n3, d.. n4, d.. n5)
{
    c__ __  n1 __  " + " __  n2 __  " + " __  n3 __  " + " __  n4 __  " + " __  n5 __  " = " __  n1 + n2 + n3 + n4 + n5;
}

