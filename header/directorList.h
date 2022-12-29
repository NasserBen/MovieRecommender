#ifndef DIRECTORLIST_H
#define DIRECTORLIST_H

#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include <algorithm>
#include "movie.h"
#include "movieList.h"

using namespace std;

class DirectorList : public MovieList {
    private:
        string director;
        vector<Movie> directorList;
    public:
        DirectorList(string);
        void printDirectorList();
};
#endif