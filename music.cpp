/*
 * Music class
 * 
 * This defines the music class which is a type of Media
 *   - Music
 *      -  title, artist, year, duration, publisher
 *
 */

#include "music.h"

#include <iostream>
#include <cstring>

using namespace std;

Music::Music(){
    publisher[0] = '\0'; // string empty
    artist[0] = '\0';    // string empty
}

void Music::print(){
    Media::print();
    cout << "Publisher: " << publisher << endl;
    cout << "Artist: " << artist << endl;
    cout << "Duration: " << duration << endl;
}

void Music::askUser(){
    Media::askUser();
    
    cout << "Who is the publisher?: ";
  	cin >> publisher;
  	cout << "What is the artist?: ";
  	cin >> artist;
  	cout << "What is the duration?: ";
  	cin >> duration;
}
