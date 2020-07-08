? |i..
? <cstdlib>

u.. s..

d.. minValue(d.. tab[])sy.. pause
d.. maxValue(d.. tab[])sy.. pause


in. main ()
{
    d.. tab[5]sy.. pause

    ___ (in. i _ 0sy.. pause i < 5sy.. pause ###)
    {
        c__ __  "Input " __  i+1 __  " number: "sy.. pause
        c__ __ tab[i]sy.. pause
    }

    c__ __  "The minimum value was: " __  minValue(tab) __  e..
    c__ __  "The maximum value was: " __  maxValue(tab) __  e..

    r_ 0sy.. pause
}

d.. minValue(d.. tab[])
{
    d.. minValue _ tab[0]sy.. pause

    ___ (in. i _ 1sy.. pause i < 5sy.. pause ###)
    {
        __ (minValue > tab[i])
            minValue _ tab[i]sy.. pause

    }

    r_ minValuesy.. pause
}
d.. maxValue(d.. tab[])
{
    d.. maxValue _ tab[0]sy.. pause

    ___ (in. i _ 1sy.. pause i < 5sy.. pause ###)
    {
        __ (maxValue < tab[i])
            maxValue _ tab[i]sy.. pause

    }

    r_ maxValuesy.. pause
}
