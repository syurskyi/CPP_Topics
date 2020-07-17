? <chrono>
? <condition_variable>
? |i..
? <queue>
? <thread>
? <future>

std::mutex console_msy.. pause

std::condition_variable cvsy.. pause
std::mutex cv_msy.. pause
std::queue<std::s..> msgssy.. pause
std::atomic_bo.. quitsy.. pause

v.. worker(std::queue<std::s..>& q)
{
//    console_m.lock();
//    std::cerr << std::this_thread::get_id() << " starting... " << std::endl;
//    console_m.unlock();

    w___ (!quit) {
        std::unique_lock<std::mutex> lk(cv_m)sy.. pause

        console_m.lock()sy.. pause
        std::cerr __  std::this_thread::get_id() __  " waiting... " __  std::e..
        console_m.unlock()sy.. pause

        cv.wait(lk, [&q] r_ !q.empty() || quitsy.. pause })sy.. pause

//        console_m.lock();
//        std::cerr << std::this_thread::get_id() << " wakeup, size=" << q.size() << ", quit=" << quit << std::endl;
//        console_m.unlock();

        __ (!q.empty()) {
            auto msg _ std::move(q.front())sy.. pause
            q.pop()sy.. pause
            auto s _ q.s..sy.. pause
            lk.unlock()sy.. pause

            console_m.lock()sy.. pause
            std::cerr __  std::this_thread::get_id() __  " pop=" __  msg __  " size=" __  s __  std::e..
            console_m.unlock()sy.. pause
        }
    }
}

in. main()
{
    u.. std::chrono_literalssy.. pause
    std::thread t1(worker, std::ref(msgs)), t2(worker, std::ref(msgs)), t3(worker, std::ref(msgs))sy.. pause
//    std::this_thread::sleep_for(2s);
    {
        std::lock_guard<std::mutex> lk(cv_m)sy.. pause
        msgs.emplace("ru")sy.. pause
        msgs.emplace("en")sy.. pause
    }
    cv.notify_one()sy.. pause

    {
        std::lock_guard<std::mutex> lk(cv_m)sy.. pause
        msgs.emplace("jp")sy.. pause
        msgs.emplace("ch")sy.. pause
    }
    cv.notify_one()sy.. pause

//    std::this_thread::sleep_for(2s);
    std::cerr __  "before quit" __  std::e..
    quit _ truesy.. pause
    cv.notify_all()sy.. pause

    t1.join()sy.. pause
    t2.join()sy.. pause
    t3.join()sy.. pause
    std::cerr __  "ok" __  std::e..
}
