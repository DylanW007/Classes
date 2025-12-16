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
 
#ifndef MEDIA_H // https://www.geeksforgeeks.org/cpp/header-files-in-c-c-with-examples/ (Used the "User-Defined header files") + learncpp.com/cpp-tutorial/header-guards/
                // if media.h not defined...
                
#define MEDIA_H // define. Else continue (Don't want a redefinition).
                
#include <iostream>
#include <cstring>

using namespace std;

class Media
{
    public:
        Media();
        virtual ~Media() {}
        
        char* getTitle();
        int getYear();
        
        virtual void Print();
        
    protected: // Protected allows child classes use the variables. (I originally had it as priavte).
              // https://www.w3schools.com/cpp/cpp_access_specifiers.asp
        char* title;
        int year;
};

#endif
