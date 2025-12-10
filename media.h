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
 
#ifndef MEDIA_H // https://www.geeksforgeeks.org/cpp/header-files-in-c-c-with-examples/ (Used the "User-Defined header files")
                // if media.h not defined...
                
#define MEDIA_H // define. Else continue (Don't want a redefinition).
                
#include <iostream>
#include <cstring>

using namespace std;

class Media
{
    public:
        Media() {}

        virtual ~Media() {}

        char* getTitle();
        int getYear();

    private:
        char* title;
        int year;
};

#endif
