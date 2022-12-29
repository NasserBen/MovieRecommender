#include "gtest/gtest.h"
#include "gmock/gmock.h"
#include "../src/movie.cpp"
#include "../src/movieList.cpp" 
#include "../src/directorList.cpp"
#include "../src/genreList.cpp"
#include "../src/recList.cpp"

TEST(movieTests, testMovieTitle) {
    Movie *movie = new Movie("1","Tangled","The magically long-haired Rapunzel has spent her entire life in a tower but now that a runaway thief has stumbled upon her she is about to discover the world for the first time and who she really is.","Nathan Greno","Musical","2010","7.7");
    EXPECT_EQ (movie->getTitle(),"Tangled");
}

TEST(movieTests, testMovieDir){
    Movie *movie = new Movie("2","Interstellar","A team of explorers travel through a wormhole in space in an attempt to ensure humanity's survival.","Christopher Nolan","Sci-fi","2014","8.6");
    EXPECT_EQ(movie->getDirector(), "Christopher Nolan");
}

TEST(movieTests, testMovieGenre){
    Movie *movie = new Movie("3","The Prestige","After a tragic accident two stage magicians in 1890s London engage in a battle to create the ultimate illusion while sacrificing everything they have to outwit each other.","Christopher Nolan","Sci-fi","2006","8.5");
    EXPECT_EQ(movie->getGenre(), "Sci-fi");
}

TEST(movieTests, testMovieReleaseDate){
    Movie *movie = new Movie("4", "Psycho","A Phoenix secretary embezzles $40000 from her employer's client goes on the run and checks into a remote motel run by a young man under the domination of his mother.","Alfred Hitchcock","Horror","1960","8.5");
    EXPECT_EQ(movie->getReleaseDate(), "1960");
}

TEST(movieTests, testMovieRating){
    Movie *movie = new Movie("5", "The Thing","A research team in Antarctica is hunted by a shape-shifting alien that assumes the appearance of its victims.","John Carpenter","Horror","1982","8.2");
    EXPECT_EQ(movie->getRating(),"8.2");
}

TEST(movieTests, testMovieList) {
    EXPECT_NO_THROW (MovieList *mList = new MovieList());
}

TEST(movieTests, testDirList){
    EXPECT_NO_THROW (DirectorList *dir = new DirectorList("Christopher Nolan"));
}

TEST(movieTests, testGenreList){
    EXPECT_NO_THROW (GenreList *g = new GenreList("Fantasy"));
}

TEST(movieTests, testRecList){
    EXPECT_NO_THROW (RecList *r = new RecList());
}

int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}