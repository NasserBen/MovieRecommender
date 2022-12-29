[![Open in Visual Studio Code](https://classroom.github.com/assets/open-in-vscode-c66648af7eb3fe8bc4f294546bfd86ef473780cde1dea487d3c4ff354943c9ae.svg)](https://classroom.github.com/online_ide?assignment_repo_id=8878294&assignment_repo_type=AssignmentRepo)

#  Movie Recommender
 
 > Authors: \<[Nasser Ben](https://github.com/nasserben)\>
 >          \<[Evan Fang](https://github.com/evanzfang)\>
 >          \<[Maliha Fatima](https://github.com/mfatima1)\>
 >          \<[Joy Haddad](https://github.com/JoyHaddad)\>


## Project Description
 > * C++, a general object oriented programming language.
 > * Visual Studio Code, IDE
 > * Github, version control using git.

 > * Input: User choice to input their favorite movies of a list of movies. 
 > * Output: A list of movies generated categorized by genres based on user input.

 > * A list of movies gets organized and displayed into different categories and subcategories. 
 > * The user will have the option to input their favorite movies to the console and the application 
 > * will recommend movies to the user based on the genres of movies they provided.

## Class Diagram
![alt text](https://cdn.discordapp.com/attachments/1024073313024217178/1047261973512994866/Movie-Rec-Class-Diagram.jpg)

The Movie class contains strings with attributes of the movies in the database. These attributes include a unique id number, movie title, description, director, genre, rating and release date. It also contains a function that prints all these attributes. The movieList class takes all the movie attributes from the movie database (in the csv file) and passes them all into a Movie class object. The object then gets pushed into a Movie vector called movieList. The print function iterates until the end of the movieList vector and calls the Movie class’ print attributes function. The genreList class inherits from the movieList class and takes a string for the genre that the user will input. It then takes all the movies from that genre and pushes them into a genre list vector. The directorList class also inherits from the movieList class and takes a string for the director that the user will input. It then takes all the movies that have that director and pushes them into a director list vector. The recMovieList class takes the movies that are recommended to the user and pushes them into a vector. The vector stores recommended lists for the user. The menu class contains the functions that get called when the user navigates through the movie recommender. 
 
 ## Screenshots
 >Tests and Valgrind:
 ![alt text](https://cdn.discordapp.com/attachments/1024073313024217178/1047268992097714186/tests.png)
 >Program Output Examples:
 ![alt text](https://cdn.discordapp.com/attachments/1024073313024217178/1047271412215337071/input-output.png)
 ## Installation/Usage
 > You will first need to launch Visual Studio Code and click on “Clone Git Repository.” You will then need to paste the link of the git repository <https://github.com/cs100/final-project-nben002-efang010-jhadd010-mfati003.git> and all the files from the master branch will be cloned. You will then need to open the terminal and compile the program with the following command ```g++ -o movie-recommender src/*.cpp``` and finally, run the executable with the command ```./movie-recommender``` The program will then output a menu with options to view the full movie database, view movies filtered by genre, director or rating, get movie recommendations and to add a movie to the database.
 

 ## Testing
 > To test our code, we used test driven development. So we implemented unit testing with the google test submodule to test our classes. We also utilized exception handling with try, throw and catch statements to test for input validation from the user. With unit testing, we used tests that would make sure we get the correct expected values with the Movie class and we also used tests that would make sure no exceptions were being thrown in the movieList, genreList and directorList classes. To run the tests, the run the command ```cmake .``` followed by ```make``` and finally run the executable ```./bin/runAllTests``` This will output whether the tests pass or fail.
 
 
