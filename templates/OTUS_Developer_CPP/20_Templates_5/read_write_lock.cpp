? |i..
? <mutex>
? <shared_mutex>
? <thread>

c_ ThreadSafeCounter
{
    mutable std::shared_timed_mutex mutex_sy.. pause
    in. value_ _ 0sy.. pause
pu..
    in. get() c..
    {
        std::shared_lock<std::shared_timed_mutex> lock(mutex_)sy.. pause
        r_ value_sy.. pause
    }

    auto increment()
    {
        std::unique_lock<std::shared_timed_mutex> lock(mutex_)sy.. pause
        r_ ++value_sy.. pause
    }
}sy.. pause

in. main()
{
    ThreadSafeCounter countersy.. pause

    auto increment_and_prin. _ [&counter]() {
        ___ (in. i _ 0sy.. pause i < 3sy.. pause i++) {
            counter.increment()sy.. pause
            std::c__ __  counter.get() __  std::e..

            // std::cout << std::this_thread::get_id() << " "
                      // << counter.get() << std::endl;
        }
    }sy.. pause

    std::thread thread1(increment_and_prin.)sy.. pause
    std::thread thread2(increment_and_prin.)sy.. pause

    thread1.join()sy.. pause
    thread2.join()sy.. pause
}
