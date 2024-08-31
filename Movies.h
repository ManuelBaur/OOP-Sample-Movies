#ifndef _MOVIES_H_
#define _MOVIES_H_

#include <vector>
#include <string>
#include "Movie.h"

class Movies
{
private:
    std::vector<Movie> movies;

public:
    // constructor
    Movies(); 

    // copy-constructor

    // destructor
    ~Movies(); 

    // getters and setters

    /**********************************************
     * Method to add a movie to a movies object 
     * 
     * If the movie exists: return is false
     * Else: return is true
     *********************************************/
    bool add_movie(std::string name, std:: string rating, int watched);

    /**********************************************
     * Method to increment watched if movie is part of movies object 
     * 
     * If the movie exists: return is true
     * Else: return is false
     *********************************************/
    bool increment_watched(std::string name);

    // method to display all movies in vector
    void display() const;

};

# endif // _MOVIES_H_