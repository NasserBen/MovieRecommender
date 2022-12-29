#include "../header/utils.h"

void addMovieToDB() 
{
    string movieId, title, description, director, genre, releaseDate, rating;

    MovieList list;
    movieId = list.nextMovieId();

    cin.ignore();

    cout << "Enter Movie Title: ";
    getline(cin, title);
    cout << "Enter Movie Description: ";
    getline(cin, description);
    cout << "Enter Director Name: ";
    getline(cin, director);

    genreMenu();
    genre = chooseGenre();

    cin.ignore();
    cout << "Enter Release Date (year): ";
    getline(cin, releaseDate);
    cout << "Enter Rating: ";
    getline(cin, rating);

    ofstream file;
    file.open("movieDB.csv", ios_base::app);
    file << "\n" << movieId << "," << title << "," << description << "," << director 
    << "," << genre << "," << releaseDate << "," << rating;
    file.close();
}

string chooseGenre() 
{
    int choice;
    string genre;
    char error = 'e';

    do {
        cout << "Choose a genre(1-10): ";

        try{
            cin >> choice;
            if(!cin)
                throw error;
        } catch (...) {
                cin.clear(); 
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                choice = 0;
        }

        switch(choice) {
            case 1: 
                genre = "Sci-fi";
                break;
            case 2:
                genre = "Horror";
                break;
            case 3:
                genre = "Comedy";
                break;
            case 4:
                genre = "Action";
                break;
            case 5:
                genre = "Animation";
                break;
            case 6:
                genre = "Romance";
                break;
            case 7:
                genre = "Thriller ";
                break;
            case 8:
                genre = "Musical";
                break;
            case 9:
                genre = "Fantasy";
                break;
            case 10: 
                genre = "Adventure";
                break;
            default:
                cout << "\nPlease enter a valid input!\n" << endl;
                break;
        }
    } while(choice < 1||choice > 10);
    return genre;
}

void genreMenu()
{
    cout << "Display By Genre:" << endl << endl
    << "1. Sci-Fi" << endl
    << "2. Horror" << endl
    << "3. Comedy" << endl
    << "4. Action" << endl
    << "5. Animation" << endl
    << "6. Romance" << endl
    << "7. Thriller" << endl
    << "8. Musical" << endl
    << "9. Fantasy" << endl
    << "10. Adventure" << endl << endl;
}