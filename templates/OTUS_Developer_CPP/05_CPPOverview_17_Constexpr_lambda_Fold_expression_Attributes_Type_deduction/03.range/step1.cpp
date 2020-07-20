//? |i..
//? |s..
//
//t..|t_n_ Input, t_n_ UnaryPredicate| // 2. UnaryPredicate
//c_ filter_helper  // 3. wrapper => filter
//    c.. I.. #i..
//    c.. U.. #p  // 4. p
//
//    c_ iterator
//        c.. filter_helper #owner  // 5.
//        t_n_ I.. const_iterator current
//    pu..
//        ex__ it.. c.. f_h.. #o.._)  ? ?_| cu.. st. cbegin ?_.i.. ||
//
//        a.. op..!_|t_n_ I.. c_i.. rh_| c.. | r_ cu.. !_ rh_  |
//
//        a.. op..## r_ ##cu..  |
//
//        a.. op..#|| c.. | r_ o__.p|#cu..| |
//
//
//
//pu..
//    ex__ f_h..|c.. I.. #i.._, c.. U.. #p_|  i.. i.._| p|?_ ||
//
//    a.. begin c.. | r_ it..|#t..|
//
//    a.. end c.. | r_ st. cend|i..
//
//
//in. main
//    c.. st. s.. s "hello"
//
//    ___ (a.. i| f_h..|s, |||a.. c || r_ c __ 'l'   // 1. predicate
//        st. c__ __  i __  st. e..
//
//
