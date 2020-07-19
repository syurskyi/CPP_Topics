? |i..
? <mutex>
? <shared_mutex>
? <thread>

c_ ThreadSafeCounter
{
    mutable st. shared_timed_mutex mutex_sy.. p..
    in. value_ _ 0sy.. p..
pu..
    in. get() c..
    {
        st. shared_lock<st. shared_timed_mutex> lock(mutex_)sy.. p..
        r_ value_sy.. p..
    }

    a.. increment()
    {
        st. unique_lock<st. shared_timed_mutex> lock(mutex_)sy.. p..
        r_ ++value_sy.. p..
    }
}sy.. p..

in. main()
{
    ThreadSafeCounter countersy.. p..

    a.. increment_and_prin. _ [&counter]
        ___ (in. i _ 0sy.. p.. i < 3sy.. p.. ###) {
            counter.increment()sy.. p..
            st. c__ __  counter.get() __  st. e..

            // std::cout << std::this_thread::get_id() << " "
                      // << counter.get() << std::endl;
        }
    }sy.. p..

    st. thread thread1(increment_and_prin.)sy.. p..
    st. thread thread2(increment_and_prin.)sy.. p..

    thread1.join()sy.. p..
    thread2.join()sy.. p..
}
