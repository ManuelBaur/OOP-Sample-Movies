#include <iostream>
#include "Movies.h"

// Constructor
Movies::Movies() {
}

// Destructor
Movies::~Movies() {
}

/**********************************************
 * Method to add a movie to a movies object 
 * 
 * Input: 
 *  - name: name of the movie, that shall be added
 *  - rating: rating of the movie, that shall be added
 *  - watched: watch counter of the movie, that shall be added
 * 
 * Loop through all 'movie' objects in 'movies' 
 * 
 * If the movie exists: return is false
 * Else: 
 *  - the movie is being added to the collection 'movies'
 *  - return is true
 *********************************************/
bool Movies::add_movie(std::string name, std:: string rating, int watched) {

    for (const Movie &movie:movies) {
        if (movie.get_name() == name) {
            return false; 
        }
    }
    Movie temp {name, rating, watched};
    movies.push_back(temp);

    return true;
}

/**********************************************
 * Method to increment watched if movie is part of movies object 
 * 
 * Input: name of a movie, which watch-count shall be incremented
 * 
 * Loop trough all 'movie' objects in 'movies'
 * 
 * If the movie with name exists: 
 *  - call method increment_watched of the Movie class
 *  - return is true
 * Else: return is false
 *********************************************/
bool Movies::increment_watched(std::string name) {

    for (Movie &movie:movies) {
        if (movie.get_name() == name) {
            movie.increment_watched();
            return true;
        }
    }
    return false; 
}

/*********************************
 * display method
 * if the object movies is emtpy: 'Sorry, ...'
 * else: loop over all movie-elements in movies 
 *  and call the method movie.display
********************************/
void Movies::display() const {
    if (movies.size() == 0) {
        std::cout << "Sorry, no movies to display\n" << std::endl; 
    } else {
        std::cout << "\n===============================" << std::endl;
        for (const Movie &movie:movies) {
            movie.display();
        }
        std::cout << "\n===============================" << std::endl;
    }

}