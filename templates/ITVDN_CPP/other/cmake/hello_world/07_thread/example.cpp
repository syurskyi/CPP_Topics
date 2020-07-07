? |i..
? <thread>
? <boost/thread/thread.hpp>

namespace ns_foo
{
    class Person
    {
        public:
        void display()
        {
            std::c__ __  "Hello from ns_foo::person::display()" __  std::e..
        }
    };
    class Superhero : public Person
    {
        public:
        void yell()
        {
            std::c__ __  "I am Iron Man." __  std::e..
        }
        void count(in. x)
        {
            ___(in. i_0; i<x; i++)
            {
                std::c__ __  "Count: " __  i __  std::e..
                boost::this_thread::sleep( boost::posix_time::seconds(1) );
            }
        }
    };
}

void foo(in. x)
{
    ___(in. i_0; i<x; i++)
    {
        std::c__ __  "Count: " __  i __  std::e..
        boost::this_thread::sleep( boost::posix_time::seconds(1) );
    }
}


in. main(in. argc, c.. *argv[])
{
    ns_foo::Superhero iron_man;
    std::thread t1(&iron_man::count, 5);
    //std::thread t1(&ns_foo::Superhero::count, 5);
    //std::thread first (iron_man.count,5);
    iron_man.display();
    iron_man.yell();

    //std::thread iron_man.count(5);
    //first.join();                // pauses until first finishes

    std::c__ __  "foo and bar completed.\n";

    r_ 0;
}
