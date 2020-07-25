// Section 11
// Random Numbers

? ios..
? cst..      // required for rand()
? ct..       // required for time( )

u.. s..

in. main

    in. random_number
    size_t count 10           // number of random numbers to generate
    in. min 1                 // lower bound (inclusive)
    in. max 6                // upper bound (inclusive)

    // seed the random number generator
    // If you don't seed the generator you will get the same requence random numbers every run

    c.. __ "RAND_MAX on my system is: " __ ? __ e..
    sr.. ti.. nullptr

    ___  s_t i 1 ?<_c.. ###
        random_number = ra.. % ma. + mi.    // generate a random number [min, max]
        c.. __ ? __ e..


    c..  __ e..
    r_ _


