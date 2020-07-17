// Section 11
// How function calls work
// The call stack
? <iostream>

u.. s..

void func2(in. &x, in. y, in. z) {
    x+= y + z;
}

in. func1(in. a, in. b) {
    in. result {};
    result = a + b;
    func2(result, a , b);
    r_ result;
}

in. main
    in. x {10};
    in. y{20};
    in. z{};
    z = func1(x,y);
    c.. __ z __ e..
    r_ 0;
}

/* What typically happens when main calls func1 (or any function calls another) ?
    There are other ways to acheive the same results :)
    
    main:
        push space for the return value
        push space for the parameters
        push the return address
        transfer control to func1 (jmp)
    func1:
        push the address of the previous activation record
        push any register values that will need to be restored before returning to the caller
        perform the code in func1
        restore the register values
        restore the previous activation record (move the stack pointer)
        store any function result
        transfer control to the return address (jmp)
    main:
        pop the parameters
        pop the return value
*/




