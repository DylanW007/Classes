/*
 * Media class
 * 
 * This implements the base class for all types of media such as:
 *   - Music
 *      - title, year, artist, duration, publisher
 *   - Movies
 *      - title, year, director, duration, rating
 *   - Video games
 *      - title, year, publisher, rating
 */

#include <iostream>
#include <cstring>
#include "media.h"

using namespace std;

Media::Media(){
    title[0] = '\0'; // string empty

    year = 0; // set year at 0.
}

Media::~Media(){
}

void Media::askUser(){
    cout << "What is the title?: ";
  	cin >> title;
  	cout << "What is the year?: ";
  	cin >> year;
}

char* Media::getTitle(){
    return title;
}

int Media::getYear(){
    return year;
}

void Media::print(){
    cout << "Title: " << title << endl;
    cout << "Year: " << year << endl;
}
