//? ios..
//? cs..
//? "Mystring.h"
//
// // No-args constructor
//? ?
//    | str n_p_
//    ? _ ne. ch.. 1
//    #? _ '\0'
//
//
//// Overloaded constructor
//? ? co.. ch.. #s
//    | str n_p_
//        __ (s__ n_p..
//            ? _ ne. ch.. 1
//            #? _ '\0'
//         ____
//            str _ ne. ch..|s_l_(s)+1
//            s_c_ ? s
//
//
//
//// Copy constructor
//? ? co.. ? #source
//    | str n_p_
//        str _ ne. ch..|s_l_(s__.st. + 1
//        s_c_ ? s__.st.
//        st. c.. __ "Copy constructor used" __ st. e..
//
//
//
//// Move constructor
//? ?( ? ##source
//    |str s__.st.
//        s__.str _ n_p_
//        st. c.. __ "Move constructor used" __ st. e..
//
//
// // Destructor
//? #?
//    de... || str
//
//
// // Copy assignment
//? #? operator_(co.. ? #rhs
//    st. c.. __ "Using copy assignment" __ st. e..
//
//    __ (t.. __ #r..
//        r_ #t..
//    de... || st.
//    str _ ne. ch..|s_l_(rh_.st. + 1
//    s_c_ st. rh_.st.
//    r_ #t..
//
//
//// Move assignment
//? #? operator_( ? ##rhs
//    st. c.. __ "Using move assignment" __ st. e..
//    __ (t.. __ #rh.
//        r_ #t..
//    de... || st.
//    str _ rh_.st.
//    rh_.st. _ n_p_
//    r_ #t..
//
//
//
//// Display method
//v.. ? display co..
//    st. c.. __ str __ " : " __ g_l.. __ st. e..
//
//
// // getters
// in. ? get_length co..  r_ s_l_(st.
// co.. ch.. #? get_str co..  r_ st.
//
//// overloaded insertion operator
//st. ostream #operator__ st. ostream #os, co.. ? #rhs
//    os __ rh_.st.
//    r_ ?
//
//
//// overloaded extraction operator
//st. istream #operator__(st. istream &in, ? #rhs)
//    ch.. #buff _ ne. ch.. 1000
//    in __ buff
//    rhs _ ? ?
//    de... || ?
//    r_ in
//
//
