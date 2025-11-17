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

#include <cstdio>
#include "media.h"

// default constructor for media which zeros out the title and year.
Media::Media()
{
    title[0] = '\0';
    year = 0;
}

// Print method for media which prints the title and year.
void Media::Print()
{
    printf( "Title: %s\n", title );
    printf( "Year: %d\n", year );
}
