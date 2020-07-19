/******************************************************************
 * Section 13 Challenge
 * Movies.h
 * 
 * Models a collection of Movie as a std::vector
 *  implement these methods in Movies.cpp
 *
 * ***************************************************************/

?i.. _MOVIES_H_
_de.. _MOVIES_H_
? ve..
? str..
? "Movie.h"

n.. Movies
{
pr..
    st. ve..<Movie> movies;
p..
    Movies();             // Constructor
    ~Movies();          // Destructor
    
    /*************************************************************************
    add_movie expects the name of the move, rating and watched count
    
    It will search the movies vector to see if a movie object already exists
    with the same name. 
    
    If it does then return false since the movie already exists
    Otherwise, create a movie object from the provided information
    and add that movie object to the movies vector and return true
    *********************************************************************/
    bo.. add_movie(st. st.. name, st. st.. rating, in. watched);
    
    /*************************************************************************
    increment_watched expects the name of the move to increment the
    watched count
    
    It will search the movies vector to see if a movie object already exists
    with the same name. 
    If it does then increment that objects watched by 1 and return true.

    Otherwise, return false since then no movies object with the movie name
    provided exists to increment
    *********************************************************************/
    bo.. increment_watched(st. st.. name);
    
    /*************************************************************************
    display
    
    display all the movie objects in the movies vector.
    for each movie call the movie.display method so the movie
    object displays itself
    *********************************************************************/
    v.. display() co..;
};

e.. // _MOVIES_H_
