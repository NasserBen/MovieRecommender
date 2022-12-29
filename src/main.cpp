#include "../header/menu.h"
#include "../header/movie.h"
#include "../header/movieList.h"
#include "../header/genreList.h"
#include "../header/directorList.h"
#include "../header/recList.h"
#include "../header/utils.h"

#include <iostream>
#include <limits>
#include <algorithm>

using namespace std;

int main() 
{
    int choice;
    char error = 'e';
    Menu menu;
    RecList rList;

    do 
    {
        menu.displayMainMenu();
        cout << "Enter Menu Choice(1-8): ";

        try 
        {
            cin >> choice;
            if(!cin)
                throw error;
        } catch (...) {
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');  //sets the maximum number of characters to ignore 
        }

        switch(choice)
        {
            case 1: // Recommend a movie
                menu.displayRecommendations(rList);
                break;
            case 2: // Display movie database
                menu.displayMovieDB();
                break;
            case 3: // Display movies by genre
                menu.displayMoviesByGenre();
                break;
            case 4: // Display movies by director
                menu.displayMoviesByDirector();
                break;
            case 5: // Display movies by rating
                menu.displayMoviesByRating();
                break;
            case 6: // Display all my past recommendations
                rList.printRecList();
                break;
            case 7: // Add a Movie
                addMovieToDB();
                break;
            case 8: // Exit
                break;
            default:
                cout << "\nPlease enter a valid menu option!" << endl;
                break;
        }
    } while (choice!=8);

  return 0;
}