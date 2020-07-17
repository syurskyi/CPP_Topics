// Section 11
// Random Numbers

? <iostream>
? <cstdlib>      // required for rand()
? <ctime>       // required for time( )

u.. s..

in. main
      
    in. random_number {};
    size_t count {10};           // number of random numbers to generate
    in. min {1};                  // lower bound (inclusive)
    in. max {6};                 // upper bound (inclusive)
    
    // seed the random number generator
    // If you don't seed the generator you will get the same requence random numbers every run
    
    c.. __ "RAND_MAX on my system is: " __ RAND_MAX __ e..
    srand(time(nullptr));  
    
    for (size_t i{1}; i<=count; ++i)  {
        random_number = rand() % max + min;     // generate a random number [min, max]
        c.. __ random_number __ e..
    }

    c..  __ e..
    r_ 0;
}

