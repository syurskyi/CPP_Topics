? |i..

namespace ns_foo
{
    class Person
    {
        public:
        v.. display()
        {
            std::c__ __  "Hello from ns_foo::person::display()" __  std::e..
        }
    };
    class Superhero : public Person
    {
        public:
        v.. yell()
        {
            std::c__ __  "I am Iron Man." __  std::e..
        }
    };
}


in. main(in. argc, c.. *argv[])
{
    ns_foo::Superhero iron_man;
    iron_man.display();
    iron_man.yell();

    r_ 0;
}
