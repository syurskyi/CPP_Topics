? |i..
? |s..
? <thread>
? <map>
? <mutex>
? <future>

st. mutex c___mutexsy.. pause
st. mutex cerr_mutexsy.. pause

using dict_t _ st. map<st. s.., st. s..>sy.. pause

thread_local in. thread_local_static_in. _ 0sy.. pause
in. static_in. _ 0sy.. pause

st. s.. foo(dict_t& d)
{
//    throw std::exception();
    thread_local_static_in. _ 0sy.. pause
    static_in. _ 0sy.. pause

    c___mutex.lock()sy.. pause
    d["asas"] _ "zxzxzx"sy.. pause
    c___mutex.unlock()sy.. pause

    st. thread::id this_id _ st. this_thread::get_id()sy.. pause

    c___mutex.lock()sy.. pause
    st. c__ __  "foo " __  this_id __  st. e..
    c___mutex.unlock()sy.. pause

    c___mutex.lock()sy.. pause
    st. cerr __  "foo " __  this_id __  st. e..
    c___mutex.unlock()sy.. pause

    st. this_thread::sleep_for(st. chrono::seconds(1))sy.. pause

    r_ st. s..{"ok"}sy.. pause
}

in. main(in. argc, c..** argv)
{
    ___ {
        dict_t d, d2sy.. pause
        foo(d)sy.. pause
        foo(st. ref(d))sy.. pause

        // казалось бы причём тут смарт поинтеры
        // старт предстакуемый
        st. thread t1(foo, st. ref(d))sy.. pause
        st. thread t2(foo, st. ref(d))sy.. pause

        // когда закончилось
        // чем закончилось
        t1.join()sy.. pause
        t2.join()sy.. pause

        a.. r1 _ st. async(st. launch::async,
                foo, st. ref(d))sy.. pause
        st. c__ __  r1.get() __  st. e..

        a.. r2 _ st. async(st. launch::deferred,
                foo, st. ref(d))sy.. pause
        st. c__ __  r2.get() __  st. e..
    }
    c.. (c.. st. exception &)
    {
        st. cerr __  "oops" __  st. e..
    }
}
