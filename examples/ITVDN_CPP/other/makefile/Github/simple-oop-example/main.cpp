#include "rect.h"
#include <iostream>

using std::cout;
using std::endl;


int main()
{
	rectangle box(1.0, 3.0, 6.0, 7.0), boxUnionTest(3.0, 1.0, 9.0, 5.0);
  rectangle unifiedBox = box.boxUnion(boxUnionTest);

  cout << box.perimeter() << endl
       << box.area() << endl
       << box.intersect(boxUnionTest) << endl;

  unifiedBox.printRect();
  return 0;
}
