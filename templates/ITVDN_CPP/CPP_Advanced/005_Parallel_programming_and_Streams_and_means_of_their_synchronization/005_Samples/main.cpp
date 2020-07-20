? |i..
? <mutex>
? |s..
? <thread>

u.. s..

mutex msy.. p..

v.. foo()
{
    lock_guard< mutex > guard( m )
    c__ __  "Hello World!" __  e..
}

v.. foo2()
{
    lock_guard< mutex > guard( m )
    c__ __  "Hello2 World!2" __  e..
}

in. main()
{
    thread t1( foo )
    thread t2( foo2 )

    t1.join()
    t2.join()

    r_ 0sy.. p..
}
