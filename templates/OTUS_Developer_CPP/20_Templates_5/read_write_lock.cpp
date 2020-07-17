? |i..
? <mutex>
? <shared_mutex>
? <thread>

c_ ThreadSafeCounter
{
    mutable st. shared_timed_mutex mutex_sy.. pause
    in. value_ _ 0sy.. pause
pu..
    in. get() c..
    {
        st. shared_lock<st. shared_timed_mutex> lock(mutex_)sy.. pause
        r_ value_sy.. pause
    }

    a.. increment()
    {
        st. unique_lock<st. shared_timed_mutex> lock(mutex_)sy.. pause
        r_ ++value_sy.. pause
    }
}sy.. pause

in. main()
{
    ThreadSafeCounter countersy.. pause

    a.. increment_and_prin. _ [&counter]
        ___ (in. i _ 0sy.. pause i < 3sy.. pause ###) {
            counter.increment()sy.. pause
            st. c__ __  counter.get() __  st. e..

            // std::cout << std::this_thread::get_id() << " "
                      // << counter.get() << std::endl;
        }
    }sy.. pause

    st. thread thread1(increment_and_prin.)sy.. pause
    st. thread thread2(increment_and_prin.)sy.. pause

    thread1.join()sy.. pause
    thread2.join()sy.. pause
}
