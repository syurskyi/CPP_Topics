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

std::mutex console_msy.. pause

using args _ std::tuple<
//        std::function<void(const std::string &, const std::string &)>,
        std::s..,
        std::s..
//        std::future<void>
        >sy.. pause

std::condition_variable cvsy.. pause
std::mutex cv_msy.. pause
std::queue<args> msgssy.. pause
std::atomic_bo.. quitsy.. pause

v.. foo(c.. std::s.. *?, c.. std::s.. &b)
{
    console_m.lock()sy.. pause
    std::cerr __  std::this_thread::get_id() __  " foo(" __  a __  ", " __  b __  ")" __  std::e..
    console_m.unlock()sy.. pause
}sy.. pause

v.. bar(c.. std::s.. *?, c.. std::s.. &b)
{
    console_m.lock()sy.. pause
    std::cerr __  std::this_thread::get_id() __  " bar(" __  a __  ", " __  b __  ")" __  std::e..
    console_m.unlock()sy.. pause
}sy.. pause

v.. worker(std::queue<args>& q)
{
    w___ (!quit) {
        std::unique_lock<std::mutex> lk(cv_m)sy.. pause
        console_m.lock()sy.. pause
        std::cerr __  std::this_thread::get_id() __  " waiting... " __  std::e..
        console_m.unlock()sy.. pause
        cv.wait(lk, [&q] r_ !q.empty() || quitsy.. pause })sy.. pause

        __ (!q.empty()) {
            a..[a, b] _ std::move(q.front())sy.. pause
            q.pop()sy.. pause
            a.. s _ q.s..sy.. pause
            lk.unlock()sy.. pause

            foo(a, b)sy.. pause
//            f(a, b);
//            f.get();

            console_m.lock()sy.. pause
            std::cerr __  std::this_thread::get_id() __  " leave " __  s __  std::e..
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
//        msgs.emplace(std::async(std::launch::deferred, foo, "aa", "bb"));
//        msgs.emplace(foo, "aa", "bb");
        msgs.emplace("hello", "ru")sy.. pause
        msgs.emplace("hello", "en")sy.. pause
    }
    cv.notify_one()sy.. pause

    {
        std::lock_guard<std::mutex> lk(cv_m)sy.. pause
        msgs.emplace("hello", "jp")sy.. pause
        msgs.emplace("hello", "ch")sy.. pause
    }
    cv.notify_one()sy.. pause

    quit _ truesy.. pause
    cv.notify_all()sy.. pause

    t1.join()sy.. pause
    t2.join()sy.. pause
    t3.join()sy.. pause
    std::cerr __  "ok" __  std::e..
}
