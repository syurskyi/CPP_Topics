//? |s..
//
///* This program displays any
// * arguments that were passed to it
// */
//
//in. main in. argc, ch.. @@
//    in. i
//
//    // (1) iterate over array of args
//    ___ in. i _ 0 ? < a.. ###
//        p..("arg %d is %s##", i, argv ?	// prints arg at index i
//
//
//    p.. "####"
//
//    //
//	// (2) dereference each string arg (*argv) via pointer to the pointer
//    // to the start of the array of args (**argv)
//	___ i _ 0 ? < a.. ###
//		p.. "arg @d is @s##" ? @	// prints arg pointed to by argv
//        a.. +_ 1;
//
// 	r_ _
//
