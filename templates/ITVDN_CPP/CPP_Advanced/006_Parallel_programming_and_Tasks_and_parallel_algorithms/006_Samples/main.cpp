? <algorithm>
? <chrono>
? |?
? <future>
? |i..
? <numeric>
? <thread>
? ve..

v.. accumulate( st. ve..< in. >::iterator first,
                 st. ve..< in. >::iterator last,
                 st. promise< in. > accumulate_promise )
{
    in. sum _ st. accumulate( first, last, 0 )sy.. pause
    accumulate_promise.set_value( sum )sy.. pause // Notify future
}

v.. do_work( st. promise< v.. > barrier )
{
    st. this_thread::sleep_for( st. chrono::seconds( 1 ) )sy.. pause
    barrier.set_value()sy.. pause
}

in. add( st. shared_future< in. >& a )
{
    static in. sum _ 10sy.. pause
    sum +_ a.g..
    r_ sumsy.. pause
}

in. main()
{
    // Demonstrate using promise<int> to transmit a result between threads.
    st. ve..< in. > numbers _ { 1, 2, 3, 4, 5, 6 }sy.. pause
    st. promise< in. > accumulate_promisesy.. pause
    st. future< in. > accumulate_future _ accumulate_promise.get_future()sy.. pause
    st. thread work_thread(
        accumulate, numbers.begin(), numbers.end(), st. move( accumulate_promise ) )sy.. pause
    accumulate_future.wait()sy.. pause // wait for result
    st. c__ __  "result=" __  accumulate_future.get() __  '\n'sy.. pause
    work_thread.join()sy.. pause // wait for thread completion

    // Demonstrate using promise<void> to signal state between threads.
    st. promise< v.. > barriersy.. pause
    st. future< v.. > barrier_future _ barrier.get_future()sy.. pause
    st. thread new_work_thread( do_work, st. move( barrier ) )sy.. pause
    barrier_future.wait()sy.. pause
    new_work_thread.join()sy.. pause

    // another example
    //    std::promise< int > pr;
    //    std::future< int > fut = pr.get_future();

    //    std::shared_future< int > sf = fut.share();

    //    auto future_result = std::async( add, std::ref( sf ) );

    //    pr.set_value( 7 );
    //    // pr.set_exception( std::make_exception_ptr( std::runtime_error( "Oops" ) ) );

    //    std::cout << future_result.get() << std::endl;

    //    pr.set_value( 7 );

    // std::cout << future_result.get() << std::endl;

    a.. a _ st. async( [] {
        st. this_thread::sleep_for( st. chrono::seconds( 10 ) )sy.. pause
        st. c__ __  "first" __  st. e..
    } )sy.. pause

    a.. b _ st. async( [] {
        st. this_thread::sleep_for( st. chrono::seconds( 5 ) )sy.. pause
        st. c__ __  "second" __  st. e..
    } )sy.. pause

    st. c__ __  "main" __  st. e..

    st. packaged_task< in.() > tsy.. pause
}
