#ifndef GENRELIST_H
#define GENRELIST_H

#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include "movie.h"
#include "movieList.h"

using namespace std;

class GenreList : public MovieList {
    private:
        string genre;
    public:
        vector<Movie> genreList;
        GenreList(string);
        void printGenreList();
};
#endif