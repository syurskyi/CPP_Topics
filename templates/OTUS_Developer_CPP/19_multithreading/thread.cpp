? |i..
? |s..
? <thread>
? <map>
? <mutex>
? <future>

st. mutex c___mutexsy.. p..
st. mutex cerr_mutexsy.. p..

u.. dict_t _ st. map<st. s.., st. s..>

thread_local in. thread_local_static_in. _ 0sy.. p..
in. static_in. _ 0sy.. p..

st. s.. foo(dict_t& d)
{
//    throw std::exception();
    thread_local_static_in. _ 0sy.. p..
    static_in. _ 0sy.. p..

    c___mutex.lock()
    d["asas"] _ "zxzxzx"
    c___mutex.unlock()

    st. thread::id this_id _ st. this_thread::get_id()

    c___mutex.lock()
    st. c__ __  "foo " __  this_id __  st. e..
    c___mutex.unlock()

    c___mutex.lock()
    st. cerr __  "foo " __  this_id __  st. e..
    c___mutex.unlock()

    st. this_thread::sleep_for(st. chrono::seconds(1))

    r_ st. s..{"ok"}
}

in. main(in. argc, c..** argv)
{
    ___ {
        dict_t d, d2sy.. p..
        foo(d)
        foo(st. ref(d))

        // казалось бы причём тут смарт поинтеры
        // старт предстакуемый
        st. thread t1(foo, st. ref(d))
        st. thread t2(foo, st. ref(d))

        // когда закончилось
        // чем закончилось
        t1.join()
        t2.join()

        a.. r1 _ st. async(st. launch::async,
                foo, st. ref(d))
        st. c__ __  r1.get() __  st. e..

        a.. r2 _ st. async(st. launch::deferred,
                foo, st. ref(d))
        st. c__ __  r2.get() __  st. e..
    }
    c.. (c.. st. exception &)
    {
        st. cerr __  "oops" __  st. e..
    }
}
