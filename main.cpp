// Dylan Waters
//
// Classes (11/19/25)
//
// Description: This is a media database program that allows the user to add, search, and delete different types of media including music, movies, and video games.


#include <iostream>
#include <algorithm>  // Reference: https://www.geeksforgeeks.org/cpp/std-find-in-cpp/
#include <cstring>
#include <vector>
#include "media.h"
#include "music.h"
#include "movie.h"
#include "videogame.h"

using namespace std;

const int SIZE = 6;

// =============================================================
// Check user if output looks correct
// =============================================================
bool checkUser(){
    // Ask the user if this media looks right
    char askcheck;
  	cout << "Does this look right (y/n)?: ";
    cin >> askcheck;
    cout << "\n";

    // if user accept the new media then let's return it.
  	if (askcheck == 'y' || askcheck == 'Y'){
        return true;
  	}
  	
  	// if they don't type a 'y' then assume it's a 'No'
    if (askcheck == 'n' || askcheck == 'N'){
        cout << "Ok, let's try this again..." << endl;
    }
    else{
        cout << "Invalid response. Let's try again!" << endl;
    }
    
    return false;
}


// =============================================================
// Add Media
// =============================================================
void addMedia(vector<Media*>& collection){ // Moved above main

    Media* media = nullptr;

    char mediatype[50];
    
    cout << endl;
    cout << "1. Music" << endl;
    cout << "2. Video Game" << endl;
    cout << "3. Movie" << endl;
    cout << endl << "Select type of media to add: ";
    int choice;
    cin >> choice;

    if (choice < 1 || choice > 3){
        cout << "Invalid choice. Defaulting to Music." << endl;
        choice = 1;
    }

    if (choice == 1){
        media = new Music();
    }
    else if (choice == 2){
        media = new VideoGame();
    }
    else if (choice == 3){
        media = new Movie();
    }
        
    if (media != nullptr) {
        media->askUser();

        cout << "\nYou entered the following information:" << endl;
        media->print();
        
        // ask user if they accept the new media
        if (checkUser()){
            // Success!
            collection.push_back(media);
        }
        else{
            // if we get here then they didn't accept new media
            // let's delete the object. delete handles nullptr so no need to check here.
            delete media;
            media = nullptr;
        }            
    }
}

  
// =============================================================
// SEARCH:  The user should be able to search for and print objects 
// currently in the media database by searching for the title or the year.
// If multiple objects match, list them all. (20 points)
// =============================================================
void searchMedia(vector<Media*>& collection) {
    // Search Media by title or year
    char searchTitle[50];
    int searchYear;
    bool found = false;

    cout << "Search by title or year?" << endl;
    cout << "1. Title" << endl;
    cout << "2. Year" << endl;
    int choice;
    cin >> choice;

    cout << endl;
    if (choice == 1) {
        cout << "Enter title to search for: ";
        cin.ignore();
        cin.getline(searchTitle, 50);
        for (auto media : collection) {
            if (strcmp(media->getTitle(), searchTitle) == 0) {
                cout << endl << "Found mathching media:" << endl;
                media->print();
                found = true;
            }
        }
    } else if (choice == 2) {
        cout << "Enter year to search for: ";
        cin >> searchYear;
        for (auto media : collection) {
            if (media->getYear() == searchYear) {
                cout << endl << "Found mathching media:" << endl;
                media->print();
                found = true;
            }
        }
    }

    if (!found) {
        cout << "No matching media found." << endl;
    }
}

// ==============================================================
// DELETE: The user should be able to delete an item. Use the same functionality
// as the search method, then have the user confirm whether they want to delete
// those objects. USE A DESTRUCTOR. (10 points)
// =============================================================
void deleteMedia(vector<Media*>& collection) {
    // Delete Media by title or year
    char searchTitle[50];
    int searchYear;
    bool found = false;

    cout << "Delete by title or year?" << endl;
    cout << "1. Title" << endl;
    cout << "2. Year" << endl;
    int choice;
    cin >> choice;

    Media* toDelete = nullptr;

    if (choice == 1) {
        cout << "Enter title to search for: ";
        cin.ignore();
        cin.getline(searchTitle, 50);
        for (auto media : collection) {
            if (strcmp(media->getTitle(), searchTitle) == 0) {
                cout << endl << "Found matching media to delete:" << endl;
                media->print();
                found = true;
                toDelete = media;
            }
        }
    } else if (choice == 2) {
        cout << "Enter year to search for: ";
        cin >> searchYear;
        for (auto media : collection) {
            if (media->getYear() == searchYear) {
                cout << endl << "Found matching media to delete:" << endl;
                media->print();
                found = true;
                toDelete = media;
            }
        }
    }

    if (found) {
        if (toDelete != nullptr) {
            // Need to delete media from collection vector
            auto it = find(collection.begin(), collection.end(), toDelete);
            if (it != collection.end()) {
                collection.erase(it);
            }

            // Delete the object
            delete toDelete;
            cout << "Media deleted." << endl;
        }
    } else {
        cout << "No matching media found." << endl;
    }
}

void printHelp(){
    cout << "\nCommands:" << endl;
    cout << "========" << endl;
    cout << "ADD" << endl;
    cout << "SEARCH" << endl;
    cout << "DELETE" << endl;
    cout << "HELP" << endl;
    cout << "QUIT" << endl;
    cout << "========\n" << endl;
}

// =============================================================
// Main function
// =============================================================
int main()
{
    vector<Media*> mediaCollection;
    
    char* firstDescription = new char[80];
    
    bool run;
    run = true;

    char command[50];
    while(run == true){
      
       printHelp();
       cout << "What is your command? (Type help for commands): ";
       cin >> command;

       for(auto& x : command){ // https://www.geeksforgeeks.org/cpp/tolower-function-in-cpp/
          x = tolower(x);    // (Converts string tolower() using for loop)
       }

       if (strcmp(command, "add") == 0){
           addMedia(mediaCollection);
       }
      
       else if (strcmp(command, "search") == 0){
           searchMedia(mediaCollection);
       }
       else if (strcmp(command, "delete") == 0){
            deleteMedia(mediaCollection);
       }
       else if (strcmp(command, "help") == 0){
           printHelp();
       }
       else if (strcmp(command, "quit") == 0){
           cout << "Quitting!" << endl;
           run = false;
       }
       else{
           cout << "Not a valid input." << endl;
       }
        
    }
    
    return 0;
}
