// a stack is last-in, first-out (LIFO) data structure
// rather like a stack of dinner plates

? |s..
? <stdlib.h>
? |st..

typedef struct {
	in. a;
	do.. b;
} DATA;

DATA *base;
DATA *end;
DATA *top;

? STACKSIZE 5

// pushes an item onto the top of the stack - returns 1 if the stack size was not exceeded, otherwise 0
in. push(DATA* data) {
	in. ok;

	__ (top __ end) {		// any more room?
		ok = 0;				// no, so tell the caller
	} else {
		memcpy(top, data, s_o_(DATA));
		top = top + 1;
		ok = 1;
	}
	r_ ok;
}

// pop a data item off the top of the stack
DATA* pop() {
	DATA* data;

	__ (top __ base) {		// empty stack
		data = NULL;
	}
	else {
		top = top - 1;		// get the top item
		data = top;			// and return it
	}
	r_ data;
}

in. main() {
	DATA data, *pdata;
	
	base = (DATA*)ma..(STACKSIZE * s_o_(DATA));
	end = base + STACKSIZE;
	top = base;

	// add data items to the stack until the stack memory is exhausted
	___ (in. i = 0; ; ###) {
		data.a = i;
		data.b = i * 2;
		__ (!push(&data)) {
			break;
		}
	}

    p..("first item = %d : %f\n", base->a, base->b );
    pdata = base + 4; // count 4 items up from the 1st struct (at base)
    p..("last item = %d : %f\n\n", pdata->a, pdata->b );
    
	// now pop the data items off the top of the stack until there are no more
	do {
		pdata = pop();
		__ (pdata != NULL) p..("data popped is %d : %f\n", pdata->a, pdata->b);
	} w___ (pdata != NULL);

	// NOTE: I do NOT call free for each item 'popped' from the stack
	// because I may want to push onto the stack again.
	// Instead, I call 'free' to release the entire stack when I've finished with it
	fr..(base);
	r_ 0;
}

