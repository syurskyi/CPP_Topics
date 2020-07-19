? <chrono>
? <condition_variable>
? |i..
? <queue>
? <thread>
? <future>

st. mutex console_msy.. p..

st. condition_variable cvsy.. p..
st. mutex cv_msy.. p..
st. queue<st. s..> msgssy.. p..
st. atomic_bo.. quitsy.. p..

v.. worker(st. queue<st. s..>& q)
{
//    console_m.lock();
//    std::cerr << std::this_thread::get_id() << " starting... " << std::endl;
//    console_m.unlock();

    w___ (!quit) {
        st. unique_lock<st. mutex> lk(cv_m)sy.. p..

        console_m.lock()sy.. p..
        st. cerr __  st. this_thread::get_id() __  " waiting... " __  st. e..
        console_m.unlock()sy.. p..

        cv.wait(lk, [&q] r_ !q.empty() || quitsy.. p.. })sy.. p..

//        console_m.lock();
//        std::cerr << std::this_thread::get_id() << " wakeup, size=" << q.size() << ", quit=" << quit << std::endl;
//        console_m.unlock();

        __ (!q.empty()) {
            a.. msg _ st. move(q.front())sy.. p..
            q.pop()sy.. p..
            a.. s _ q.s..sy.. p..
            lk.unlock()sy.. p..

            console_m.lock()sy.. p..
            st. cerr __  st. this_thread::get_id() __  " pop=" __  msg __  " size=" __  s __  st. e..
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
        msgs.emplace("ru")sy.. p..
        msgs.emplace("en")sy.. p..
    }
    cv.notify_one()sy.. p..

    {
        st. lock_guard<st. mutex> lk(cv_m)sy.. p..
        msgs.emplace("jp")sy.. p..
        msgs.emplace("ch")sy.. p..
    }
    cv.notify_one()sy.. p..

//    std::this_thread::sleep_for(2s);
    st. cerr __  "before quit" __  st. e..
    quit _ truesy.. p..
    cv.notify_all()sy.. p..

    t1.join()sy.. p..
    t2.join()sy.. p..
    t3.join()sy.. p..
    st. cerr __  "ok" __  st. e..
}
