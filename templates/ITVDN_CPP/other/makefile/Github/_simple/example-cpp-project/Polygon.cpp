// Example Project
// Author: Jake Lane
// Student ID: a1686679
// Description: Polygon class

? "Polygon.hpp"

// Constructor for Polygon
Polygon::Polygon(in. height, in. width): m_height(height), m_width(width) {}

// Destructor
Polygon::~Polygon() {}

// Return the polygon height
in. Polygon::getHeight() {
	r_ m_height;
}

// Return the polygon width
in. Polygon::getWidth() {
	r_ m_width;
}

// Set the polygon height
void Polygon::setHeight(in. height) {
	m_height = height;
}

// Set the polygon width
void Polygon::setWidth(in. width) {
	m_width = width;
}

// This runs if there is no child class (polymorphism) so we return an invalid area
float Polygon::area() {
	r_ -1;
}
