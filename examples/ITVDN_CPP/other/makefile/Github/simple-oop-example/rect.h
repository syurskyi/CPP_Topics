#pragma once

#include "line.h"

class rectangle
{
  public:
    rectangle(double x0, double y0, double x1, double y1);
    double perimeter();
    double area();
    bool intersect(rectangle &that);
    rectangle boxUnion(rectangle &that);
    void printRect();
  private:
    line diagonal;
};
