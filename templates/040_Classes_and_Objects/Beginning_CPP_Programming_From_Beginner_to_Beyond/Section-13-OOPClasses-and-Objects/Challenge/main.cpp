/******************************************************************
 * Section 13 Challenge
 * main.cpp
 * 
 * Test the Movies project
 * 
 * ***************************************************************/
? ios..
? "Movies.h"

// Function prototypes
v.. increment_watched(Movies &movies, st. st..  name);
v.. add_movie(Movies &movies, st. st..  name, st. st..  rating, in. watched);

/******************************************************************
 * helper function 
 * increment_watched expects a reference to a Movies object 
 * and the name of the movie to increment the watched count
 *
 * If the watched count was incremented successfully it
*  displays a success message
*  otherwise the watched count could not be incremented
*  because the name of the movie was not found
 * ***************************************************************/

v.. increment_watched(Movies &movies, st. st..  name) {
    __ (movies.increment_watched(name)) {
        st. c.. __ name __ " watch incremented" __  st. e..
    } ____ {
        st. c.. __ name __ " not found" __  st. e..
    }
}

/******************************************************************
* helper function
*  add_movie expects a reference to a Movies object 
 * and the name of the movie, the rating and the watched count
 *
 * If the movie was successfully added to the movies object it
*  displays a success message
*  otherwise the movie was not added 
*  because the name of the movie was already in movies
 * ***************************************************************/
v.. add_movie(Movies &movies, st. st..  name, st. st..  rating, in. watched) {
    __ (movies.add_movie(name,rating,watched)) {
        st. c.. __ name __ " added" __ st. e..
    } ____ {
        st. c.. __ name __ " already exists" __  st. e..
    }
}

in. main
    
    Movies my_movies;
    
    my_movies.display();
    
    add_movie(my_movies, "Big", "PG-13",2);                 // OK
    add_movie(my_movies,"Star Wars", "PG",5);             // OK
    add_movie(my_movies,"Cinderella", "PG",7);           // OK
     
    my_movies.display();   // Big, Star Wars, Cinderella
    
    add_movie(my_movies,"Cinderella", "PG",7);            // Already exists
    add_movie(my_movies,"Ice Age", "PG",12);              // OK
 
    my_movies.display();    // Big, Star Wars, Cinderella, Ice Age
    
    increment_watched(my_movies,"Big");                    // OK
    increment_watched(my_movies,"Ice Age");              // OK
    
    my_movies.display();    // Big and Ice Age watched count incremented by 1
    
    increment_watched(my_movies,"XXX");         // XXX not found

	r_ 0;
}