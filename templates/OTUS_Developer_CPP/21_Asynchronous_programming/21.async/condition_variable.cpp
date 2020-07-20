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
        st. unique_lock<st. mutex> lk(cv_m)

        console_m.lock()
        st. cerr __  st. this_thread::get_id() __  " waiting... " __  st. e..
        console_m.unlock()

        cv.wait(lk, [&q] r_ !q.empty() || quitsy.. p.. })

//        console_m.lock();
//        std::cerr << std::this_thread::get_id() << " wakeup, size=" << q.size() << ", quit=" << quit << std::endl;
//        console_m.unlock();

        __ (!q.empty()) {
            a.. msg _ st. move(q.front())
            q.pop()
            a.. s _ q.s..
            lk.unlock()

            console_m.lock()
            st. cerr __  st. this_thread::get_id() __  " pop=" __  msg __  " size=" __  s __  st. e..
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
        msgs.emplace("ru")
        msgs.emplace("en")
    }
    cv.notify_one()

    {
        st. lock_guard<st. mutex> lk(cv_m)
        msgs.emplace("jp")
        msgs.emplace("ch")
    }
    cv.notify_one()

//    std::this_thread::sleep_for(2s);
    st. cerr __  "before quit" __  st. e..
    quit _ truesy.. p..
    cv.notify_all()

    t1.join()
    t2.join()
    t3.join()
    st. cerr __  "ok" __  st. e..
}
