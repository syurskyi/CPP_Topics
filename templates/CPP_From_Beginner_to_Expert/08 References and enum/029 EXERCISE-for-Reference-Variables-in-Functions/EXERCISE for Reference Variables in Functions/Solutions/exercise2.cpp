? |i..

u.. s..

v.. checkIfTheSame(in.&, in.&)

in. main ()
{

    in. a _ 4sy.. p..
    in. b _ 3sy.. p..
    in. c _ asy.. p..
    in. &d _ asy.. p..

    checkIfTheSame(a, b)
    checkIfTheSame(a, c)
    checkIfTheSame(a, d)

    r_ 0sy.. p..
}

v.. checkIfTheSame(in. &firstVariable, in. &secondVariable)
{
    __ (firstVariable __ secondVariable && &firstVariable __ &secondVariable)
    {
        c__ __  "The variables are completely the same !"
    }
    ____ __ (firstVariable __ secondVariable && &firstVariable !_ &secondVariable)
    {   
		c__ __  firstVariable __  " " __  &firstVariable __  e..
        c__ __  secondVariable __  " " __  &secondVariable __  e..
        c__ __  "The variables have got same values but they are different variables !" __  e..
    }
    ____
    {
        c__ __  firstVariable __  " " __  &firstVariable __  e..
        c__ __  secondVariable __  " " __  &secondVariable __  e..
        c__ __  "The variables are different !" __  e..
    }
}

