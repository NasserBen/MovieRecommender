#ifndef MOVIE_H
#define MOVIE_H

#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Movie {
    private:
        string id, title, description, director, genre, releaseDate, rating;  
    public:
        Movie(string, string, string, string, string, string, string);

        void setId(string);
        void setTitle(string);
        void setDescription(string);
        void setDirector(string);
        void setGenre(string);
        void setReleaseDate(string);
        void setRating(string);
        
        string getId();
        string getTitle();
        string getDescription();
        string getDirector();
        string getGenre();
        string getReleaseDate();
        string getRating();

        void printAttributes();
};

#endif