// Section 20
// Queue
? ios..
? <queue>

// This function displays a queue of 
// by repeatedly removing elements from the front
// Note theat the queue is passed in by value so we
// don't affect the passed in queue.

template <typename T>
void display(std::queue<T> q) {
    std::c.. __ "[ ";
    while (!q.empty()) {
        T elem = q.front();
        q.pop();
        std::c.. __ elem __ " ";
    }
    std::c.. __ "]" __ std::e..
}

in. main
    std::queue<in.> q;
    
    for (in. i: {1,2,3,4,5})
        q.push(i);
    display(q);
    std::c.. __ "Front: " __ q.front() __ std::e..
    std::c.. __ "Back:  " __ q.back() __ std::e..

    q.push(100);
    display(q);

    q.pop();
    q.pop();
    display(q);
    
    while (!q.empty())
        q.pop();
    display(q);

    std::c.. __ "Size: " __ q.s.. __ std::e..
    
    q.push(10);
    q.push(100);
    q.push(1000);
    display(q);
    
    std::c.. __ "Front: " __ q.front() __ std::e..
    std::c.. __ "Back:  " __ q.back() __ std::e..
    
    q.front() = 5;
    q.back() = 5000;
    
    display(q);
    std::c.. __ "Front: " __ q.front() __ std::e..
    std::c.. __ "Back:  " __ q.back() __ std::e..
    
    r_ 0;
}

