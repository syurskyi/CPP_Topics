//? |s..
//? <stdlib.h>
//? |st..
//
//t.. st..
//    in. a          // 4 bytes
//    do.. b       // 8 bytes
//    in. c           // 4 bytes
//    lo.. lo.. in. d // 8 bytes
//} MYSTRUCT
//
//? COUNT 4
//
//// a more complicated example
//
//in. main
//
//    M.. #p #q
//    v..# v
//
//    p.. "size of MYSTRUCT = @d##" s_o_ M..
//    // IMPORTANT NOTE: the size of MYSTRUCT is NOT always 24 bytes! It will vary according to the processor architecture
//    // ...
//    // ... because some processor architectures will require a 'double' (say) to be at an address which is multiple of 8
//    // ...
//    // ... so it is very important to make no assumptions on the size of a structure: ALWAYS use 'sizeof' or let the
//    // compiler use address arithmetic.
//
//    // allocate some memory and clean it out: 'calloc' is quite useful here
//    // p = (MYSTRUCT*)calloc(COUNT, 24); // DO NOT DO THIS!
//    p _ M..# ca.. C.. s_o_ M..
//    // initialize it to something interesting using a large floating point value for the double and a large value for
//    // the 64-bit integer
//    // this is so we can see where the compiler has inserted padding space to get the desired alignment for the 8 byte
//    // quantities 'b' and 'd'
//    ___ in. i _ 0 ? < C.. ###
//        ? ?.a _ ?
//        ? ?.b _ 10000000000.0 + ?
//        ? ?.c _ i * 20;
//        ? ?.d _ 4294967296 + ?
//
//
//    // first let's see what we've got
//    // NOTE: look at the addresses of the 'double' and the 'long long int' - they start (are aligned) on an 8 byte
//    // boundary
//    q _ p
//    p..("[0] values:##a is @d##b is @f##c is @d##d is @lld##", q__a, q__b, q__c, q__d
//    p..("addresses:##a is @p##b is @p##c is @p##d is @p##", #q__a, #q__b, #q__c, #q__d
//    q _ p + 3; // use address arithmetic to get the address of the third element (the array is zero based remember)
//    p..("##[3] values:##a is @d##b is @f##c is @d##d is @lld##", q__a, q__b, q__c, q__d
//    p..("addresses:##a is @p##b is @p##c is @p##d is @p####", #q__a, #q__b, #q__c, #q__d
//
//    // finally a more advanced way of looking at what is inside the structure (all 32 bytes of it)
//    // IMPORTANT NOTE: address arithmetic will not work with generic pointers unless you use a cast
//    // this will not work: 'v = v + 3' (or 'v[3]') because the compiler doesn't know what the thing that 'v' (a generic
//    // pointer) is pointing to is ...
//    // ... and so it can't use address arithmetic; instead we have to use a cast to tell the compiler what 'v' is
//    // pointing at
//
//    v _ p + 3; // look at the third element of the array of MYSTRUCTs
//    // print out the values as integers - the zeros show you where the padding has been inserted by the compiler
//    // NOTE: that we are using address arithmetic to move along MYSTRUCT as a set of 8 'int' values of 4 bytes each (32
//    // bytes in total)
//    p.."Struct at index 3##"
//    ___(in. i _ 0 ? < s_o_(M..) / s_o_ in. ###
//        p.. "v[@d]_@d##" ? in.#? ?
//
//
//    r_ _
//
