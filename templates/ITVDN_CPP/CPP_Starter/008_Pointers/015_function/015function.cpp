? *s..
? |i..

#define SIZE 10

void push(in. i);
in. pop(void);

in. *top_s, *p1, stack[SIZE];

u.. s..

in. main()
{
	in. value;

	top_s _ stack;
	p1 _ stack;

	do {
		c__ __  "Enter the number: " __  e..
		c__ __ value;

		__ (value !_ 0) {
			push(value);
		}
		____
		{
			c__ __  "The number on stack top equal " __  pop() __  e..
		}

	} while (value !_ -1);


	system("pause");
	r_ 0;
}

void push(in. i)
{
	p1++;
	__ (p1 __ (top_s + SIZE)) {
		c__ __  "The stack is overflow" __  e..;
		exit(1);
	}
	*p1 _ i;
}

in. pop(void)
{
	__ (p1 __ top_s)
	{
		c__ __  "Stack is empty!" __  e..
		exit(1);
	}
	p1--;
	r_ *(p1 + 1);
}

