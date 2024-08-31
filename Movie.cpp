#include <iostream>
#include "Movie.h"

// constructor
Movie::Movie(std::string name, std::string rating, int watched)
    : name(name), rating(rating), watched(watched) {
    }

// copy constructor
Movie::Movie(const Movie &source)
    : Movie{source.name, source.rating, source.watched} {
    }

// destructor
Movie::~Movie() {
}

/******************************************
 * Method of a movie object
 * It displays the attributes of the object.
 ******************************************/
void Movie::display() const {
    std::cout << name << ", " << rating << ", " << watched << std::endl;
}