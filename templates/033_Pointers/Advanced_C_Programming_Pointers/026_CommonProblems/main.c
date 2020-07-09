//? |s..
//? <stdlib.h>
//? |st..
//
//
//// GENERAL NOTE: modern compilers are quite good at helping to detect many of these simple errors, so you may get warnings from the compiler
//// about what you are about to try. However, these examples illustrate the nature of the problem, which may occur in much more complicated
//// situations.
//
//
//// freeing already freed memory
//// NOTE: if you are lucky, the C run time will trap this. On the other hand, if it doesn't and you are in a large and complex program
//// you can be in for a very long degugging session indeed!
//v.. problem1
//	ch.. #b
//
//	b _ ch..#|ma.. 10
//	fr.. ?
//	fr.. ?			// this causes an exception in Visual Studio
//
//
//// memory leak
//v.. problem2
//	ch.. #b
//
//	___ in. i _ 0 ? < 10 ###
//		b _ ch..# ma.. 10
//
//	fr.. ?
//	// now we've 'lost' 9 * 10 bytes of memory
//	// we can't 'free' them because we don't have a pointer to the memory any longer
//
//
//// re-use of memory that is freed
//v.. problem3
//	ch.. #b #c
//
//	b _ ch..#|ma.. 100
//	c _ b
//	fr.. ?
//	strcpy ? "hello"
//	p.. "c is @s##" ?
//	// the results really are unpredictable ..
//	// in Visual Studio, I get repeated 'c is ', etc.
//
//
//// pointer out of scope
//ch..* problem4
//	ch.. b 20
//
//	p.. "enter your name ... "
//	g.. ?
//	r_ ?
//	// when this function returns 'b' will be overwritten
//	// so even though I have a pointer to it, it does not contain my name
//
//
//// trying to use a null pointer
//// you will see this called 'deferencing a null pointer'
//// this is cause an instant exception on most (if not all) modern operating systems
//// this is good news because its easy to track down. However, on micro-controllers without
//// virtual memory management, this can be quite tricky to debug as it will lead to very unexpected results
//v.. problem5
//	ch.. #b
//    b _ ch..#|ma.. 10
//	b _ N..
//	? 0 _ 1
//
//
//in. main
//
//	 problem1();
//	// problem2();
//	// problem3();
//	// printf("you typed %s\n", problem4());
//    // problem5();
//	p.. "That's all, folks!##"
//	r_ _
