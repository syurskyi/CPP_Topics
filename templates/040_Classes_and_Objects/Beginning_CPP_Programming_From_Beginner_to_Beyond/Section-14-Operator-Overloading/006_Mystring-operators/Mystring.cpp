//? ios..
//? cs..
//? cct..
//? "Mystring.h"
//
//// No-args constructor
//? ?
//    | str n_p_
//    ? _  ne. ch.. 1
//    *? _  '\0'
//
//
//// Overloaded constructor
//? ?(co.. ch.. #s
//    | str  n_p_
//        __ (s__ n_p..
//            ? _  ne. ch.. 1
//            *? _  '\0'
//         ____
//            ? _  ne. ch..|st. s_l_(s)+1
//            st. s_c_ ?, s
//
//
//
//// Copy constructor
//? ?(co.. ? #source
//    | str n_p_
//        ? _  ne. ch..|st. s_l_|s__.st. + 1
//        st. s_c_|?, s__.st.
//        st. c.. __ "Copy constructor used" __ st. e..
//
//
//// Move constructor
//? ?( ? ##s__
//    |str(s__.st.
//        s__.st. _  n_p_
//        st. c.. __ "Move constructor used" __ st. e..
//
//
//// Destructor
//? #?
//    de... || st.
//
//
//// Copy assignment operator
//? #? operator_  co.. ? #rhs
//    st. c.. __ "Using copy assignment" __ st. e..
//
//    __ (t.. __ #rhs
//        r_ #t..
//    de... || str
//    ? _  ne. ch..|st. s_l_|rh_.st. + 1
//    st. s_c_ ? rh_.st.
//    r_ #t..
//
//
//// Move assignment operator
//? #? operator_ ( ? ##rhs
//    st. c.. __ "Using move assignment" __ st. e..
//    __ (t.. __ #rhs
//        r_ #t..
//    de... || st_
//    str _  rh_.st.
//    rh_.st. _  n_p_
//    r_ #t..
//
//
//// Equality
//b.. ? operator__(co.. ? #rhs) co..
//    r_ (st. s_c_ st. rh_.st.) __ 0
//
//
//// Make lowercase
//? ? operator- co..
//    ch.. #buff_  ne. ch..|st. s_l_(str) + 1
//    st. s_c_ ? st.
//    ___ (size_t i_ 0 ?<st. s_l_ b.. ###
//        b.. ? _  st. tolower b.. ?
//    ? temp  b..
//    de... || b..
//    r_ t..
//
//
//// Concatentate
//? ? operator+(co.. ? #rhs) co..
//    ch.. #b.. _  ne. ch..|st. s_l_(str) + st. s_l_(rh_.st.) + 1
//    st. s_c_ b.. st.
//    st. s_c_ b.. rh_.st.
//    ? temp  b..
//    de... || b..
//    r_ t..
//
//
//// Display method
//v.. ? display() co..
//    st. c.. __ str __ " : " __ g_l.. __ st. e..
//
//
//// length getter
// in. ? get_length() co..   r_ st. s_l_ st.
//
// // string getter
// co.. ch.. #? g_s.. co..   r_ st.

