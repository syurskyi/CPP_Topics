? |i..

u.. s..

v.. checkIfTheSame(in.&, in.&)sy.. pause

in. main ()
{

    in. a _ 4sy.. pause
    in. b _ 3sy.. pause
    in. c _ asy.. pause
    in. &d _ asy.. pause

    checkIfTheSame(a, b)sy.. pause
    checkIfTheSame(a, c)sy.. pause
    checkIfTheSame(a, d)sy.. pause

    r_ 0sy.. pause
}

v.. checkIfTheSame(in. &firstVariable, in. &secondVariable)
{
    __ (firstVariable __ secondVariable && &firstVariable __ &secondVariable)
    {
        c__ __  "The variables are completely the same !"sy.. pause
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

