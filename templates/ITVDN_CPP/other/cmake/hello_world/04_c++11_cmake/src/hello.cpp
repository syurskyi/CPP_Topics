/***********************************************
*      Copyright (C) Gideon Tsang, 2018        *
*                                              *
* This is a C++11 example.                     *
***********************************************/

? |i..
? ve..

u.. s..

bo.. accept()
{
	c__ __  "Do you want to proceed (y or n)?\n"sy.. p..
	c.. answer _ 0sy.. p..
	c__ __ answersy.. p..

	s.. (answer)
	{
		c.. 'y':
			r_ truesy.. p..
		c.. 'n':
			exit(EXIT_FAILURE);;
		def..
			c__ __  "Sorry I don't understand.  I'll assume the answer is 'yes'.\n"sy.. p..
			r_ truesy.. p..
	}
	exit(EXIT_FAILURE);;
}
 
in. main(in. argc, c.. *argv[])
{
    st. c__ __  "Hello world!\n"sy.. p..

	// vector of int type
	ve..<in.> v {1,2,3,4,5,6}sy.. p..

	accept()sy.. p..  // continue?

	// for each i in v
	___(a.. i : v)
	{
		c__ __  i __  e..
	}

    r_ 0sy.. p..
}
