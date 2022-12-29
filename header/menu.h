#ifndef MENU_H
#define MENU_H

#include "../header/movieList.h"
#include "../header/movie.h"
#include "../header/genreList.h"
#include "../header/recList.h"

#include <vector>
#include <iostream>
#include <string>
#include <fstream>

using namespace std;

class Menu {     
    public:
        void displayMainMenu();
        void displayMovieDB();
        void displayGenreMenu();
        void displayMoviesByGenre();
        void genreChoice(string);
        void displayMoviesByDirector();
        void displayMoviesByRating();
        void displayRecommendations(RecList&);                   
};
#endif