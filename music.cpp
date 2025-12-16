/*
 * Media class
 * 
 * This implements the base class for all types of media such as:
 *   - Music
 *      - title, artist, year, duration, publisher
 *   - Movies
 *      - title, director, year, duration, rating
 *   - Video games
 *      - title, year, publisher, rating
 */

#include <iostream>
#include <cstring>
#include "media.h"

using namespace std;

Media::Media(){
    title = new char[50];
    title[0] = '\0'; // string empty

    year = 0; // set year at 0.
}

char* Media::getTitle(){
    return title;
}

int Media::getYear(){
    return year;
}
