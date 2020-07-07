? |i..
? <mutex>
? <string>
? <thread>

u.. s..

mutex m;

void foo()
{
    lock_guard< mutex > guard( m );
    c__ __  "Hello World!" __  e..
}

void foo2()
{
    lock_guard< mutex > guard( m );
    c__ __  "Hello2 World!2" __  e..
}

in. main()
{
    thread t1( foo );
    thread t2( foo2 );

    t1.join();
    t2.join();

    r_ 0;
}
