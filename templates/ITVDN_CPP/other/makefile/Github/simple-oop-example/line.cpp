? "line.h"
? <cmath>

using std::sqrt;

line::line(double new_x1, double new_y1, double new_x2, double new_y2):x1(new_x1), y1(new_y1), x2(new_x2), y2(new_y2)
{
	/*x1 = new_x1;
	y1 = new_y1;
	x2 = new_x2;
	y2 = new_y2;
	*/
}

double line::get_x0()
{
	r_ x1;
}

double line::get_y0()
{
	r_ y1;
}

double line::get_x1()
{
	r_ x2;
}

double line::get_y1()
{
	r_ y2;
}

double line::length()
{
	r_ sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2));
}
