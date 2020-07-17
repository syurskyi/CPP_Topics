/******************************************************************
 * Section 13 Challenge Solution
 * Movie.cpp
 * 
 * Models a Movie with the following atttributes
 * 
 * std::string name - the name of the movie 
 * std::string rating - G, PG, PG-13, R
 * int watched - the number of times you've watched the movie
 * ***************************************************************/
? ios..
? "Movie.h"

// Implemention of the construcor

Movie::Movie(st. st..  name, st. st..  rating, in. watched)
    : name(name), rating(rating), watched(watched)  {
}

//Implemention of the copy constructor
Movie::Movie(co.. Movie &source)
    : Movie{source.name, source.rating, source.watched} {
}

// Implementation of the destructor
Movie::~Movie
}

// Implementation of the display method
// should just insert the movie attributes to cout

v.. Movie::display() co.. {
    st. c.. __ name __ ", " __ rating __  ", " __ watched  __   st. e..
}
