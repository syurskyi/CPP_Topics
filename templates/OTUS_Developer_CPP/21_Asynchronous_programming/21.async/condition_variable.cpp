? <chrono>
? <condition_variable>
? |i..
? <queue>
? <thread>
? <future>

std::mutex console_m;

std::condition_variable cv;
std::mutex cv_m;
std::queue<std::s..> msgs;
std::atomic_bo.. quit;

void worker(std::queue<std::s..>& q)
{
//    console_m.lock();
//    std::cerr << std::this_thread::get_id() << " starting... " << std::endl;
//    console_m.unlock();

    while (!quit) {
        std::unique_lock<std::mutex> lk(cv_m);

        console_m.lock();
        std::cerr __  std::this_thread::get_id() __  " waiting... " __  std::e..
        console_m.unlock();

        cv.wait(lk, [&q]() { r_ !q.empty() || quit; });

//        console_m.lock();
//        std::cerr << std::this_thread::get_id() << " wakeup, size=" << q.size() << ", quit=" << quit << std::endl;
//        console_m.unlock();

        __ (!q.empty()) {
            auto msg _ std::move(q.front());
            q.pop();
            auto s _ q.size();
            lk.unlock();

            console_m.lock();
            std::cerr __  std::this_thread::get_id() __  " pop=" __  msg __  " size=" __  s __  std::e..
            console_m.unlock();
        }
    }
}

in. main()
{
    u.. std::chrono_literals;
    std::thread t1(worker, std::ref(msgs)), t2(worker, std::ref(msgs)), t3(worker, std::ref(msgs));
//    std::this_thread::sleep_for(2s);
    {
        std::lock_guard<std::mutex> lk(cv_m);
        msgs.emplace("ru");
        msgs.emplace("en");
    }
    cv.notify_one();

    {
        std::lock_guard<std::mutex> lk(cv_m);
        msgs.emplace("jp");
        msgs.emplace("ch");
    }
    cv.notify_one();

//    std::this_thread::sleep_for(2s);
    std::cerr __  "before quit" __  std::e..
    quit _ true;
    cv.notify_all();

    t1.join();
    t2.join();
    t3.join();
    std::cerr __  "ok" __  std::e..
}
