#include "../header/directorList.h"

DirectorList::DirectorList(string d)
{
    this->director = d;
    transform(d.begin(), d.end(), d.begin(), ::toupper);
    for (int i = 0; i < movieList.size(); i++) 
    {
        string currDir = movieList[i].getDirector();
        transform(currDir.begin(), currDir.end(), currDir.begin(), ::toupper);
        if (currDir == d) 
        {
             directorList.push_back(movieList[i]);
        }
    }
}

void DirectorList::printDirectorList() 
{   
    for (int i=0; i < directorList.size();i++) 
    {
        directorList[i].printAttributes();
        cout << endl;
    }
};