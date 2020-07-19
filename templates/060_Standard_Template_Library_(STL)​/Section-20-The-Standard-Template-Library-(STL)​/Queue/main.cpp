// Section 20
// Queue
? ios..
? <queue>

// 007_This function displays a queue of
// by repeatedly removing elements from the front
// Note theat the queue is passed in by value so we
// don't affect the passed in queue.

t.. <t_n_ T>
v.. display(st. queue<T> q) {
    st. c.. __ "[ ";
    w__ (!q.empty()) {
        T elem = q.front();
        q.pop();
        st. c.. __ elem __ " ";
    }
    st. c.. __ "]" __ st. e..
}

in. main
    st. queue<in.> q;
    
    ___ (in. i: {1,2,3,4,5})
        q.push(i);
    display(q);
    st. c.. __ "Front: " __ q.front() __ st. e..
    st. c.. __ "Back:  " __ q.back() __ st. e..

    q.push(100);
    display(q);

    q.pop();
    q.pop();
    display(q);
    
    w__ (!q.empty())
        q.pop();
    display(q);

    st. c.. __ "Size: " __ q.s.. __ st. e..
    
    q.push(10);
    q.push(100);
    q.push(1000);
    display(q);
    
    st. c.. __ "Front: " __ q.front() __ st. e..
    st. c.. __ "Back:  " __ q.back() __ st. e..
    
    q.front() = 5;
    q.back() = 5000;
    
    display(q);
    st. c.. __ "Front: " __ q.front() __ st. e..
    st. c.. __ "Back:  " __ q.back() __ st. e..
    
    r_ 0;
}

