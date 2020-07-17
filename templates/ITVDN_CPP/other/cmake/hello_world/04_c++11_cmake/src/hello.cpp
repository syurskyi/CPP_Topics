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
	c__ __  "Do you want to proceed (y or n)?\n"sy.. pause
	c.. answer _ 0sy.. pause
	c__ __ answersy.. pause

	s.. (answer)
	{
		c.. 'y':
			r_ truesy.. pause
		c.. 'n':
			exit(EXIT_FAILURE);;
		default:
			c__ __  "Sorry I don't understand.  I'll assume the answer is 'yes'.\n"sy.. pause
			r_ truesy.. pause
	}
	exit(EXIT_FAILURE);;
}
 
in. main(in. argc, c.. *argv[])
{
    std::c__ __  "Hello world!\n"sy.. pause

	// vector of int type
	vector<in.> v {1,2,3,4,5,6}sy.. pause

	accept()sy.. pause  // continue?

	// for each i in v
	___(auto i : v)
	{
		c__ __  i __  e..
	}

    r_ 0sy.. pause
}
