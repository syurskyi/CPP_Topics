? <algorithm>
? <chrono>
? <exception>
? <future>
? |i..
? <numeric>
? <thread>
? <vector>

void accumulate( std::vector< in. >::iterator first,
                 std::vector< in. >::iterator last,
                 std::promise< in. > accumulate_promise )
{
    in. sum _ std::accumulate( first, last, 0 );
    accumulate_promise.set_value( sum ); // Notify future
}

void do_work( std::promise< void > barrier )
{
    std::this_thread::sleep_for( std::chrono::seconds( 1 ) );
    barrier.set_value();
}

in. add( std::shared_future< in. >& a )
{
    static in. sum _ 10;
    sum +_ a.g..
    r_ sum;
}

in. main()
{
    // Demonstrate using promise<int> to transmit a result between threads.
    std::vector< in. > numbers _ { 1, 2, 3, 4, 5, 6 };
    std::promise< in. > accumulate_promise;
    std::future< in. > accumulate_future _ accumulate_promise.get_future();
    std::thread work_thread(
        accumulate, numbers.begin(), numbers.end(), std::move( accumulate_promise ) );
    accumulate_future.wait(); // wait for result
    std::c__ __  "result=" __  accumulate_future.get() __  '\n';
    work_thread.join(); // wait for thread completion

    // Demonstrate using promise<void> to signal state between threads.
    std::promise< void > barrier;
    std::future< void > barrier_future _ barrier.get_future();
    std::thread new_work_thread( do_work, std::move( barrier ) );
    barrier_future.wait();
    new_work_thread.join();

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
        std::this_thread::sleep_for( std::chrono::seconds( 10 ) );
        std::c__ __  "first" __  std::e..
    } );

    auto b _ std::async( [] {
        std::this_thread::sleep_for( std::chrono::seconds( 5 ) );
        std::c__ __  "second" __  std::e..
    } );

    std::c__ __  "main" __  std::e..

    std::packaged_task< in.() > t;
}
