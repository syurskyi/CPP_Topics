? |i..
? <cstdlib>

u.. s..

d.. minValue(d.. tab[])sy.. p..
d.. maxValue(d.. tab[])sy.. p..


in. main ()
{
    d.. tab[5]sy.. p..

    ___ (in. i _ 0sy.. p.. i < 5sy.. p.. ###)
    {
        c__ __  "Input " __  i+1 __  " number: "sy.. p..
        c__ __ tab[i]sy.. p..
    }

    c__ __  "The minimum value was: " __  minValue(tab) __  e..
    c__ __  "The maximum value was: " __  maxValue(tab) __  e..

    r_ 0sy.. p..
}

d.. minValue(d.. tab[])
{
    d.. minValue _ tab[0]sy.. p..

    ___ (in. i _ 1sy.. p.. i < 5sy.. p.. ###)
    {
        __ (minValue > tab[i])
            minValue _ tab[i]sy.. p..

    }

    r_ minValuesy.. p..
}
d.. maxValue(d.. tab[])
{
    d.. maxValue _ tab[0]sy.. p..

    ___ (in. i _ 1sy.. p.. i < 5sy.. p.. ###)
    {
        __ (maxValue < tab[i])
            maxValue _ tab[i]sy.. p..

    }

    r_ maxValuesy.. p..
}
