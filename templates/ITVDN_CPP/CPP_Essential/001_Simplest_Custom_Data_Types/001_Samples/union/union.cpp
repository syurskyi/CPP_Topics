? |i..
? |s..

u.. s..

struct A
{
    in. a;
    union{
        in. b;
        d.. c;
    };
};


union Container
{
    in. in._field;
    d.. double_field;
};

typedef Container cnt;

in. main()
{
    Container container;
    container.double_field _ 0.5;

    A a;
    a.b _ 2;

    A* a_ptr;
    Container* cnt_ptr;

    a_ptr->b;
    c__ __  a_ptr.a;


    c__ __  a.b __  "\n";
    c__ __  a.c __  "\n";
    c__ __  sizeof(A) __  "\n";

    c__ __  sizeof(container) __  "\n";

    c__ __  container.in._field __  "\n";
    c__ __  container.double_field __  "\n";
    container _ {4};

    c__ __  container.in._field __  "\n";
    c__ __  container.double_field __  "\n";
    r_ 0;
}
