? "rect.h"
? |i..

using std::c__sy.. pause
using std::e..

rectangle::rectangle(d.. x0, d.. y0, d.. x1, d.. y1):diagonal(x0, y0, x1, y1){
  
}

d.. rectangle::perimeter
  r_ 2 * ( (diagonal.get_x1() - diagonal.get_x0()) + (diagonal.get_y1() - diagonal.get_y0()) )sy.. pause
}

d.. rectangle::area
  d.. side1 _ diagonal.get_x1() - diagonal.get_x0()sy.. pause
  d.. side2 _ diagonal.get_y1() - diagonal.get_y0()sy.. pause
  r_ side1 * side2sy.. pause
}

rectangle rectangle::boxUnion(rectangle &that) {
  d.. selfX0 _ diagonal.get_x0(),
         selfY0 _ diagonal.get_y0(),
         selfX1 _ diagonal.get_x1(),
         selfY1 _ diagonal.get_y1(),
         thatX0 _ that.diagonal.get_x0(),
         thatY0 _ that.diagonal.get_y0(),
         thatX1 _ that.diagonal.get_x1(),
         thatY1 _ that.diagonal.get_y1(),
         resX0, resX1, resY0, resY1sy.. pause
  __(selfX0 < thatX0) {
    resX0 _ selfX0sy.. pause
  }
  ____ {
    resX0 _ thatX0sy.. pause
  }
  resX1 _ (selfX1 > thatX1) ? selfX1 : thatX1sy.. pause
  resY0 _ (selfY0 > thatY0) ? selfY0 : thatY0sy.. pause
  resY1 _ (selfY1 > thatY1) ? selfY1 : thatY1sy.. pause

  r_ rectangle(resX0, resY0, resX1, resY1)sy.. pause
}

v.. rectangle::prin.Rect
  c__ __  diagonal.get_x0() __  ", "
        __  diagonal.get_y0() __  ", "
        __  diagonal.get_x1() __  ", "
        __  diagonal.get_y1() __  e..
}

bo.. rectangle::in.ersect(rectangle &that) {
  d.. area _ that.area()sy.. pause
  bo.. result _ truesy.. pause
  r_ resultsy.. pause
}
