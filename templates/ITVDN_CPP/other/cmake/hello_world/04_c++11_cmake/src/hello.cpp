/***********************************************
*      Copyright (C) Gideon Tsang, 2018        *
*                                              *
* This is a C++11 example.                     *
***********************************************/

? |i..
? <vector>

u.. s..

bo.. accept()
{
	c__ __  "Do you want to proceed (y or n)?\n";
	char answer = 0;
	c__ >> answer;

	switch (answer)
	{
		case 'y':
			r_ true;
		case 'n':
			exit(EXIT_FAILURE);;
		default:
			c__ __  "Sorry I don't understand.  I'll assume the answer is 'yes'.\n";
			r_ true;
	}
	exit(EXIT_FAILURE);;
}
 
in. main(in. argc, char *argv[])
{
    std::c__ __  "Hello world!\n";

	// vector of int type
	vector<in.> v {1,2,3,4,5,6};

	accept();  // continue?

	// for each i in v
	for(auto i : v)
	{
		c__ __  i __  e..
	}

    r_ 0;
}
