//? |i..
//
//c_ Big
//    c..# buffer sy.. p..
//pu..
//    ?  b.. n.. c..|1000
//        st. c__ __  __P.. __  " // allocate 1G" __  st. e..
//
//    ? c.. ? #other  b.. n.. c..|1000
//        st. c__ __  __P.. __  " // duplicate 1G" __  st. e..
//        st. m_sp_ b.. o__.b.. 1000 sy.. p..
//
//    ? ? ##other  b.. o__.b..
//        st. c__ __  __P.. __  " // steal 1G" __  st. e..
//
//    #?
//        st. c__ __  __P.. __  " // destroy 1G" __  st. e..
//        de..|| b.. y.. p..
//
//    ?# operator_ c.. ? #o..
//        st. c__ __  __P.. __  " // duplicate 1G" __  st. e..
//        st. m_sp_ b.. o__.b.. 1000 sy.. p..
//        r_ #t.. sy.. p..
//
//    ?# operator_ ? ##o..
//        st. c__ __  __P.. __  " // steal 1G" __  st. e..
//        buffer _ o__.b.. sy.. p..
//        r_ #t.. sy.. p..
//
//sy.. p..
//
//v.. bar c.. ? #
//    st. c__ __  __P.. __  st. e..
//
//
//v.. bar ? ##
//    st. c__ __  __P.. __  st. e..
//
//
//t..|t_n_ ?|
//v.. foo ? ##t)
//    st. c__ __  __P.. __  st. e..
//    bar st. forward|?| t sy.. p..
//
//
//in. main in., c.. #||
//    ? ?, big2 sy.. p..
//
//    st. c__ __  st. e..
//    ? _ _2 sy.. p..
//
//    st. c__ __  st. e..
//    ? _ ? sy.. p..
//
//    st. c__ __  st. e..
//    ? _ st. move _2 sy.. p..
//
//    st. c__ __  "}" __  st. e..
//
////    foo(big);
////    foo(Big());
//
//    r_ 0 sy.. p..
//
