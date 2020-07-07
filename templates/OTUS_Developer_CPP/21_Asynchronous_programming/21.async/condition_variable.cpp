#include <chrono>
#include <condition_variable>
#include <iostream>
#include <queue>
#include <thread>
#include <future>

std::mutex console_m;

std::condition_variable cv;
std::mutex cv_m;
std::queue<std::string> msgs;
std::atomic_bool quit;

void worker(std::queue<std::string>& q)
{
//    console_m.lock();
//    std::cerr << std::this_thread::get_id() << " starting... " << std::endl;
//    console_m.unlock();

    while (!quit) {
        std::unique_lock<std::mutex> lk(cv_m);

        console_m.lock();
        std::cerr << std::this_thread::get_id() << " waiting... " << std::endl;
        console_m.unlock();

        cv.wait(lk, [&q]() { return !q.empty() || quit; });

//        console_m.lock();
//        std::cerr << std::this_thread::get_id() << " wakeup, size=" << q.size() << ", quit=" << quit << std::endl;
//        console_m.unlock();

        if (!q.empty()) {
            auto msg = std::move(q.front());
            q.pop();
            auto s = q.size();
            lk.unlock();

            console_m.lock();
            std::cerr << std::this_thread::get_id() << " pop=" << msg << " size=" << s << std::endl;
            console_m.unlock();
        }
    }
}

int main()
{
    using namespace std::chrono_literals;
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
    std::cerr << "before quit" << std::endl;
    quit = true;
    cv.notify_all();

    t1.join();
    t2.join();
    t3.join();
    std::cerr << "ok" << std::endl;
}
