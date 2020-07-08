// Section 12
// Simple pointers

? |i..
? <vector>
? <st..>

u.. s..

in. main() {
    
    in. num{10}
    c.. __ "Value of num is: " __ num __ e..
    c.. __ "sizeof of num is: " __ s_o_ num __ e..
    c.. __ "Address of num is: " __ &num __ e..

    in. *p
    c.. __ "\nValue of p is: " __ p __ e..   // garbage
    c.. __ "Address of p is: " __ &p __ e..
    c.. __ "sizeof of p is: " __ s_o_ p__ e..

    p _ nullptr
    c.. __ "\nValue of p is: " __ p __ e..


    in. *p1 {nullptr}
    d.. *p2 {nullptr}
    unsigned l.. l.. *p3 {nullptr}
    vector<st..>  *p4{nullptr}
    st.. *p5 {nullptr}

    c.. __ "\nsizeof p1 is: " __ s_o_ p1 __ e..
    c.. __ "sizeof p2 is: " __ s_o_ p2 __ e..
    c.. __ "sizeof p3 is: " __ s_o_ p3 __ e..
    c.. __ "sizeof p4 is: " __ s_o_ p4 __ e..
    c.. __ "sizeof p5 is: " __ s_o_ p5 __ e..

    in. score{10}
    d.. high_temp{100.7}

    in. *score_ptr {nullptr}

    score_ptr _ &score
    c.. __ "Value of score is: " __ score __ e..
    c.. __ "Address of score is: " __ &score __ e..
    c.. __ "Value of score_ptr is: " __ score_ptr __ e..

   // score_ptr = &high_temp;     // Compiler error

    c..  __ e..
    r_ _
}

