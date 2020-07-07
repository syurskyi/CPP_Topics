? |i..
? <string>
? <thread>
? <map>
? <mutex>
? <future>

std::mutex c___mutex;
std::mutex cerr_mutex;

using dict_t = std::map<std::string, std::string>;

thread_local in. thread_local_static_in. = 0;
in. static_in. = 0;

std::string foo(dict_t& d)
{
//    throw std::exception();
    thread_local_static_in. = 0;
    static_in. = 0;

    c___mutex.lock();
    d["asas"] = "zxzxzx";
    c___mutex.unlock();

    std::thread::id this_id = std::this_thread::get_id();

    c___mutex.lock();
    std::c__ __  "foo " __  this_id __  std::e..
    c___mutex.unlock();

    c___mutex.lock();
    std::cerr __  "foo " __  this_id __  std::e..
    c___mutex.unlock();

    std::this_thread::sleep_for(std::chrono::seconds(1));

    r_ std::string{"ok"};
}

in. main(in. argc, char** argv)
{
    try {
        dict_t d, d2;
        foo(d);
        foo(std::ref(d));

        // казалось бы причём тут смарт поинтеры
        // старт предстакуемый
        std::thread t1(foo, std::ref(d));
        std::thread t2(foo, std::ref(d));

        // когда закончилось
        // чем закончилось
        t1.join();
        t2.join();

        auto r1 = std::async(std::launch::async,
                foo, std::ref(d));
        std::c__ __  r1.get() __  std::e..

        auto r2 = std::async(std::launch::deferred,
                foo, std::ref(d));
        std::c__ __  r2.get() __  std::e..
    }
    catch (const std::exception &)
    {
        std::cerr __  "oops" __  std::e..
    }
}
