/*
 * Media class
 * 
 * This defines the base class for all types of media such as:
 *   - Music
 *      - title, artist, year, duration, publisher
 *   - Movies
 *      - title, director, year, duration, rating
 *   - Video games
 *      - title, year, publisher, rating
 */
#include <iostream>
#include <cstring>

using namespace std;

class Media
{
    public:
    Media();

    virtual ~Media()

    // methods that are shared by all types of media such as 
    char* getTitle()
    int getYear()

    private:
    char* title[100];
    int year;
};
