// Section 20
// Stack
? ios..
? <stack>
? ve..
? <list>

// 007_This function displays a stack of
// by repeatedly topping and popping the stack
// Note theat the stack is passed in by value so we
// don't affect the passed in stack.

t.. <t_n_ T>
v.. display(st. stack<T> s) {
    st. c.. __ "[ ";
    w__ (!s.empty()) {
        T elem = s.top();
        s.pop();
        st. c.. __ elem __ " ";
    }
    st. c.. __ "]" __ st. e..
}

in. main
    st. stack<in.> s;
    st. stack<in., st. ve..<in.__ s1;
    st. stack<in., st. list<in.__ s2;
    st. stack<in., st. deque<in.__ s3;
    
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
    
    st. c.. __ "Size: " __ s.s.. __ st. e..
    
    s.push(10);
    display(s);
    
    s.top() = 100;
    display(s);
    r_ 0;
}

