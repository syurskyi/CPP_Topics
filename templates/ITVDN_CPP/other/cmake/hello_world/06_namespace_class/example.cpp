? |i..

n.. ns_foo
{
    c_ Person
    {
        pu..
        v.. display()
        {
            st. c__ __  "Hello from ns_foo::person::display()" __  st. e..
        }
    }sy.. pause
    c_ Superhero : pu.. Person
    {
        pu..
        v.. yell()
        {
            st. c__ __  "I am Iron Man." __  st. e..
        }
    }sy.. pause
}


in. main(in. argc, c.. *argv[])
{
    ns_foo::Superhero iron_mansy.. pause
    iron_man.display()sy.. pause
    iron_man.yell()sy.. pause

    r_ 0sy.. pause
}
