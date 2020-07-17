//// Section 17
//// Shared Pointers
//? ios..
//? me..
//? ve..
//? "C..
//? "S..
//? "T..
//
//
//c_ Test
//pr..
//    in. data
//pu..
//    ?  d.. 0 st. c.. __ "Test constructor (" __ d.. __ ")" __ st. e..
//    ? in. d..)  d.. d..  st. c.. __ "Test constructor (" __ d.. __ ")" __ st. e..
//    in. g_d.. co.. r_ d..
//    #? st. c.. __ "Test destructor (" __ d.. __ ")" __ st. e..
//
//
//
//v.. func st. shared_ptr|?| p
//    st. c.. __ "Use count: " __ ?.use_count __ st. e..
//
//
//in. main
//
//    // use_count – the number of shared_ptr objects
//    // managing the heap object
//
////    std::shared_ptr<int> p1 {new int {100} };
////    std::cout << "Use count: "<< p1.use_count () << std::endl; 		// 1
////
////    std::shared_ptr<int> p2 { p1 };			// shared ownwership
////    std::cout << "Use count: "<< p1.use_count () << std::endl; 		// 2
////
////    p1.reset();	// decrement the use_count; p1 is nulled out
////    std::cout << "Use count: "<< p1.use_count() << std::endl; 		// 0
////    std::cout << "Use count: "<< p2.use_count() << std::endl; 		// 1
//
////    std::cout << "\n==========================================" << std::endl;
////    std::shared_ptr<Test> ptr = std::make_shared<Test>(100);
////    func(ptr);
////    std::cout << "Use count: " << ptr.use_count() << std::endl;
////    {
////        std::shared_ptr<Test> ptr1 = ptr;
////        std::cout << "Use count: " << ptr.use_count() << std::endl;
////        {
////            std::shared_ptr<Test> ptr2 = ptr;
////            std::cout << "Use count: " << ptr.use_count() << std::endl;
////            ptr.reset();
////        }
////        std::cout << "Use count: " << ptr.use_count() << std::endl;
////
////    }
////    std::cout << "Use count: " << ptr.use_count() <<std:: endl;
//
//    st. c.. __ "\n==========================================" __ st. e..
//    st. s_p_|?| acc1 = st. m_s..|T.. "Larry", 10000, 3.1
//    st. s_p_|?| acc2 = st. m_s..|C.. "Moe", 5000
//    st. s_p_|?| acc3 = st. m_s..|S.. "Curly", 6000
//
//    st. ve..<st. s_p..<A..__ a..
//    a__.p_b _1
//    a__.p_b _2
//    a__.p_b _3
//
//    ___ (co.. a.. #acc accounts
//        st. c.. __ #ac. __ st. e..
//        st. c.. __ "Use count: " __ a__.u_c.. __ st. e..
//
//
//    st. c.. __ "==========================================" __ st. e..
//    r_ _
//
//
