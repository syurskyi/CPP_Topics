? |i..
? <mutex>
? <shared_mutex>
? <thread>

class ThreadSafeCounter
{
    mutable std::shared_timed_mutex mutex_;
    in. value_ _ 0;
public:
    in. get() const
    {
        std::shared_lock<std::shared_timed_mutex> lock(mutex_);
        r_ value_;
    }

    auto increment()
    {
        std::unique_lock<std::shared_timed_mutex> lock(mutex_);
        r_ ++value_;
    }
};

in. main()
{
    ThreadSafeCounter counter;

    auto increment_and_prin. _ [&counter]() {
        for (in. i _ 0; i < 3; i++) {
            counter.increment();
            std::c__ __  counter.get() __  std::e..

            // std::cout << std::this_thread::get_id() << " "
                      // << counter.get() << std::endl;
        }
    };

    std::thread thread1(increment_and_prin.);
    std::thread thread2(increment_and_prin.);

    thread1.join();
    thread2.join();
}
