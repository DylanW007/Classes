/*
 * Movie class
 * 
 * This defines the music class which is a type of Media
 *   - Movie
 *      - title, year, director, duration, rating
 *
 */

#include "movie.h"

#include <iostream>
#include <cstring>

using namespace std;

Movie::Movie(){
    director[0] = '\0'; // string empty
}

void Movie::print(){
    Media::print();
    cout << "Director: " << director << endl;
    cout << "Duration: " << duration << endl;
    cout << "Rating: " << rating << endl;
}

void Movie::askUser(){
    Media::askUser();
    
    cout << "Who is the director?: ";
  	cin >> director;
  	cout << "What is the duration?: ";
  	cin >> duration;
  	cout << "What is the rating?: ";
  	cin >> rating;
}
