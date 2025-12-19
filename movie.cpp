/*
 * Movie class
 * 
 * This defines the music class which is a type of Media
 *   - Movie
 *      - title, artist, year, duration, publisher
 *
 */

#include "movie.h"

#include <iostream>
#include <cstring>

using namespace std;

Movie::Movie(){
    publisher[0] = '\0'; // string empty
    artist[0] = '\0';    // string empty
}

void Movie::SetPublisher(){
    cout << "Enter publisher: ";
    cin.getline(publisher, sizeof(publisher));
}

void Movie::SetArtist(){
    cout << "Enter artist: ";
    cin.getline(artist, sizeof(artist));
}

void Movie::SetDuration(){
    cout << "Enter duration: ";
    cin >> duration;
    cin.ignore(256, '\n');  // Eat the newline that comes after the integer
}

void Movie::print(){
    Media::print();
    cout << "Publisher: " << publisher << endl;
    cout << "Artist: " << artist << endl;
    cout << "Duration: " << duration << endl;
}

void Movie::askUser(){
    Media::askUser();
    
    cout << "Who is the publisher?: ";
  	cin >> publisher;
  	cout << "What is the artist?: ";
  	cin >> artist;
  	cout << "What is the duration?: ";
  	cin >> duration;
}
