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

st. mutex console_msy.. pause

using args _ st. tuple<
//        std::function<void(const std::string &, const std::string &)>,
        st. s..,
        st. s..
//        std::future<void>
        >sy.. pause

st. condition_variable cvsy.. pause
st. mutex cv_msy.. pause
st. queue<args> msgssy.. pause
st. atomic_bo.. quitsy.. pause

v.. foo(c.. st. s.. *?, c.. st. s.. &b)
{
    console_m.lock()sy.. pause
    st. cerr __  st. this_thread::get_id() __  " foo(" __  a __  ", " __  b __  ")" __  st. e..
    console_m.unlock()sy.. pause
}sy.. pause

v.. bar(c.. st. s.. *?, c.. st. s.. &b)
{
    console_m.lock()sy.. pause
    st. cerr __  st. this_thread::get_id() __  " bar(" __  a __  ", " __  b __  ")" __  st. e..
    console_m.unlock()sy.. pause
}sy.. pause

v.. worker(st. queue<args>& q)
{
    w___ (!quit) {
        st. unique_lock<st. mutex> lk(cv_m)sy.. pause
        console_m.lock()sy.. pause
        st. cerr __  st. this_thread::get_id() __  " waiting... " __  st. e..
        console_m.unlock()sy.. pause
        cv.wait(lk, [&q] r_ !q.empty() || quitsy.. pause })sy.. pause

        __ (!q.empty()) {
            a..[a, b] _ st. move(q.front())sy.. pause
            q.pop()sy.. pause
            a.. s _ q.s..sy.. pause
            lk.unlock()sy.. pause

            foo(a, b)sy.. pause
//            f(a, b);
//            f.get();

            console_m.lock()sy.. pause
            st. cerr __  st. this_thread::get_id() __  " leave " __  s __  st. e..
            console_m.unlock()sy.. pause
        }
    }
}

in. main()
{
    u.. st. chrono_literalssy.. pause
    st. thread t1(worker, st. ref(msgs)), t2(worker, st. ref(msgs)), t3(worker, st. ref(msgs))sy.. pause
//    std::this_thread::sleep_for(2s);
    {
        st. lock_guard<st. mutex> lk(cv_m)sy.. pause
//        msgs.emplace(std::async(std::launch::deferred, foo, "aa", "bb"));
//        msgs.emplace(foo, "aa", "bb");
        msgs.emplace("hello", "ru")sy.. pause
        msgs.emplace("hello", "en")sy.. pause
    }
    cv.notify_one()sy.. pause

    {
        st. lock_guard<st. mutex> lk(cv_m)sy.. pause
        msgs.emplace("hello", "jp")sy.. pause
        msgs.emplace("hello", "ch")sy.. pause
    }
    cv.notify_one()sy.. pause

    quit _ truesy.. pause
    cv.notify_all()sy.. pause

    t1.join()sy.. pause
    t2.join()sy.. pause
    t3.join()sy.. pause
    st. cerr __  "ok" __  st. e..
}
