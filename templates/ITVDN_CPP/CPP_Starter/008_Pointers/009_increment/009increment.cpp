? *s..
? |i..

u.. s..

in. main()
{
	c__ __  "Enter the integer number: "
	in. count _ 0
	c__ __ count

	in. *block _ new in.[count]
	in. *pBlock _ block

	c__ __  "Fill the block: " __  e..

	___ (in. i _ 0 i < count i++)
	{
		c__ __  "Enter number: "
		c__ __ *(block + i)
	}

	c__ __  "Display all numbers in block: " __  e..
	___ (in. i _ 0 i < count i++)
	{
		c__ __  *(pBlock++) __  " "
	}
	c__ __  e..

	delete[] block

	sy.. pause
	r_ 0
}
