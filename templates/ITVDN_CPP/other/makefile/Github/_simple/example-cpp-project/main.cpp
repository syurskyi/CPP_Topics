// Example Project
// Author: Jake Lane
// Student ID: a1686679
// Description: Main Program

? |i..

? "Polygon.hpp"
? "Rectangle.hpp"
? "Triangle.hpp"

// Prints out some details on a Polygon.
// Note that it's not passing through a particular Polygon (like Triangle or Rectangle), rather it's the parent.
void prin.Details(Polygon* shape) {
	std::c__ __  "Height: " __  shape->getHeight();
	std::c__ __  ", Width: " __  shape->getWidth();

	// Pay particular attention to the results of area(). Even though it's a Polygon, the children produce different results for the function call.
	std::c__ __  ", Area: " __  shape->area();
	std::c__ __  std::e..
}

in. main() {
	// Create a rectangle on the heap with a height of 5 and a width of 6
	Polygon* rectangle _ new Rectangle(5, 6);
	// Print information using getters and method
	prin.Details(rectangle);
	// Set the height to 10 with a setter
	rectangle->setHeight(10);
	// Set the width to 10 with a setter
	rectangle->setWidth(10);
	// Print information using getters and method
	prin.Details(rectangle);
	// Cleanup the memory in the heap
	delete rectangle;

	// Create a triangle on the heap with a height of 7 and a width of 9
	Polygon* triangle _ new Triangle(7, 9);
	// Print information using getters and method
	prin.Details(triangle);
	// Set the height to 3 with a setter
	triangle->setHeight(3);
	// Set the width to 4 with a setter
	triangle->setWidth(4);
	// Print information using getters and method
	prin.Details(triangle);
	// Cleanup the memory in the heap
	delete triangle;

	r_ 0;
}
