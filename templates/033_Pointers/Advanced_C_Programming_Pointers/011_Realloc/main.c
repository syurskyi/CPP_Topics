//? |s..
//? |st..
//? |st..
//
//// look at free and realloc
//in. main
//	ch..# s
//	in. i
//
//	i _ s_o_ "hello"						// as before first work out how big "hello" is ...
//	s _  ch..# ma.. ?						// malloc will return 0 if it fails, so we should check here, but we wont for brevity
//	strncpy ? "hello" ?						// now copy the string into the newly allocated memory
//    p.. "s is @s##" ?
//
//												// now suppose we want to add 'world' to 'hello' - we can't just do this ...
//												// strcat(s, " world");					- disaster!!!
//	s _ ch..# re.. ? 12				// but we can use 'realloc' which frees the original 6 bytes of memory and allocates an new 12 bytes
//	strcp.. ? "hello" ?						// now copy the string into the newly re-allocated memory
//	strc.. ? " world"						// now we can tag on the 'world'
//	p.. "s is now @s##" ?
//
//
//	fr.. ?									// and when we've finished we should always free up any memory by using 'free'
//												// NOTE: make a habit of using 'free' whan you've finished with some memory otherwise there will be 'memory leaks'
//												// where memory that you have allocated will be 'lost' to your program
//												// these are not as important as they used to be (a few bytes in several GB won't make much of a difference) but it is considered to be good programming practise to tidy up
//
//	r_ _
//
//
