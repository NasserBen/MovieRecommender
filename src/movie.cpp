#include "../header/movie.h"

Movie::Movie(string id, string title, string description, string director, string genre, string releaseDate, string rating) {
    this->id = id;
    this->title = title;
    this->description = description;
    this->genre = genre; 
    this->director = director;
    this->releaseDate = releaseDate;
    this->rating = rating;
}

void Movie::printAttributes() {
    cout << "\nMovie Id: " << id << endl;
    cout << "Movie Title: " << title << endl;
    cout << "Description: " << description << endl;
    cout << "Director: " << director << endl;
    cout << "Genre: " << genre << endl;
    cout << "Release Date: " << releaseDate << endl;
    cout << "Movie Rating: " << rating << endl;
}

// Setters
void Movie::setId(string i) { id = i; }
void Movie::setTitle(string t) { title = t; }
void Movie::setDescription(string d) { description = d; }
void Movie::setGenre(string g) { genre = g; }
void Movie::setDirector(string d) { director = d; }
void Movie::setReleaseDate(string r) { releaseDate = r; }
void Movie::setRating(string r) { rating = r; }

// Getters
string Movie::getId() { return id; }
string Movie::getTitle() { return title; }
string Movie::getDescription() { return description; }
string Movie::getDirector() { return director; }
string Movie::getGenre() { return genre; }
string Movie::getReleaseDate() { return releaseDate; }
string Movie::getRating() { return rating; }