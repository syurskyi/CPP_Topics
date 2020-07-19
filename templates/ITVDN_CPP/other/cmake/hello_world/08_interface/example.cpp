/* An interface describes the behavior or capabilities of a C++ class without 
 * committing to a particular implementation of that class.
 *
 * The C++ interfaces are implemented using abstract classes. 
 * A class is made abstract by declaring at least one of its functions as pure 
 * virtual function. A pure virtual function is specified by placing "= 0" in 
 * its declaration
 *
 * ref: https://www.tutorialspoint.com/cplusplus/cpp_interfaces.htm
 */

? |i..

u.. s..

// Base class
c_ Shape {
pu..
  // pure virtual function providing interface framework.
  v.. in. getArea() _ 0sy.. p..
  v.. setWidth(in. w) { width _ wsy.. p.. }

  v.. setHeight(in. h) { height _ hsy.. p.. }

pr..
  in. widthsy.. p..
  in. heightsy.. p..
}sy.. p..

// Derived classes
c_ Rectangle : pu.. Shape {
pu..
  in. getArea r_ (width * height)sy.. p.. }
}sy.. p..

c_ Triangle : pu.. Shape {
pu..
  in. getArea r_ (width * height) / 2sy.. p.. }
}sy.. p..

in. main(v..) {
  Rectangle Rectsy.. p..
  Triangle Trisy.. p..

  Rect.setWidth(5)sy.. p..
  Rect.setHeight(7)sy.. p..

  // Print the area of the object.
  c__ __  "Total Rectangle area: " __  Rect.getArea() __  e..

  Tri.setWidth(5)sy.. p..
  Tri.setHeight(7)sy.. p..

  // Print the area of the object.
  c__ __  "Total Triangle area: " __  Tri.getArea() __  e..

  r_ 0sy.. p..
}
