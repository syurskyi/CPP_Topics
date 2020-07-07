? |i..
? <mutex>
? |s..
? <thread>

u.. s..

mutex msy.. pause

v.. foo()
{
    lock_guard< mutex > guard( m )sy.. pause
    c__ __  "Hello World!" __  e..
}

v.. foo2()
{
    lock_guard< mutex > guard( m )sy.. pause
    c__ __  "Hello2 World!2" __  e..
}

in. main()
{
    thread t1( foo )sy.. pause
    thread t2( foo2 )sy.. pause

    t1.join()sy.. pause
    t2.join()sy.. pause

    r_ 0sy.. pause
}
