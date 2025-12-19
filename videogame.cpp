/*
 * VideoGame class
 * 
 * This defines the music class which is a type of Media
 *   - VideoGame
 *      - title, artist, year, duration, publisher
 *
 */

#include "videogame.h"

#include <iostream>
#include <cstring>

using namespace std;

VideoGame::VideoGame(){
    publisher[0] = '\0'; // string empty
    artist[0] = '\0';    // string empty
}

void VideoGame::SetPublisher(){
    cout << "Enter publisher: ";
    cin.getline(publisher, sizeof(publisher));
}

void VideoGame::SetArtist(){
    cout << "Enter artist: ";
    cin.getline(artist, sizeof(artist));
}

void VideoGame::SetDuration(){
    cout << "Enter duration: ";
    cin >> duration;
    cin.ignore(256, '\n');  // Eat the newline that comes after the integer
}

void VideoGame::print(){
    Media::print();
    cout << "Publisher: " << publisher << endl;
    cout << "Artist: " << artist << endl;
    cout << "Duration: " << duration << endl;
}

void VideoGame::askUser(){
    Media::askUser();
    
    cout << "Who is the publisher?: ";
  	cin >> publisher;
  	cout << "What is the artist?: ";
  	cin >> artist;
  	cout << "What is the duration?: ";
  	cin >> duration;
}
