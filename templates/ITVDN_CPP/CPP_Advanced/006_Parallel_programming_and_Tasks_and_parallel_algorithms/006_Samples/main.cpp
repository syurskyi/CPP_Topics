? <algorithm>
? <chrono>
? <exception>
? <future>
? |i..
? <numeric>
? <thread>
? <vector>

v.. accumulate( std::vector< in. >::iterator first,
                 std::vector< in. >::iterator last,
                 std::promise< in. > accumulate_promise )
{
    in. sum _ std::accumulate( first, last, 0 )sy.. pause
    accumulate_promise.set_value( sum )sy.. pause // Notify future
}

v.. do_work( std::promise< v.. > barrier )
{
    std::this_thread::sleep_for( std::chrono::seconds( 1 ) )sy.. pause
    barrier.set_value()sy.. pause
}

in. add( std::shared_future< in. >& a )
{
    static in. sum _ 10sy.. pause
    sum +_ a.g..
    r_ sumsy.. pause
}

in. main()
{
    // Demonstrate using promise<int> to transmit a result between threads.
    std::vector< in. > numbers _ { 1, 2, 3, 4, 5, 6 }sy.. pause
    std::promise< in. > accumulate_promisesy.. pause
    std::future< in. > accumulate_future _ accumulate_promise.get_future()sy.. pause
    std::thread work_thread(
        accumulate, numbers.begin(), numbers.end(), std::move( accumulate_promise ) )sy.. pause
    accumulate_future.wait()sy.. pause // wait for result
    std::c__ __  "result=" __  accumulate_future.get() __  '\n'sy.. pause
    work_thread.join()sy.. pause // wait for thread completion

    // Demonstrate using promise<void> to signal state between threads.
    std::promise< v.. > barriersy.. pause
    std::future< v.. > barrier_future _ barrier.get_future()sy.. pause
    std::thread new_work_thread( do_work, std::move( barrier ) )sy.. pause
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

    auto a _ std::async( [] {
        std::this_thread::sleep_for( std::chrono::seconds( 10 ) )sy.. pause
        std::c__ __  "first" __  std::e..
    } )sy.. pause

    auto b _ std::async( [] {
        std::this_thread::sleep_for( std::chrono::seconds( 5 ) )sy.. pause
        std::c__ __  "second" __  std::e..
    } )sy.. pause

    std::c__ __  "main" __  std::e..

    std::packaged_task< in.() > tsy.. pause
}
