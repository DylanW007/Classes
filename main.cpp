// Dylan Waters
//
// Classes (11/19/25)
//
// Description...

#include <iostream>
#include <cstring>
#include <vector>
#include <bits/stdc++.h> // for converting command to lowercase.
#include "media.h"
using namespace std;

const int SIZE = 6;

int main()
{
    vector<Media*> mediaCollection;
    
    char* firstDescription = new char[80];
    
    bool run;
    run = true;

    string command;
    while(run == true){
      
       cout << "What is your command? (Type help for commands): ";
       cin >> command;

       for(auto& x : command){ // https://www.geeksforgeeks.org/cpp/tolower-function-in-cpp/
          x = tolower(x);    // (Converts string tolower() using for loop)
       }
       
      
       if (command == "add"){
           cout << "Add" << endl;
           //addMedia();
       }
      
       else if (command == "search"){
           cout << "Search" << endl;
           //searchMedia();
       }
    
       else if (command == "delete"){
           cout << "Delete" << endl;
           //deleteMedia();
       }
       
       else if (command == "help"){
           cout << "\nCommands:" << endl;
           cout << "========" << endl;
           cout << "Add:" << endl;
           cout << "Search:" << endl;
           cout << "Delete:" << endl;
           cout << "========\n" << endl;
       }
      
       else{
           cout << "Not a valid input." << endl;
       }
        
    }
    
    return 0;
}

void addMedia(Media** newlist, int size){
    // Add Media
 }


void searchMedia(){
  // Search Media
}


void deleteMedia(){
    // Delete Media
}
