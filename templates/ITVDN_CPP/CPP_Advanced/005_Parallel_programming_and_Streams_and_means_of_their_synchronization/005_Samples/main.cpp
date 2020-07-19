? |i..
? <mutex>
? |s..
? <thread>

u.. s..

mutex msy.. p..

v.. foo()
{
    lock_guard< mutex > guard( m )sy.. p..
    c__ __  "Hello World!" __  e..
}

v.. foo2()
{
    lock_guard< mutex > guard( m )sy.. p..
    c__ __  "Hello2 World!2" __  e..
}

in. main()
{
    thread t1( foo )sy.. p..
    thread t2( foo2 )sy.. p..

    t1.join()sy.. p..
    t2.join()sy.. p..

    r_ 0sy.. p..
}
