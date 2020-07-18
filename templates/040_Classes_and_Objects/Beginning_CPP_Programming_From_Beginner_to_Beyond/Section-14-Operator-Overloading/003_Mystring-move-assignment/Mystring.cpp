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
//        __ (s__n_p..
//            ? _ ne. ch.. 1
//            #str _ '\0'
//         ____
//            str _ ne. ch.. s_l_(s)+1
//            s_c_ st. s
//
//
//
//// Copy constructor
//? ? co.. ? #source
//    | st. n_p_
//        str _ ne. ch..|s_l_(so__.st.)+ 1
//        s_c_ st. s__.st.
//        st. c.. __ "Copy constructor used" __ st. e..
//
//
//
//// Move constructor
//? ? ? ##source
//    |st. s__.st.
//        s__.st. _ n_p_
//        st. c.. __ "Move constructor used" __ st. e..
//
//
// // Destructor
//? #?
//    __ str __ n_p_
//        st. c.. __ "Calling destructor for Mystring : nullptr" __ st. e..
//     ____
//         st. c.. __ "Calling destructor for Mystring : " __ str __ st. e..
//
//    de... || st.
//
//
// // Copy assignment
//? #? operator_ co.. ? &rhs
//    st. c.. __ "Using copy assignment" __ st. e..
//
//    __ t__ __ #rhs
//        r_ #t__
//    de... || str
//    str _ ne. ch..|s_l_|r__.s.. + 1
//    s_c_ st. r__.s..
//    r_ #t__
//
//
//// Move assignment
//? #? operator_ ? ##rhs
//    st. c.. __ "Using move assignment" __ st. e..
//    __ (t__ __ #r..
//        r_ #t__
//    de... || st.
//    str _ r__.st.
//    r__.s.. _ n_p_;
//    r_ #t__
//
//
//// Display method
//v.. ? di.. co..
//    st. c.. __ str __ " : " __ g_l.. __ st. e..
//
//
// // getters
// in. ? g_l.. co..  r_ s_l_ st.
// co.. ch.. #? g_s.. co..  r_ st.

