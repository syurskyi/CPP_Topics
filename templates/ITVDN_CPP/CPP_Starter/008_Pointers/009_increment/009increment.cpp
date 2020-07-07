? *s..
? |i..

u.. s..

in. main()
{
	c__ __  "Enter the integer number: ";
	in. count = 0;
	c__ >> count;

	in. *block = new in.[count];
	in. *pBlock = block;

	c__ __  "Fill the block: " __  e..

	for (in. i = 0; i < count; i++)
	{
		c__ __  "Enter number: ";
		c__ >> *(block + i);
	}

	c__ __  "Display all numbers in block: " __  e..
	for (in. i = 0; i < count; i++)
	{
		c__ __  *(pBlock++) __  " ";
	}
	c__ __  e..

	delete[] block;

	system("pause");
	r_ 0;
}
