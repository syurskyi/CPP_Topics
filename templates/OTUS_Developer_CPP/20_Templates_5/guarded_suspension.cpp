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

using args _ st. tuple<
//        std::function<void(const std::string &, const std::string &)>,
        st. s..,
        st. s..
//        std::future<void>
        >sy.. p..

st. condition_variable cvsy.. p..
st. mutex cv_msy.. p..
st. queue<args> msgssy.. p..
st. atomic_bo.. quitsy.. p..

v.. foo(c.. st. s.. *?, c.. st. s.. &b)
{
    console_m.lock()sy.. p..
    st. cerr __  st. this_thread::get_id() __  " foo(" __  a __  ", " __  b __  ")" __  st. e..
    console_m.unlock()sy.. p..
}sy.. p..

v.. bar(c.. st. s.. *?, c.. st. s.. &b)
{
    console_m.lock()sy.. p..
    st. cerr __  st. this_thread::get_id() __  " bar(" __  a __  ", " __  b __  ")" __  st. e..
    console_m.unlock()sy.. p..
}sy.. p..

v.. worker(st. queue<args>& q)
{
    w___ (!quit) {
        st. unique_lock<st. mutex> lk(cv_m)sy.. p..
        console_m.lock()sy.. p..
        st. cerr __  st. this_thread::get_id() __  " waiting... " __  st. e..
        console_m.unlock()sy.. p..
        cv.wait(lk, [&q] r_ !q.empty() || quitsy.. p.. })sy.. p..

        __ (!q.empty()) {
            a..[a, b] _ st. move(q.front())sy.. p..
            q.pop()sy.. p..
            a.. s _ q.s..sy.. p..
            lk.unlock()sy.. p..

            foo(a, b)sy.. p..
//            f(a, b);
//            f.get();

            console_m.lock()sy.. p..
            st. cerr __  st. this_thread::get_id() __  " leave " __  s __  st. e..
            console_m.unlock()sy.. p..
        }
    }
}

in. main()
{
    u.. st. chrono_literalssy.. p..
    st. thread t1(worker, st. ref(msgs)), t2(worker, st. ref(msgs)), t3(worker, st. ref(msgs))sy.. p..
//    std::this_thread::sleep_for(2s);
    {
        st. lock_guard<st. mutex> lk(cv_m)sy.. p..
//        msgs.emplace(std::async(std::launch::deferred, foo, "aa", "bb"));
//        msgs.emplace(foo, "aa", "bb");
        msgs.emplace("hello", "ru")sy.. p..
        msgs.emplace("hello", "en")sy.. p..
    }
    cv.notify_one()sy.. p..

    {
        st. lock_guard<st. mutex> lk(cv_m)sy.. p..
        msgs.emplace("hello", "jp")sy.. p..
        msgs.emplace("hello", "ch")sy.. p..
    }
    cv.notify_one()sy.. p..

    quit _ truesy.. p..
    cv.notify_all()sy.. p..

    t1.join()sy.. p..
    t2.join()sy.. p..
    t3.join()sy.. p..
    st. cerr __  "ok" __  st. e..
}
