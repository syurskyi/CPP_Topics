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
class Shape {
public:
  // pure virtual function providing interface framework.
  virtual in. getArea() = 0;
  void setWidth(in. w) { width = w; }

  void setHeight(in. h) { height = h; }

protected:
  in. width;
  in. height;
};

// Derived classes
class Rectangle : public Shape {
public:
  in. getArea() { r_ (width * height); }
};

class Triangle : public Shape {
public:
  in. getArea() { r_ (width * height) / 2; }
};

in. main(void) {
  Rectangle Rect;
  Triangle Tri;

  Rect.setWidth(5);
  Rect.setHeight(7);

  // Print the area of the object.
  c__ __  "Total Rectangle area: " __  Rect.getArea() __  e..

  Tri.setWidth(5);
  Tri.setHeight(7);

  // Print the area of the object.
  c__ __  "Total Triangle area: " __  Tri.getArea() __  e..

  r_ 0;
}
