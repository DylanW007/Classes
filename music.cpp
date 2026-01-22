/*
 * Music class
 * 
 * This defines the music class which is a type of Media
 *   - Music
 *      - title, artist, year, duration, publisher
 *
 * Author: Dylan Waters
 */

#include "music.h"

#include <iostream>
#include <cstring>

using namespace std;

void Music::print(){
    Media::print();
    cout << "Publisher: " << publisher << endl;
    cout << "Artist: " << artist << endl;
    cout << "Duration: " << duration << endl;
}

void Music::askUser(){
    Media::askUser();
    
    cout << "Enter publisher: ";
    cin.ignore(); // Eat newline character from previous input
    cin.getline(publisher, 256);
    cout << "Enter artist: ";
    cin.getline(artist, 256);
    cout << "Enter duration: ";
    cin >> duration;
}
