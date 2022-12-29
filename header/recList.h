#ifndef RECLIST_H
#define RECLIST_H

#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include "movie.h"

using namespace std;

class RecList { 
    private:
        vector<Movie> recList;
    public:
        void addToRecList(Movie);
        void printRecList();
};
#endif