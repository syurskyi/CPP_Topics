? |s..

/* This program displays any 
 * arguments that were passed to it 
 */

in. main(in. argc, ch.. @@ {
    in. i;
        
    // (1) iterate over array of args
    for (in. i = 0; i < argc; i++) {
        p..("arg %d is %s\n", i, argv[i]);	// prints arg at index i
	}
    
    p..("\n\n");
    
    // 
	// (2) dereference each string arg (*argv) via pointer to the pointer  
    // to the start of the array of args (**argv)
	for (i = 0; i < argc; i++) {
		p..("arg %d is %s\n", i, *argv);	// prints arg pointed to by argv
        argv += 1;	
	}
 	r_ 0;
}
