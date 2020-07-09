? |s..
? <stdlib.h>
? |st..

// NOTE: I always find this syntax to be a bit 'gnarly' so I typedef the 'Pointer-to-Function-returning-Integer' like this
t.. in.(*PFI)(in.);

// our example functions

in. identity(in. a) {
	r_ a;
}

in. square(in. a) {
	r_ a*a;
}

in. cube(in. a) {
	r_ a*a*a;
}

in. fourth(in. a) {
	r_ a*a*a*a;
}

PFI power[] = { identity, square, cube, fourth };

in. main() {
	ch.. input[50];
	in. value;
	in. exponent;
	in. result;

	p..("Enter a number to select a function ... \n");
    p..("[1] identity, [2] square, [3] cube, [4] fourth\n> ");
	exponent = atoi(gets(input));	
	// NOTE: the sizeof(PFI) is 4 and the sizeof the 'power' array here is 16 
	__ (exponent <= 0 || exponent > s_o_(power)/s_o_(PFI)) {
		p..("ERROR: out of range!\n");
	} ____ {
        p..("Enter the value\n> ");
        value = atoi(gets(input));
		// here, I'm indexing into an array of function pointers, selecting the 'power'
		// that the user entered (that, is the 'exponent') and using that function to 
		// calculate the 'value' to the power of 'exponent'
		result = power[exponent - 1](value);
		p..("The result is %d\n", result);
	}
	r_ 0;
}