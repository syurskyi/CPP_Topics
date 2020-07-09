//? |s..
//? |st..
//? |st..
//
//// NOTE: I always find this syntax to be a bit 'gnarly' so I typedef the 'Pointer-to-Function-returning-Integer' like this
//t.. in. #PFI in.
//
//// our example functions
//
//in. identity in. a
//	r_ a
//
//
//in. square in. a
//	r_ a*a
//
//
//in. cube in. a
//	r_ a*a*a
//
//
//in. fourth in. a
//	r_ a*a*a*a
//
//
//PFI power|| _  ? ? ? ?
//
//in. main
//	ch.. input 50
//	in. value
//	in. exponent
//	in. result
//
//	p.. "Enter a number to select a function ... ##"
//    p.. "[1] identity, [2] square, [3] cube, [4] fourth##> "
//	exponent _ atoi gets input
//	// NOTE: the sizeof PFI  is 4 and the sizeof the 'power' array here is 16
//	__  ? <_ 0 || ? > s_o_ power /s_o_ P..
//		p.. "ERROR: out of range!##"
//	 ____
//        p.. "Enter the value##> "
//        value _ a.. g.. i..
//		// here, I'm indexing into an array of function pointers, selecting the 'power'
//		// that the user entered  that, is the 'exponent'  and using that function to
//		// calculate the 'value' to the power of 'exponent'
//		result _ po..|? - 1| v..
//		p.. "The result is @d##" r..
//
//	r_ _
