? <chrono>
? <condition_variable>
? |i..
? <queue>
? <thread>
? <future>

st. mutex console_msy.. pause

st. condition_variable cvsy.. pause
st. mutex cv_msy.. pause
st. queue<st. s..> msgssy.. pause
st. atomic_bo.. quitsy.. pause

v.. worker(st. queue<st. s..>& q)
{
//    console_m.lock();
//    std::cerr << std::this_thread::get_id() << " starting... " << std::endl;
//    console_m.unlock();

    w___ (!quit) {
        st. unique_lock<st. mutex> lk(cv_m)sy.. pause

        console_m.lock()sy.. pause
        st. cerr __  st. this_thread::get_id() __  " waiting... " __  st. e..
        console_m.unlock()sy.. pause

        cv.wait(lk, [&q] r_ !q.empty() || quitsy.. pause })sy.. pause

//        console_m.lock();
//        std::cerr << std::this_thread::get_id() << " wakeup, size=" << q.size() << ", quit=" << quit << std::endl;
//        console_m.unlock();

        __ (!q.empty()) {
            a.. msg _ st. move(q.front())sy.. pause
            q.pop()sy.. pause
            a.. s _ q.s..sy.. pause
            lk.unlock()sy.. pause

            console_m.lock()sy.. pause
            st. cerr __  st. this_thread::get_id() __  " pop=" __  msg __  " size=" __  s __  st. e..
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
        msgs.emplace("ru")sy.. pause
        msgs.emplace("en")sy.. pause
    }
    cv.notify_one()sy.. pause

    {
        st. lock_guard<st. mutex> lk(cv_m)sy.. pause
        msgs.emplace("jp")sy.. pause
        msgs.emplace("ch")sy.. pause
    }
    cv.notify_one()sy.. pause

//    std::this_thread::sleep_for(2s);
    st. cerr __  "before quit" __  st. e..
    quit _ truesy.. pause
    cv.notify_all()sy.. pause

    t1.join()sy.. pause
    t2.join()sy.. pause
    t3.join()sy.. pause
    st. cerr __  "ok" __  st. e..
}
