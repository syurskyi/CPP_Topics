//?p.. once
//
//? |i..
//
//s.. xray
//    st. st.. x
//
//    xray co.. ch.. #?_) : ?|?_
//
//        st. c.. __ "ctor " __ x __ st. e..
//
//
//    xray co.. x.. #rhs)  x(rh_.x
//
//        st. c.. __ "copy ctor from " __ rh_.x __ " to " __ ? __ st. e..
//
//
//?if.. MOVE
//
//    xray ? ##rhs n_e_
//
//        st. c.. __ "move ctor from " __ rh_.? __ " to " __ ? __ st. e..
//        ?.sw.. rh_.?
//
//
//e..
//
//    #?
//
//        st. c.. __ "dtor " __ ? __ st. e..
//
//    x.. #op.._ co.. x... #rh_
//
//        st. c.. __ "copy assign from " __ rh_.? __ " to " __ ? __ st. e..
//        ?  #t..
//
//
//?if.. M..
//
//    x.. #op.._ x.. ##rh_ n_e_
//
//
//        st. c.. __ "move assign from " __ rh_.? __ " to " __ ? __ st. e..
//        ?  #t..
//
//
//e..
