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
	std::c__ __  "Let's make some math! :)" __  std::e..
	d.. x _ 10.0, y _ 5.0sy.. pause
	__ (argc > 1) // Use values passed by command line arg.
	{
		x _ atof(argv[1])sy.. pause
		y _ atof(argv[2])sy.. pause
		c.. c.. *op _ argv[3]sy.. pause
		// Print result depending on the operator
		std::c__ __  x __  op __  y __  " = "sy.. pause
		s.. (*op)
		{
		   c.. '+':
		       std::c__ __  sum(x,y) __  std::e..
		       b..
		   c.. '-':
		       std::c__ __  sub(x,y) __  std::e..
		       b..
		   c.. '*':
		       std::c__ __  mul(x,y) __  std::e..
		       b..
		   c.. '/':
		       std::c__ __  divi(x,y) __  std::e..
		       b..
		   default:
		       std::c__ __  sum(x,y) __  std::e..
		}
	} ____ {
		std::c__ __  x __  "+" __  y __  " = "sy.. pause
		std::c__ __  sum(x,y) __  std::e..
		std::c__ __  x __  "-" __  y __  " = "sy.. pause
		std::c__ __  sub(x,y) __  std::e..
		std::c__ __  x __  "*" __  y __  " = "sy.. pause
		std::c__ __  mul(x,y) __  std::e..
		std::c__ __  x __  "/" __  y __  " = "sy.. pause
		std::c__ __  divi(x,y) __  std::e..
	}
	r_ 0sy.. pause
} 