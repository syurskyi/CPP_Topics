//? <cstring>
//? ios..
//? "M..
//
//// No-args constructor
//? ?
//    | str n_p_
//    ? _ ne. ch.. 1
//    #? _ '\0';
//
//
//// Overloaded constructor
//? ? co.. ch.. #s
//    | str  n_p_
//        __ (s__ n_p..
//            ? _ ne. ch.. 1
//            #? _ '\0';
//          ____
//            str _ ne. ch..|st. s_l_(s)+1
//            st. s_c_ st. s
//
//
//
//// Copy constructor
//? ? co.. ? #source
//    | str n_p_
//        str _ ne. ch..|st. s_l..(s__.s.. + 1
//        st. s_c_ st. s__.st.
//
//
//// Destructor
//? #?
//    de... || st.
//
//
//// Copy assignment
//? #? operator_(co.. ? #rhs
//    st. c.. __ "Copy assignment" __ st. e..
//    __ (th.. __ #rhs
//        r_ #th..
//    de... || th..__st.
//    str _ ne. ch..|st. s_l_ r__.st. + 1
//    st. s_c.. th..__st. r__.st.
//    r_ #th..
//
//
//
//// Display method
//v.. ? di.. co..
//    st. c.. __ st. __ " : " __ g_l.. __ st. e..
//
//
//// getters
// in. ? g_l.. co..   r_ s_l.. st.
// co.. ch.. #? g_s.. co..   r_ st.
//
//
//
//
