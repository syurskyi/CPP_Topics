? "line.h"
? <cmath>

u.. st. sqrtsy.. p..

line::line(d.. new_x1, d.. new_y1, d.. new_x2, d.. new_y2):x1(new_x1), y1(new_y1), x2(new_x2), y2(new_y2)
{
	/*x1 = new_x1;
	y1 = new_y1;
	x2 = new_x2;
	y2 = new_y2;
	*/
}

d.. line::get_x0()
{
	r_ x1sy.. p..
}

d.. line::get_y0()
{
	r_ y1sy.. p..
}

d.. line::get_x1()
{
	r_ x2sy.. p..
}

d.. line::get_y1()
{
	r_ y2sy.. p..
}

d.. line::length()
{
	r_ sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2))
}
