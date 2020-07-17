//// Section 17
//// Weak Pointers
//? ios..
//? me..
//
//u.. s..
//
//c_ B    // forward declaration
//
//c_ A
//    st. shared_ptr|B| b_ptr
//pu..
//    v.. set_B(st. shared_ptr|B| #b
//        b_ptr _ b
//
//    A c.. __ "A Constructor" __ e..
//#? c.. __ "A Destructor" __ e..
//
//
//c_ B
//    st. weak_ptr|A| a_ptr    // make weak to break the strong circular reference
//pu..
//    v.. set_A st. shared_ptr|A| #a
//        a_ptr _ a
//
//    B c.. __ "B Constructor" __ e..
//    #? c.. __ "B Destructor" __ e..
//
//
//in. main
//    s_p..|A| a  _ m..|A
//    s_p..|B| b _ m..|B
//    a->se._B b
//    b->se._A a
//
//    r_ _
//
//
