/******************************************************************
 * Section 13 Challenge
 * Movie.h
 * 
 * Models a Movie with the following atttributes
 * 
 * std::string name - the name of the movie 
 * std::string rating - G, PG, PG-13, R
 * int watched - the number of times you've watched the movie
 * ***************************************************************/
?i.. _MOVIE_H_
_de.. _MOVIE_H_

? str..

n.. Movie
{
pr..
    st. st.. name;   // the name of the movie
    st. st.. rating;   // the movie rating G,PG, PG-13, R
    in. watched;          // the number of times you've watched the movie
p..
    // Constructor - expects all 3 movie attributes
    Movie(st. st.. name, st. st.. rating, in. watched);
    
    // Copy constructor 
    Movie(co.. Movie &source);
    
    // Destructor
    ~Movie();
    
    // Basic getters and setters for private attributes
    // implement these inline and watch your const-correctness
    
    v.. set_name(st. st.. name) {this->name = name; }
    st. st.. get_name() co.. { ?  name; }
    
    v.. set_rating(st. st.. rating) {this->rating = rating; }
    st. st.. get_rating() co.. { ?  rating; }
    
    v.. set_watched(in. watched) {this->watched = watched; }
    in. get_watched() co.. { ?  watched; }
    
    // Simply increment the watched attribute by 1
    v.. increment_watched() { ++watched; }
    
    // simply displays the movie information ex.) Big, PG-13, 2
    v.. display() co..;
};

e.. // _MOVIE_H_
