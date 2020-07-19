? |i..
? |s..
? <thread>
? <map>
? <mutex>
? <future>

st. mutex c___mutexsy.. p..
st. mutex cerr_mutexsy.. p..

u.. dict_t _ st. map<st. s.., st. s..>sy.. p..

thread_local in. thread_local_static_in. _ 0sy.. p..
in. static_in. _ 0sy.. p..

st. s.. foo(dict_t& d)
{
//    throw std::exception();
    thread_local_static_in. _ 0sy.. p..
    static_in. _ 0sy.. p..

    c___mutex.lock()sy.. p..
    d["asas"] _ "zxzxzx"sy.. p..
    c___mutex.unlock()sy.. p..

    st. thread::id this_id _ st. this_thread::get_id()sy.. p..

    c___mutex.lock()sy.. p..
    st. c__ __  "foo " __  this_id __  st. e..
    c___mutex.unlock()sy.. p..

    c___mutex.lock()sy.. p..
    st. cerr __  "foo " __  this_id __  st. e..
    c___mutex.unlock()sy.. p..

    st. this_thread::sleep_for(st. chrono::seconds(1))sy.. p..

    r_ st. s..{"ok"}sy.. p..
}

in. main(in. argc, c..** argv)
{
    ___ {
        dict_t d, d2sy.. p..
        foo(d)sy.. p..
        foo(st. ref(d))sy.. p..

        // казалось бы причём тут смарт поинтеры
        // старт предстакуемый
        st. thread t1(foo, st. ref(d))sy.. p..
        st. thread t2(foo, st. ref(d))sy.. p..

        // когда закончилось
        // чем закончилось
        t1.join()sy.. p..
        t2.join()sy.. p..

        a.. r1 _ st. async(st. launch::async,
                foo, st. ref(d))sy.. p..
        st. c__ __  r1.get() __  st. e..

        a.. r2 _ st. async(st. launch::deferred,
                foo, st. ref(d))sy.. p..
        st. c__ __  r2.get() __  st. e..
    }
    c.. (c.. st. exception &)
    {
        st. cerr __  "oops" __  st. e..
    }
}
