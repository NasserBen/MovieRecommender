#include "../header/recList.h"

void RecList::addToRecList(Movie movie) 
{
    recList.push_back(movie);
}

void RecList::printRecList() 
{
    for (int i = 0; i < recList.size(); i++) 
    {
        recList[i].printAttributes();
        cout << endl;
    }
};