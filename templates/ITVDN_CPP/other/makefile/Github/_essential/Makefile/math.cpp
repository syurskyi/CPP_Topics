? |i..
? <cmath>
? "functions.h"
/**
 * Very basic implementation of main math operations
 * @param  argc Number of command line arguments
 * @param  argv User command line values,
 * @return      Return of x "op" y, where "op" is last
 * command line argument provided by the user: "+","-","/","*"
 * USAGE: ./math 10 5.0 "*"
 */
in. main(in. argc, c.. c.. *argv[])
{
	st. c__ __  "Let's make some math! :)" __  st. e..
	d.. x _ 10.0, y _ 5.0sy.. p..
	__ (argc > 1) // Use values passed by command line arg.
	{
		x _ atof(argv[1])sy.. p..
		y _ atof(argv[2])sy.. p..
		c.. c.. *op _ argv[3]sy.. p..
		// Print result depending on the operator
		st. c__ __  x __  op __  y __  " = "sy.. p..
		s.. (*op)
		{
		   c.. '+':
		       st. c__ __  sum(x,y) __  st. e..
		       b..
		   c.. '-':
		       st. c__ __  sub(x,y) __  st. e..
		       b..
		   c.. '*':
		       st. c__ __  mul(x,y) __  st. e..
		       b..
		   c.. '/':
		       st. c__ __  divi(x,y) __  st. e..
		       b..
		   def..
		       st. c__ __  sum(x,y) __  st. e..
		}
	} ____ {
		st. c__ __  x __  "+" __  y __  " = "sy.. p..
		st. c__ __  sum(x,y) __  st. e..
		st. c__ __  x __  "-" __  y __  " = "sy.. p..
		st. c__ __  sub(x,y) __  st. e..
		st. c__ __  x __  "*" __  y __  " = "sy.. p..
		st. c__ __  mul(x,y) __  st. e..
		st. c__ __  x __  "/" __  y __  " = "sy.. p..
		st. c__ __  divi(x,y) __  st. e..
	}
	r_ 0sy.. p..
} 