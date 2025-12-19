// Dylan Waters
//
// Classes (11/19/25)
//
// Description...

#include <iostream>
#include <cstring>
#include <vector>
#include "media.h"
#include "music.h"

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

    cout << "What type of media (Help for media types): ";
    cin >> mediatype;

    for(auto& m : mediatype){
      m = tolower(m);
    }
    
    bool check=true;
    
    while(check == true){

        if (strcmp(mediatype, "music") == 0){
            media = new Music();
        }
        else if (mediatype == "videogame"){
            media = nullptr;
        }
        else if (mediatype == "movie"){
            media = nullptr;
        }
        
        if (media != nullptr) {
            media->askUser();
            media->print();
            
            // ask user if they accept the new media
            if (checkUser()){
                // Success!
                check = false;  // Exit loop so we can return new media.
            }
            else{
                // if we get here then they didn't accept new media
    	  	    // let's delete the object. delete handles nullptr so no need to check here.
    	  	    delete media;
    	  	    media = nullptr;
            }            
        }
    }
    
    collection.push_back(media);
}

  
// =============================================================

//void searchMedia(){
  // Search Media
//}

// =============================================================

//void deleteMedia(){
    // Delete Media
//}

void printHelp(){
    cout << "\nCommands:" << endl;
    cout << "========" << endl;
    cout << "Add" << endl;
    cout << "Search" << endl;
    cout << "Delete" << endl;
    cout << "Quit" << endl;
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
           // cout << "Add" << endl;
           addMedia(mediaCollection);
       }
      
       else if (strcmp(command, "search") == 0){
           cout << "Search" << endl;
           // searchMedia();
       }
       else if (strcmp(command, "delete") == 0){
           cout << "Delete" << endl;
           // deleteMedia();
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
