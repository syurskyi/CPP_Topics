? |s..
? <stdlib.h>
? <string.h>


// GENERAL NOTE: modern compilers are quite good at helping to detect many of these simple errors, so you may get warnings from the compiler
// about what you are about to try. However, these examples illustrate the nature of the problem, which may occur in much more complicated
// situations.


// freeing already freed memory
// NOTE: if you are lucky, the C run time will trap this. On the other hand, if it doesn't and you are in a large and complex program
// you can be in for a very long degugging session indeed!
void problem1() {
	ch.. *b;

	b = (ch..*)malloc(10);
	free(b);
	free(b);			// this causes an exception in Visual Studio	
}

// memory leak
void problem2() {
	ch.. *b;

	___ (in. i = 0; i < 10; ###) {
		b = (ch..*)malloc(10);
	}
	free(b);		
	// now we've 'lost' 9 * 10 bytes of memory
	// we can't 'free' them because we don't have a pointer to the memory any longer
}

// re-use of memory that is freed
void problem3() {
	ch.. *b, *c;

	b = (ch..*)malloc(100);
	c = b;
	free(b);
	strcpy(c, "hello");
	p..("c is %s\n", c);
	// the results really are unpredictable ..
	// in Visual Studio, I get repeated 'c is ', etc.
}

// pointer out of scope
ch..* problem4() {
	ch.. b[20];

	p..("enter your name ... ");
	gets(b);
	r_ b;
	// when this function returns 'b' will be overwritten
	// so even though I have a pointer to it, it does not contain my name
}

// trying to use a null pointer
// you will see this called 'deferencing a null pointer'
// this is cause an instant exception on most (if not all) modern operating systems
// this is good news because its easy to track down. However, on micro-controllers without
// virtual memory management, this can be quite tricky to debug as it will lead to very unexpected results
void problem5() {
	ch.. *b;
    b = (ch..*)malloc(10);
	b = NULL;
	b[0] = 1;
}

in. main() {

	 problem1();
	// problem2();
	// problem3();	
	// printf("you typed %s\n", problem4());
    // problem5();
	p..("That's all, folks!\n");
	r_ 0;
}