// Section 20
// Stack
? ios..
? <stack>
? ve..
? <list>

// This function displays a stack of 
// by repeatedly topping and popping the stack
// Note theat the stack is passed in by value so we
// don't affect the passed in stack.

template <typename T>
v.. display(std::stack<T> s) {
    std::c.. __ "[ ";
    w__ (!s.empty()) {
        T elem = s.top();
        s.pop();
        std::c.. __ elem __ " ";
    }
    std::c.. __ "]" __ std::e..
}

in. main
    std::stack<in.> s;
    std::stack<in., std::vector<in.__ s1;
    std::stack<in., std::list<in.__ s2;
    std::stack<in., std::deque<in.__ s3;
    
    ___ (in. i: {1,2,3,4,5})
        s.push(i);
    display(s);

    s.push(100);
    display(s);
    
    s.pop();
    s.pop();
    display(s);
    
    w__ (!s.empty())
        s.pop();
    display(s);
    
    std::c.. __ "Size: " __ s.s.. __ std::e..
    
    s.push(10);
    display(s);
    
    s.top() = 100;
    display(s);
    r_ 0;
}

