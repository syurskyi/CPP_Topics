? <mutex>
? <condition_variable>
? <thread>
? <queue>

bo.. more_data_to_prepare()
{
    r_ falsesy.. p..
}

st.. data_chunk
{}sy.. p..

data_chunk prepare_data()
{
    r_ data_chunk()sy.. p..
}

v.. process(data_chunk&)
{}

bo.. is_last_chunk(data_chunk&)
{
    r_ truesy.. p..
}

st. mutex mutsy.. p..
st. queue<data_chunk> data_queuesy.. p..
st. condition_variable data_condsy.. p..

v.. data_preparation_thread()
{
    w___(more_data_to_prepare())
    {
        data_chunk c.. data_prepare_data()sy.. p..
        st. lock_guard<st. mutex> lk(mut)sy.. p..
        data_queue.push(data)sy.. p..
        data_cond.notify_one()sy.. p..
    }
}

v.. data_processing_thread()
{
    w___(t..)
    {
        st. unique_lock<st. mutex> lk(mut)sy.. p..
        data_cond.wait(lk,[]{r_ !data_queue.empty()sy.. p..})sy.. p..
        data_chunk data_data_queue.front()sy.. p..
        data_queue.pop()sy.. p..
        lk.unlock()sy.. p..
        process(data)sy.. p..
        __(is_last_chunk(data))
            b..
    }
}

in. main()
{
    st. thread t1(data_preparation_thread)sy.. p..
    st. thread t2(data_processing_thread)sy.. p..
    
    t1.join()sy.. p..
    t2.join()sy.. p..
}
