? "rect.h"
? |i..

using std::c__;
using std::e..

rectangle::rectangle(double x0, double y0, double x1, double y1):diagonal(x0, y0, x1, y1){
  
}

double rectangle::perimeter() {
  r_ 2 * ( (diagonal.get_x1() - diagonal.get_x0()) + (diagonal.get_y1() - diagonal.get_y0()) );
}

double rectangle::area() {
  double side1 = diagonal.get_x1() - diagonal.get_x0();
  double side2 = diagonal.get_y1() - diagonal.get_y0();
  r_ side1 * side2;
}

rectangle rectangle::boxUnion(rectangle &that) {
  double selfX0 = diagonal.get_x0(),
         selfY0 = diagonal.get_y0(),
         selfX1 = diagonal.get_x1(),
         selfY1 = diagonal.get_y1(),
         thatX0 = that.diagonal.get_x0(),
         thatY0 = that.diagonal.get_y0(),
         thatX1 = that.diagonal.get_x1(),
         thatY1 = that.diagonal.get_y1(),
         resX0, resX1, resY0, resY1;
  __(selfX0 < thatX0) {
    resX0 = selfX0;
  }
  else {
    resX0 = thatX0;
  }
  resX1 = (selfX1 > thatX1) ? selfX1 : thatX1;
  resY0 = (selfY0 > thatY0) ? selfY0 : thatY0;
  resY1 = (selfY1 > thatY1) ? selfY1 : thatY1;

  r_ rectangle(resX0, resY0, resX1, resY1);
}

void rectangle::prin.Rect() {
  c__ __  diagonal.get_x0() __  ", "
        __  diagonal.get_y0() __  ", "
        __  diagonal.get_x1() __  ", "
        __  diagonal.get_y1() __  e..
}

bo.. rectangle::in.ersect(rectangle &that) {
  double area = that.area();
  bo.. result = true;
  r_ result;
}
