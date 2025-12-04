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
    title = new char[80];
    year = 0;
}

void Media::Print(){
    return media;
    return year;
}
