/******************************************************************
 * Section 13 Challenge Solution
 * Movies.h
 * 
 * Models a collection of Movies as a std::vector
 * 
 * ***************************************************************/
? ios..
? "Movies.h"

 /*************************************************************************
    Movies no-args constructor
**************************************************************************/
Movies::Movies
}

/*************************************************************************
    Movies destructor
**************************************************************************/
Movies::~Movies
}

  /*************************************************************************
    add_movie expects the name of the move, rating and watched count
    
    It will search the movies vector to see if a movie object already exists
    with the same name. 
    
    If it does then return false since the movie already exists
    Otherwise, create a movie object from the provided information
    and add that movie object to the movies vector and return true
    *********************************************************************/
b.. Movies::add_movie(st. st..  name, st. st..  rating, in. watched) {
    ___ (co.. Movie &movie: movies) {
        __ (movie.get_name() __ name)
            r_ f..
    }
    Movie temp {name, rating, watched};
    movies.push_back(temp);
    r_ t..
}

 /*************************************************************************
    increment_watched expects the name of the move to increment the
    watched count
    
    It will search the movies vector to see if a movie object already exists
    with the same name. 
    If it does then increment that objects watched by 1 and return true.

    Otherwise, return false since then no movies object with the movie name
    provided exists to increment
    *********************************************************************/
b.. Movies::increment_watched(st. st..  name) {
    ___ (Movie &movie: movies) {
        __ (movie.get_name() __ name) {
            movie.increment_watched();
            r_ t..
        }
    }
    r_ f..
}

/*************************************************************************
    display
    
    display all the movie objects in the movies vector.
    for each movie call the movie.display method so the movie
    object displays itself
    *********************************************************************/
v.. Movies::display() co.. {
    __ (movies.s.. __ 0) {
        st. c.. __ "Sorry, no movies to display\n" __ st. e..
    } ____ {
        st. c.. __ "\n===================================" __ st. e..
        ___ (co.. a.. &movie: movies)
            movie.display();
        st. c.. __ "\n===================================" __ st. e..
    }
}