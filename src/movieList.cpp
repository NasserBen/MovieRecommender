#include "../header/movieList.h"

MovieList::MovieList() 
{
    fstream inFile;
    inFile.open("movieDB.csv");

    while(!inFile.eof())
    {
        string movieId;
        string title;
        string description;
        string director;
        string genre;
        string releaseDate;
        string rating;

        getline(inFile, movieId, ',');
        getline(inFile, title, ',');
        getline(inFile, description, ',');
        getline(inFile, director, ',');
        getline(inFile, genre, ',');
        getline(inFile, releaseDate, ',');
        getline(inFile, rating, '\n');

        Movie movie = Movie(movieId, title, description, director, genre, releaseDate, rating);
        movieList.push_back(movie);
    }

    inFile.close();
}

string MovieList::nextMovieId() 
{
    string nextId, prevId;

    prevId = movieList[movieList.size()-1].getId();
    int temp1 = stoi(prevId) + 1;

    return nextId = to_string(temp1);
}

void MovieList::printMovieList() 
{
    for (int i = 0; i < movieList.size(); i++) 
    {
        movieList[i].printAttributes();
        cout << endl;
    }
};

void MovieList::printMovieTitlesAndIds() 
{
    for (int i = 0; i < movieList.size(); i++) 
    {
        cout << " " << movieList[i].getId() << ")" << movieList[i].getTitle() << endl;
    }
    cout << endl;
}