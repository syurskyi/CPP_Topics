// Guarded suspension
// Monitor Object
// Thread pool
// Reactor
// Active Object

? <chrono>
? <condition_variable>
? |i..
? <queue>
? <thread>
? <future>

st. mutex console_msy.. p..

u.. args _ st. tuple<
//        std::function<void(const std::string &, const std::string &)>,
        st. s..,
        st. s..
//        std::future<void>
        >

st. condition_variable cvsy.. p..
st. mutex cv_msy.. p..
st. queue<args> msgssy.. p..
st. atomic_bo.. quitsy.. p..

v.. foo(c.. st. s.. *?, c.. st. s.. &b)
{
    console_m.lock()
    st. cerr __  st. this_thread::get_id() __  " foo(" __  a __  ", " __  b __  ")" __  st. e..
    console_m.unlock()
}

v.. bar(c.. st. s.. *?, c.. st. s.. &b)
{
    console_m.lock()
    st. cerr __  st. this_thread::get_id() __  " bar(" __  a __  ", " __  b __  ")" __  st. e..
    console_m.unlock()
}

v.. worker(st. queue<args>& q)
{
    w___ (!quit) {
        st. unique_lock<st. mutex> lk(cv_m)
        console_m.lock()
        st. cerr __  st. this_thread::get_id() __  " waiting... " __  st. e..
        console_m.unlock()
        cv.wait(lk, [&q] r_ !q.empty() || quitsy.. p.. })

        __ (!q.empty()) {
            a..[a, b] _ st. move(q.front())
            q.pop()
            a.. s _ q.s..
            lk.unlock()

            foo(a, b)
//            f(a, b);
//            f.get();

            console_m.lock()
            st. cerr __  st. this_thread::get_id() __  " leave " __  s __  st. e..
            console_m.unlock()
        }
    }
}

in. main()
{
    u.. st. chrono_literalssy.. p..
    st. thread t1(worker, st. ref(msgs)), t2(worker, st. ref(msgs)), t3(worker, st. ref(msgs))
//    std::this_thread::sleep_for(2s);
    {
        st. lock_guard<st. mutex> lk(cv_m)
//        msgs.emplace(std::async(std::launch::deferred, foo, "aa", "bb"));
//        msgs.emplace(foo, "aa", "bb");
        msgs.emplace("hello", "ru")
        msgs.emplace("hello", "en")
    }
    cv.notify_one()

    {
        st. lock_guard<st. mutex> lk(cv_m)
        msgs.emplace("hello", "jp")
        msgs.emplace("hello", "ch")
    }
    cv.notify_one()

    quit _ truesy.. p..
    cv.notify_all()

    t1.join()
    t2.join()
    t3.join()
    st. cerr __  "ok" __  st. e..
}
