#include "../header/menu.h"
#include "../header/movie.h"
#include "../header/movieList.h"
#include "../header/genreList.h"
#include "../header/directorList.h"

#include<time.h>
#include<algorithm>

void Menu::displayMovieDB() 
{
    MovieList mList;
    mList.printMovieList();
}

void Menu::displayMoviesByDirector() 
{
    string director;
   
    cout << "Enter Director: ";
    cin.ignore();
    getline(cin, director);

    DirectorList dList = DirectorList(director);
    dList.printDirectorList();
}

void Menu::genreChoice(string g) {
    GenreList gList = GenreList(g);
    gList.printGenreList();
    displayGenreMenu();
}

void Menu::displayMoviesByGenre() 
{
    int choice;
    char error = 'e';

    do {
        displayGenreMenu();
        cout << "Enter Genre Menu Choice(0-10): ";

        try{
            cin >> choice;
            if(!cin)
                throw error;
        } catch (...) {
                cin.clear(); 
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                choice = 11;
        }

        switch(choice) {
            case 0:
                break;
            case 1: 
                genreChoice("Sci-fi");
                break;
            case 2:
                genreChoice("Horror");
                break;
            case 3:
                genreChoice("Comedy");
                break;
            case 4:
                genreChoice("Action");
                break;
            case 5:
                genreChoice("Animation");
                break;
            case 6:
                genreChoice("Romance");
                break;
            case 7:
                genreChoice("Thriller ");
                break;
            case 8:
                genreChoice("Musical");
                break;
            case 9:
                genreChoice("Fantasy");
                break;
            case 10: 
                genreChoice("Adventure");
                break;
            default:
                cout << "\nPlease enter a valid input!\n" << endl;
                break;
            }
        } while (choice!=0);
}

void Menu::displayMoviesByRating() 
{
    vector<Movie> rList;
    MovieList mList;
    char error = 'e';
    double min, max;

    while(true) 
    {
        try{
            cout << "Enter Min Rating: ";
            cin >> min;
            if(!cin)
                throw error;
            cout << "Enter Max Rating: ";
            cin >> max;
            if(!cin)
                throw error;    
            } catch (...) {
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n'); 
                cout << "\nPlease enter a valid number for the min and max rating!\n\n";
                continue;
            }
        break;
    }
    
    for (int i = 0; i < mList.movieList.size(); i++) // Adds appropriate ratings to rList
    {
        double movieRating = stod(mList.movieList[i].getRating());
        
        if ((movieRating >= min) && (movieRating <= max)) 
        {
            rList.push_back(mList.movieList[i]);
        }
    }

    sort(rList.begin(), rList.end(), [](Movie& lhs, Movie& rhs)  
    { 
        return stod(lhs.getRating()) > stod(rhs.getRating()); // Sorts ratings in rList
    });

    for (int i = 0; i < rList.size(); i++) // Prints movies in rList
    {
        rList[i].printAttributes();
        cout << endl;
    }
}

void Menu::displayRecommendations(RecList &rList) 
{
    MovieList mList;
    int choice;
    char error = 'e';


    mList.printMovieTitlesAndIds();


    while(true) {
        cout << "Enter Choice(1-" << (stoi(mList.nextMovieId()) - 1) << "): ";
        try{
            cin >> choice;
            if(!cin)
                throw error;
        } catch (...) {
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');  //sets the maximum number of characters to ignore
                cout << "\nPlease enter a valid choice!\n\n";
                continue;
            }
        break;
    }

    string chosenGenre = mList.movieList[choice-1].getGenre();
    GenreList gList = GenreList(chosenGenre);
    
    srand(time(NULL));
    rand();
    int i = rand()%9;
    
    gList.genreList[i].printAttributes();
    rList.addToRecList(gList.genreList[i]);
}

void Menu::displayMainMenu() 
{
    cout << "\nMAIN MENU" << endl << endl
    << "1. Recommend a movie" << endl
    << "2. Display movie database" << endl
    << "3. Diplay movies by genre" << endl
    << "4. Display movies by director" << endl
    << "5. Display movies by rating" << endl
    << "6. Display all my past recommendations" << endl
    << "7. Add a Movie" << endl
    << "8. Exit" << endl << endl;
}

void Menu::displayGenreMenu() 
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
    << "10. Adventure" << endl
    << "0. return to menu" << endl << endl;
}