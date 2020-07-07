? |i..

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
    };
}


in. main(in. argc, char *argv[])
{
    ns_foo::Superhero iron_man;
    iron_man.display();
    iron_man.yell();

    r_ 0;
}
