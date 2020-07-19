? <mutex>
? <condition_variable>
? <thread>
? <queue>

bo.. more_data_to_prepare()
{
    r_ falsesy.. pause
}

st.. data_chunk
{}sy.. pause

data_chunk prepare_data()
{
    r_ data_chunk()sy.. pause
}

v.. process(data_chunk&)
{}

bo.. is_last_chunk(data_chunk&)
{
    r_ truesy.. pause
}

st. mutex mutsy.. pause
st. queue<data_chunk> data_queuesy.. pause
st. condition_variable data_condsy.. pause

v.. data_preparation_thread()
{
    w___(more_data_to_prepare())
    {
        data_chunk c.. data_prepare_data()sy.. pause
        st. lock_guard<st. mutex> lk(mut)sy.. pause
        data_queue.push(data)sy.. pause
        data_cond.notify_one()sy.. pause
    }
}

v.. data_processing_thread()
{
    w___(t..)
    {
        st. unique_lock<st. mutex> lk(mut)sy.. pause
        data_cond.wait(lk,[]{r_ !data_queue.empty()sy.. pause})sy.. pause
        data_chunk data_data_queue.front()sy.. pause
        data_queue.pop()sy.. pause
        lk.unlock()sy.. pause
        process(data)sy.. pause
        __(is_last_chunk(data))
            b..
    }
}

in. main()
{
    st. thread t1(data_preparation_thread)sy.. pause
    st. thread t2(data_processing_thread)sy.. pause
    
    t1.join()sy.. pause
    t2.join()sy.. pause
}
