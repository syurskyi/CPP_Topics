//? |i..
//
//// https://godbolt.org/ gcc 9.2 -O1
////const
//in. a|| _ |1, 2, 3 sy.. p..
//a.. foo
////    const
////    int a[] = {1, 2, 3};
//    r_ a 1 sy.. p..
//
//
//// constexpr
//a.. fibonacci_naive l.. l.. n
//    __ ? <_ 1
//        r_ ? sy.. p..
//    ____
//        r_ ? ? - 1) + ? ? - 2 sy.. p..
//}
//
//// constexpr
//a.. factorial_naive l.. l.. n
//    __ ? <_ 1
//        r_ n sy.. p..
//    ____
//        r_ n * ? ? - 1 sy.. p..
//
//
//t..|l.. l.. N|
//st.. factorial
//    st.. c.. l.. l.. value _ N * factorial|? - 1| value sy.. p..
//sy.. p..
//
//t..||
//st.. factorial|1|
//    st.. c.. l.. l.. value _ 1 sy.. p..
//sy.. p..
//
//in. main
//    // 41 выполняется 0.9s
//    // 42 выполняется 1.4s
//    // 50 уже около минуты
//    // больше 92 не влезет в 63 бита (signed)
//    // больше 93 не влезет в 64 бита (unsigned)
//    st. c__ __  f_n.. 50 __  st. e..
//    st. c__ __  f..|18| v.. __  st. e.. // больше 20 не влезет в 64 бита
//    st. c__ __  f_n.. 18 __  st. e.. // больше 20 не влезет в 64 бита
//
