#include <iostream>
#include "Movies.h"

// Function prototypes
void add_movie(Movies &movies, std::string name, std::string rating, int watched); 
void increment_watched(Movies &movies, std::string name);

/***************************
 * helper function
 * add_movie
 * Input: 
 *  - Movies &movies: reference to movies vector object
 *  - name: name of the movie, that shall be added
 *  - rating: rating of the movie, that shall be added
 *  - watched: watch counter of the movie, that shall be added
 * 
 * The function prints the name of the added movie, 
 * if it is not yet part of the collection movies
 * and adds the movie to the collection
 * Otherwise the movie is not added ad the function
 * prints 'already exists'.
 *************************/
void add_movie(Movies &movies, std::string name, std::string rating, int watched) {
    if (movies.add_movie(name, rating, watched)) {
        std::cout << name << " added" << std::endl;
    } else {
        std::cout << name << " already exists" << std::endl;
    }
}

/*****************************
 * helper function
 * increment_watched
 * Input:
 *  - Movies &movies: reference to movies vector object
 *  - name: name of the movie, that shall be added
 * 
 * If a movie with 'name' exists in the collection 'movies', 
 * the watch count is incremented.
 * To increment the counter, the function calls the method 'movies.add_movie'
 * Else, no watch count is incremented and 'not found' is 
 * printed out.
 *****************************/
void increment_watched(Movies &movies, std::string name) {
    if (movies.increment_watched(name)) {
        std::cout << name << " watch incremented" << std::endl;
    } else {
        std::cout << name << " not found" << std::endl;
    }
}

/***********************************
 * Call of test cases:
 * - create and object movies
 * - display the empty object
 * - add movies to the object 
 * - display the now non-empty object 
 * - try to add a movie that exists already
 * - increment the watch count of of movies that exist
 * - increment the watch count of of movies that do not exist
 ***********************************/
int main() {

    // create movies object
    Movies my_movies;

    // display the movies object
    my_movies.display();

    add_movie(my_movies, "Big", "PG-13", 2);
    add_movie(my_movies, "Star Wars", "PG", 5);
    add_movie(my_movies, "Cinderella", "PG", 7);

    my_movies.display();

    add_movie(my_movies, "Cinderella", "PG", 7);
    add_movie(my_movies, "Ice Age", "PG", 12);

    my_movies.display();

    increment_watched(my_movies, "Big");
    increment_watched(my_movies, "Ice Age");

    my_movies.display();

    increment_watched(my_movies, "XXX");

    return 0;
}