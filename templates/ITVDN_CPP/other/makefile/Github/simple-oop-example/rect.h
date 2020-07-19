?p.. once

? "line.h"

n.. rectangle
{
  p..
    rectangle(do.. x0, do.. y0, do.. x1, do.. y1);
    do.. perimeter();
    do.. area();
    bo.. intersect(rectangle &that);
    rectangle boxUnion(rectangle &that);
    v.. printRect();
  pr..
    line diagonal;
};
