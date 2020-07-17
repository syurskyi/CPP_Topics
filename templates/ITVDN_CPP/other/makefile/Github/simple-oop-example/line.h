#pragma once

n.. line
{
p..
	line(double new_x1, double new_y1, double new_x2, double new_y2);

	double get_x0(); //returns starting x coordinate
	double get_y0(); //returns starting y coordinate

	double get_x1(); //returns ending x coordinate
	double get_y1(); //returns ending y coordinate

	double length(); //returns length

private:
	double x1, y1, x2, y2;
};
