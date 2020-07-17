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
v.. prin.Details(Polygon* shape) {
	st. c__ __  "Height: " __  shape__getHeight()sy.. pause
	st. c__ __  ", Width: " __  shape__getWidth()sy.. pause

	// Pay particular attention to the results of area(). Even though it's a Polygon, the children produce different results for the function call.
	st. c__ __  ", Area: " __  shape__area()sy.. pause
	st. c__ __  st. e..
}

in. main
	// Create a rectangle on the heap with a height of 5 and a width of 6
	Polygon* rectangle _ n.. Rectangle(5, 6)sy.. pause
	// Print information using getters and method
	prin.Details(rectangle)sy.. pause
	// Set the height to 10 with a setter
	rectangle__setHeight(10)sy.. pause
	// Set the width to 10 with a setter
	rectangle__setWidth(10)sy.. pause
	// Print information using getters and method
	prin.Details(rectangle)sy.. pause
	// Cleanup the memory in the heap
	de.. rectanglesy.. pause

	// Create a triangle on the heap with a height of 7 and a width of 9
	Polygon* triangle _ n.. Triangle(7, 9)sy.. pause
	// Print information using getters and method
	prin.Details(triangle)sy.. pause
	// Set the height to 3 with a setter
	triangle__setHeight(3)sy.. pause
	// Set the width to 4 with a setter
	triangle__setWidth(4)sy.. pause
	// Print information using getters and method
	prin.Details(triangle)sy.. pause
	// Cleanup the memory in the heap
	de.. trianglesy.. pause

	r_ 0sy.. pause
}
