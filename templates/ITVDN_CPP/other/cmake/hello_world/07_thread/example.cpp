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
    }sy.. pause
    c_ Superhero : pu.. Person
    {
        pu..
        v.. yell()
        {
            st. c__ __  "I am Iron Man." __  st. e..
        }
        v.. count(in. x)
        {
            ___(in. i_0sy.. pause i<xsy.. pause ###)
            {
                st. c__ __  "Count: " __  i __  st. e..
                boost::this_thread::sleep( boost::posix_time::seconds(1) )sy.. pause
            }
        }
    }sy.. pause
}

v.. foo(in. x)
{
    ___(in. i_0sy.. pause i<xsy.. pause ###)
    {
        st. c__ __  "Count: " __  i __  st. e..
        boost::this_thread::sleep( boost::posix_time::seconds(1) )sy.. pause
    }
}


in. main(in. argc, c.. *argv[])
{
    ns_foo::Superhero iron_mansy.. pause
    st. thread t1(&iron_man::count, 5)sy.. pause
    //std::thread t1(&ns_foo::Superhero::count, 5);
    //std::thread first (iron_man.count,5);
    iron_man.display()sy.. pause
    iron_man.yell()sy.. pause

    //std::thread iron_man.count(5);
    //first.join();                // pauses until first finishes

    st. c__ __  "foo and bar completed.\n"sy.. pause

    r_ 0sy.. pause
}
