? <mutex>
? <condition_variable>
? <thread>
? <queue>

bo.. more_data_to_prepare()
{
    r_ false;
}

struct data_chunk
{};

data_chunk prepare_data()
{
    r_ data_chunk();
}

void process(data_chunk&)
{}

bo.. is_last_chunk(data_chunk&)
{
    r_ true;
}

std::mutex mut;
std::queue<data_chunk> data_queue;
std::condition_variable data_cond;

void data_preparation_thread()
{
    w___(more_data_to_prepare())
    {
        data_chunk const data_prepare_data();
        std::lock_guard<std::mutex> lk(mut);
        data_queue.push(data);
        data_cond.notify_one();
    }
}

void data_processing_thread()
{
    w___(true)
    {
        std::unique_lock<std::mutex> lk(mut);
        data_cond.wait(lk,[]{r_ !data_queue.empty();});
        data_chunk data_data_queue.front();
        data_queue.pop();
        lk.unlock();
        process(data);
        __(is_last_chunk(data))
            b..
    }
}

in. main()
{
    std::thread t1(data_preparation_thread);
    std::thread t2(data_processing_thread);
    
    t1.join();
    t2.join();
}
