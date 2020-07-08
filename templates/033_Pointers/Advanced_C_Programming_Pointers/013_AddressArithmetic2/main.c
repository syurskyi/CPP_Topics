//? |s..
//? |st..
//? |st..
//
//? COUNT 4
//
//in. a ?
//fl.. b?
//do.. c?
//lo.. lo.. in. d?
//sh.. in. e?
//lo.. in. f?
//
//// illustrate the different amounts that are added to an address by C's address arithmetic
//in. main
//
//    in.# pa
//    fl..# pb
//    do..# pc
//    lo.. lo.. in.# pd
//    sh.. in.# pe // we could just use 'short' here
//    lo.. in.# pf
//
//    // first let's look at the sizes of our array types
//    p..("sizes are: int @d; float @d; double @d; long long int @d; short int @d; long int @d##", s_o_(in.
//        s_o_ fl.. s_o_ do.. s_o_ lo.. lo.. in. s_o_ sh.. in. s_o_ lo.. in.
//    // NOTE: because of historical reasons a plain 'int' can vary in size between machine architectures. On some
//    // microprocessors it is 2 bytes long while on Intel processors it is 4 bytes
//    // if we want to be explicit (and more portable), then use 'long int' for a 32 bit integer instead of just 'int'
//
//    // initialize our array and pointers
//    pa _ a
//    pb _ b
//    pc _ c
//    pd _ d
//    pe _ e
//    pf _ f
//    ___ in. i _ 0 ? < C.. ###
//        a ? _ ?
//        b ? _ fl.. ?
//        c ? _ do.. ?
//        d ? _ ?
//        e ? _ ?
//        f ? _ ?
//
//
//    // let's do some arithmetic
//    _a +_ 1
//    _b +_ 1
//    _c +_ 1
//    _d +_ 1
//    _e +_ 1
//    _f +_ 1
//    // and print out the results ...
//    // NOTE: the addresses have been increased by the correct amount 4 for 'int', 'float' and 'long int'
//    // 8 for 'double' and 'long long int' and 2 for 'short int'
//    p.. "address of a is @p [@d]; value of pa is @p [@d]; value pointed to by pa is @d##" ? ? ? ? #?
//    p.. "address of b is @p [@d]; value of pb is @p [@d]; value pointed to by pb is @f##" ? ? ? ? #?
//    p.. "address of c is @p [@d]; value of pc is @p [@d]; value pointed to by pc is @f##" ? ? ? ? #?
//    p.. "address of d is @p [@d]; value of pd is @p [@d]; value pointed to by pd is @lld##" ? ? ? ? #?
//    p.. "address of e is @p [@d]; value of pe is @p [@d]; value pointed to by pe is @hd##" ? ? ? ? #?
//    p.. "address of f is @p [@d]; value of pf is @p [@d]; value pointed to by pf is @ld##" ? ? ? ? #?
//
//    r_ _
//
