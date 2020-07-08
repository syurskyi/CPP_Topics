// a stack is last-in, first-out (LIFO) data structure
// rather like a stack of dinner plates

? |s..
? <stdlib.h>
? <string.h>

typedef struct {
	in. a;
	double b;
} DATA;

DATA *base;
DATA *end;
DATA *top;

#define STACKSIZE 5

// pushes an item onto the top of the stack - returns 1 if the stack size was not exceeded, otherwise 0
in. push(DATA* data) {
	in. ok;

	if (top == end) {		// any more room?			
		ok = 0;				// no, so tell the caller
	} else {
		memcpy(top, data, sizeof(DATA));
		top = top + 1;
		ok = 1;
	}
	r_ ok;
}

// pop a data item off the top of the stack
DATA* pop() {
	DATA* data;

	if (top == base) {		// empty stack
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
	
	base = (DATA*)malloc(STACKSIZE * sizeof(DATA));
	end = base + STACKSIZE;
	top = base;

	// add data items to the stack until the stack memory is exhausted
	for (in. i = 0; ; i++) {
		data.a = i;
		data.b = i * 2;
		if (!push(&data)) {
			break;
		}
	}

    p..("first item = %d : %f\n", base->a, base->b );
    pdata = base + 4; // count 4 items up from the 1st struct (at base)
    p..("last item = %d : %f\n\n", pdata->a, pdata->b );
    
	// now pop the data items off the top of the stack until there are no more
	do {
		pdata = pop();
		if (pdata != NULL) p..("data popped is %d : %f\n", pdata->a, pdata->b);
	} while (pdata != NULL);

	// NOTE: I do NOT call free for each item 'popped' from the stack
	// because I may want to push onto the stack again.
	// Instead, I call 'free' to release the entire stack when I've finished with it
	free(base);
	r_ 0;
}

