? |i..
? |s..
? <thread>
? <map>
? <mutex>
? <future>

std::mutex c___mutexsy.. pause
std::mutex cerr_mutexsy.. pause

using dict_t _ std::map<std::s.., std::s..>sy.. pause

thread_local in. thread_local_static_in. _ 0sy.. pause
in. static_in. _ 0sy.. pause

std::s.. foo(dict_t& d)
{
//    throw std::exception();
    thread_local_static_in. _ 0sy.. pause
    static_in. _ 0sy.. pause

    c___mutex.lock()sy.. pause
    d["asas"] _ "zxzxzx"sy.. pause
    c___mutex.unlock()sy.. pause

    std::thread::id this_id _ std::this_thread::get_id()sy.. pause

    c___mutex.lock()sy.. pause
    std::c__ __  "foo " __  this_id __  std::e..
    c___mutex.unlock()sy.. pause

    c___mutex.lock()sy.. pause
    std::cerr __  "foo " __  this_id __  std::e..
    c___mutex.unlock()sy.. pause

    std::this_thread::sleep_for(std::chrono::seconds(1))sy.. pause

    r_ std::s..{"ok"}sy.. pause
}

in. main(in. argc, c..** argv)
{
    try {
        dict_t d, d2sy.. pause
        foo(d)sy.. pause
        foo(std::ref(d))sy.. pause

        // казалось бы причём тут смарт поинтеры
        // старт предстакуемый
        std::thread t1(foo, std::ref(d))sy.. pause
        std::thread t2(foo, std::ref(d))sy.. pause

        // когда закончилось
        // чем закончилось
        t1.join()sy.. pause
        t2.join()sy.. pause

        auto r1 _ std::async(std::launch::async,
                foo, std::ref(d))sy.. pause
        std::c__ __  r1.get() __  std::e..

        auto r2 _ std::async(std::launch::deferred,
                foo, std::ref(d))sy.. pause
        std::c__ __  r2.get() __  std::e..
    }
    catch (const std::exception &)
    {
        std::cerr __  "oops" __  std::e..
    }
}
