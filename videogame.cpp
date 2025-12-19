/*
 * VideoGame class
 * 
 * This defines the music class which is a type of Media
 *   - VideoGame
 *      - title, year, publisher, rating
 *
 */

#include "videogame.h"

#include <iostream>
#include <cstring>

using namespace std;

VideoGame::VideoGame(){
    publisher[0] = '\0'; // string empty
}


void VideoGame::print(){
    Media::print();
    cout << "Publisher: " << publisher << endl;
    cout << "Rating: " << rating << endl;
}

void VideoGame::askUser(){
    Media::askUser();
    
    cout << "Who is the publisher?: ";
  	cin >> publisher;
  	cout << "What is the rating?: ";
  	cin >> rating;
}
