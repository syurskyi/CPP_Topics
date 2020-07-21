//// Section 11
//// Scope example
//? ios..
//
//u.. s..
//
//v.. local_example
//v.. global_example
//v.. static_local_example
//
//in. num 300    // Global variable - declared outside any class or function
//
//v.. g..
//    c.. __ "\nGlobal num is: " __ ? __ " in global_example - start" __ e..
//    ? *_ 2
//    c.. __ "Global num is: " __ ? __ " in global_example - end" __ e..
//
//
//v.. local_example in. x
//    in. num 1000     // local to local_example
//    c.. __ "\nLocal num is: " __ ? __ " in local_example - start" __ e..
//    ?_x
//    c.. __ "Local num is: " __ ? __ " in local_example - end" __ e..
//    // num1 in main is not within scope - so it can't be used here.
//
//
//v.. static_local_example
//    static in. num 5000      // local to static_local_example static - retains it value between calls
//    c.. __ "\nLocal static  num is: " __ ? __ " in static_local_example - start" __ e..
//    ? +_ 1000
//    c.. __ "Local static  num is: " __ ? __ " in static_local_example - end" __ e..
//
//
//in. main
//
//    in. num 100  // Local to main
//    in. num1 500 // Local to main
//
//    c.. __ "Local num is : " __ ? __ " in main" __ e..
//
//       // creates a new level of scope
//        in. ? 200  // local to this inner block
//        c.. __ "Local num is: " __ ? __ " in inner block in main" __ e..
//        c.. __ "Inner block in main can see out - num1 is: " __ _1 __ e..
//
//
//    c.. __ "Local num is : " __ ? __ " in main" __ e..
//
//    l.. 10
//    l.. 20
//
//    g..
//    g..
//
//    s..
////    static_local_example();
////    static_local_example();
//
//    c.. __ e..
//    r_ _
