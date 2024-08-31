#ifndef _MOVIE_H_
#define _MOVIE_H_

#include <string>

class Movie 
{
private:
    std::string name;  // name of movie
    std::string rating; // rating of movie
    int watched; // number of times the movie has been watched

public:
    // constructor with 3 attributes
    Movie(std::string name, std::string rating, int watched);

    // copy-constructor
    Movie(const Movie &source);

    // destructor
    ~Movie();

    // getters and setters
    std::string get_name() const { return name; }
    void set_name(std::string name) { this->name = name; }

    std::string get_rating() const { return rating; }
    void set_rating(std::string rating) { this->rating = rating; }

    int get_watched() const { return watched; }
    void set_watched(int watched) { this -> watched = watched; }
    

    // method to increment the watch count of a movie object
    void increment_watched() { ++watched; }

    // method to display the movies
    void display() const;

};

#endif // _MOVIE_H_