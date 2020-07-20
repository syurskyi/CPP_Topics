? <mutex>
? <condition_variable>
? <thread>
? <queue>

bo.. more_data_to_prepare()
{
    r_ falsesy.. p..
}

st.. data_chunk
{}

data_chunk prepare_data()
{
    r_ data_chunk()
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
        data_chunk c.. data_prepare_data()
        st. lock_guard<st. mutex> lk(mut)
        data_queue.push(data)
        data_cond.notify_one()
    }
}

v.. data_processing_thread()
{
    w___(t..)
    {
        st. unique_lock<st. mutex> lk(mut)
        data_cond.wait(lk,[]{r_ !data_queue.empty()})
        data_chunk data_data_queue.front()
        data_queue.pop()
        lk.unlock()
        process(data)
        __(is_last_chunk(data))
            b..
    }
}

in. main()
{
    st. thread t1(data_preparation_thread)
    st. thread t2(data_processing_thread)
    
    t1.join()
    t2.join()
}
