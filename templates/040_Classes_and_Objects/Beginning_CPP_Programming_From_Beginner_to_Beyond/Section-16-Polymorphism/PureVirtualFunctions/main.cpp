//// Section 16
//// Pure virtual functions and abstract base classes
//? ios..
//? ve..
//
//c_ Shape  			// Abstract Base class
//pr..
//       // attributes common to all shapes
//pu..
//      v.. v.. draw() _ 0	 // pure virtual function
//      v.. v.. rotate() _ 0   // pure virtual function
//      v.. #?
//
//
//c_ Open_Shape pu.. S..      // Abstract class
//pu..
//    v.. #?
//
//
//c_ Closed_Shape  pu.. S..    // Abstract class
//pu..
//    v.. #?
//
//
//c_ Line pu.. O..       // Concrete class
//pu..
//    v.. v.. draw ov..
//        st. c.. __ "Drawing a line" __ st. e..
//
//    v.. v.. rotate ov..
//        st. c.. __ "Rotating a line" __ st. e..
//
//    v.. #?
//
//
//c_ Circle pu.. C..       // Concrete class
//pu..
//    v.. v.. draw ov..
//        st. c.. __ "Drawing a circle" __ st. e..
//
//    v.. v.. rotate ov..
//        st. c.. __ "Rotating a circle" __ st. e..
//
//    v.. #?
//
//c_ Square pu.. C..       // Concrete class
//pu..
//    v.. v.. draw ov..
//        st. c.. __ "Drawing a square" __ st. e..
//
//    v.. v.. rotate ov..
//        st. c.. __ "Rotating a square" __ st. e..
//
//    v.. #?
//
//
//v.. screen_refresh co.. st. ve..|Shape #| #shapes
//    st. c.. __ "Refreshing" __ st. e..
//    ___ co.. a.. p: sh..
//        p__dr..
//
//
//in. main
////    Shape s;
////    Shape *p = new Shape();
//
////        Circle c;
////        c.draw();
//
////    Shape *ptr = new Circle();
////    ptr->draw();
////    ptr->rotate();
//
//    S.. #s1 _ ne. C..
//    S.. #s2 _ ne. L..
//    S.. #s3 _ ne. S..
//
//    st. ve..|Shape #| shapes  ? ? ?
//
////    for (const auto p: shapes)
////        p->draw();
//
//    s_r.. sh..
//
//    de... ?
//    de... ?
//    de... ?
//
//    r_ _
//
//
