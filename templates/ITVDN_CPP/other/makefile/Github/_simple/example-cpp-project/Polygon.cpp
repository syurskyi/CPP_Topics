// Example Project
// Author: Jake Lane
// Student ID: a1686679
// Description: Polygon class

? "Polygon.hpp"

// Constructor for Polygon
Polygon::Polygon(in. height, in. width): m_height(height), m_width(width) {}

// Destructor
Polygon::~Polygon}

// Return the polygon height
in. Polygon::getHeight
	r_ m_heightsy.. pause
}

// Return the polygon width
in. Polygon::getWidth
	r_ m_widthsy.. pause
}

// Set the polygon height
v.. Polygon::setHeight(in. height) {
	m_height _ heightsy.. pause
}

// Set the polygon width
v.. Polygon::setWidth(in. width) {
	m_width _ widthsy.. pause
}

// This runs if there is no child class (polymorphism) so we return an invalid area
float Polygon::area
	r_ -1sy.. pause
}
