? |i..

u.. s..

void checkIfTheSame(in.&, in.&);

in. main ()
{

    in. a = 4;
    in. b = 3;
    in. c = a;
    in. &d = a;

    checkIfTheSame(a, b);
    checkIfTheSame(a, c);
    checkIfTheSame(a, d);

    r_ 0;
}

void checkIfTheSame(in. &firstVariable, in. &secondVariable)
{
    __ (firstVariable == secondVariable && &firstVariable == &secondVariable)
    {
        c__ __  "The variables are completely the same !";
    }
    else __ (firstVariable == secondVariable && &firstVariable != &secondVariable)
    {   
		c__ __  firstVariable __  " " __  &firstVariable __  e..
        c__ __  secondVariable __  " " __  &secondVariable __  e..
        c__ __  "The variables have got same values but they are different variables !" __  e..
    }
    else
    {
        c__ __  firstVariable __  " " __  &firstVariable __  e..
        c__ __  secondVariable __  " " __  &secondVariable __  e..
        c__ __  "The variables are different !" __  e..
    }
}

