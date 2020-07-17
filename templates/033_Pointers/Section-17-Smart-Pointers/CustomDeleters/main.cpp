//// Section 17
//// Custom deleters
//? ios..
//? <memory>
//
//c_ Test
//pr..
//    in. data
//pu..
//    T..  d.. 0  st. c.. __ "\tTest constructor (" __ d.. __ ")" __ st. e..
//    T.. in. d..)  d.. d..  st. c.. __ "\tTest constructor (" __ d.. __ ")" __ st. e..
//    in. g_d.. co.. r_ d..
//    #Teststd c.. __ "\tTest destructor (" __ d.. __ ")" __ st. e..
//
//
//v.. my_deleter T.. #ptr
//    st. c.. __ "\tUsing my custom function deleter" __ st. e..
//    de.. p..
//
//
//in. main
//
//
//        // Using a function
//        st. shared_ptr|T..> ptr1 n.. T.. 100 m_d..
//
//
//    st. c.. __ "====================" __ st. e..
//
//        // Using a Lambda expression
//        st. shared_ptr|T.. ptr2 n.. T.. 1000
//            || |T.. #p..
//                st. c.. __ "\tUsing my custom lamdba deleter" __ st. e..
//                de.. p..
//
//
//
//    r_ _
