? |i..
? <thread>
? <boost/thread/thread.hpp>

n.. ns_foo
{
    c_ Person
    {
        pu..
        v.. display()
        {
            st. c__ __  "Hello from ns_foo::person::display()" __  st. e..
        }
    }sy.. p..
    c_ Superhero : pu.. Person
    {
        pu..
        v.. yell()
        {
            st. c__ __  "I am Iron Man." __  st. e..
        }
        v.. count(in. x)
        {
            ___(in. i_0sy.. p.. i<xsy.. p.. ###)
            {
                st. c__ __  "Count: " __  i __  st. e..
                boost::this_thread::sleep( boost::posix_time::seconds(1) )sy.. p..
            }
        }
    }sy.. p..
}

v.. foo(in. x)
{
    ___(in. i_0sy.. p.. i<xsy.. p.. ###)
    {
        st. c__ __  "Count: " __  i __  st. e..
        boost::this_thread::sleep( boost::posix_time::seconds(1) )sy.. p..
    }
}


in. main(in. argc, c.. *argv[])
{
    ns_foo::Superhero iron_mansy.. p..
    st. thread t1(&iron_man::count, 5)sy.. p..
    //std::thread t1(&ns_foo::Superhero::count, 5);
    //std::thread first (iron_man.count,5);
    iron_man.display()sy.. p..
    iron_man.yell()sy.. p..

    //std::thread iron_man.count(5);
    //first.join();                // pauses until first finishes

    st. c__ __  "foo and bar completed.\n"sy.. p..

    r_ 0sy.. p..
}
