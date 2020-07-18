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
  v.. in. getArea() _ 0sy.. pause
  v.. setWidth(in. w) { width _ wsy.. pause }

  v.. setHeight(in. h) { height _ hsy.. pause }

pr..
  in. widthsy.. pause
  in. heightsy.. pause
}sy.. pause

// Derived classes
c_ Rectangle : pu.. Shape {
pu..
  in. getArea r_ (width * height)sy.. pause }
}sy.. pause

c_ Triangle : pu.. Shape {
pu..
  in. getArea r_ (width * height) / 2sy.. pause }
}sy.. pause

in. main(v..) {
  Rectangle Rectsy.. pause
  Triangle Trisy.. pause

  Rect.setWidth(5)sy.. pause
  Rect.setHeight(7)sy.. pause

  // Print the area of the object.
  c__ __  "Total Rectangle area: " __  Rect.getArea() __  e..

  Tri.setWidth(5)sy.. pause
  Tri.setHeight(7)sy.. pause

  // Print the area of the object.
  c__ __  "Total Triangle area: " __  Tri.getArea() __  e..

  r_ 0sy.. pause
}
