//? ios..
//? cs..
//? cct..
//? "Mystring.h"
//
//// No-args constructor
//? ?
//    | str n_p_
//    ? _ ne. ch.. 1
//    #? _ '\0'
//
//
//// Overloaded constructor
//? ?(co.. ch.. #s
//    | str n_p_
//        __ (s__n_p..
//            ? _ ne. ch.. 1
//            *? _ '\0'
//         ____
//            ? _ ne. ch..|st. s_l_(s)+1
//            st. s_c_ ?, s
//
//
//
//// Copy constructor
//? ?(co.. ? #source
//    | strn_p_
//        str _ ne. ch..|st. s_l_|s__.?)+ 1
//        st. s_c_ ?, s__.st.
//        st. c.. __ "Copy constructor used" __ st. e..
//
//
//
//// Move constructor
//? ?( ? ##source
//    |st. s__.st.
//        s__.st. _ n_p_
//        st. c.. __ "Move constructor used" __ st. e..
//
//
//// Destructor
//? #?
//    de... || st.
//
//
//// Copy assignment operator
//? #? operator_ co.. ? #rhs
//    st. c.. __ "Using copy assignment" __ st. e..
//
//    __ (th.. __ #rhs
//        r_ #th..
//    de... || st.
//    str _ ne. ch..|st. s_l_ r__.st. + 1
//    st. s_c_ st. r__.st.
//    r_ #th..
//
//
//// Move assignment operator
//? #? operator_  ? ##rhs
//    st. c.. __ "Using move assignment" __ st. e..
//    __ (th.. __ #rhs
//        r_ *th..
//    de... || st.
//    str _ r__.st.
//    r__.s. _ n_p_
//    r_ #th..
//
//
//// Display method
//v.. ? di.. co..
//    st. c.. __ str __ " : " __ g_l.. __ st. e..
//
//
//// length getter
// in. ? g_l.. co..  r_ st. s_l_ st.
//
// // string getter
// co.. ch.. #? g_s.. co..  r_ st.
//
//
//// Equality
//b.. operator__ co.. ? #lhs, co.. ? #rhs
//    r_ (st. s_c.. lh_.st. rh_.st. __ 0
//
//
//// Make lowercase
//? operator-(co.. ? #obj
//    ch.. #buff _ ne. ch..|st. s_l_|o__.st. + 1
//    st. s_c_ b.. o__.st.
//    ___ size_t i_0 ?<st. s_l_ ? ###
//        b.. ? _ st. tolower b.. ?
//    ? temp b..
//    de... || b..
//    r_ t..
//
//
//// Concatenation
//? operator+ co.. ? &lhs, co.. ? #rhs
//    ch.. #buff _ ne. ch..|st. s_l_|lh_.st. + st. s_l_|rh_.st.) + 1
//    st. s_cp_ b.. lh_.st.
//    st. s_ca_ b.. rh_.st.
//    ? temp b..
//    de... || b..
//    r_ t..
//
//
//
//
//
//
//
