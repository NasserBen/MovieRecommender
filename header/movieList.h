#ifndef MOVIELIST_H
#define MOVIELIST_H

#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include <sstream>
#include "movie.h"

using namespace std;

class MovieList { 
    public:
        vector<Movie> movieList;
        MovieList();  
        void printMovieList();
        void printMovieTitlesAndIds();
        string nextMovieId();
};
#endif