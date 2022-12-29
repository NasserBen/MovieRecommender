#include "../header/genreList.h"

GenreList::GenreList(string g) 
{
    this->genre = g;
    for (int i = 0; i < movieList.size(); i++) 
    {
        if (movieList[i].getGenre() == g) 
        {
             genreList.push_back(movieList[i]);
        }
    }
}

void GenreList::printGenreList() 
{   
    for (int i = 0; i < genreList.size(); i++) 
    {
        genreList[i].printAttributes();
        cout << endl;
    }
};