//? |s..
//? |st..
//? |st..
//
//// NOTE: I always find this syntax to be a bit 'gnarly' so I typedef the 'Pointer-to-Function-returning-Integer' like this
//t.. in. #PFI in.
//
//// our example function
//in. square in. a
//	r_ a*a
//
//
//in. main
//	P.. test					// this is the function pointer
//    // int (*test)(int);
//	ch.. input 50
//	in. value
//	in. result
//
//	// set the function pointer 'test' to the address of the function 'square'
//	test _ square
//
//	// try it out
//	p.. "enter the number to square ... "
//	value _ a.. g.. i..
//	result _ t.. v..
//	p.. "the result is @d##" r..
//	r_ _
