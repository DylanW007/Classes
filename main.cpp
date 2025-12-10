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

void addMedia(vector<Media*>& collection){ // Moved above main
    // Add Media

    char mediatype[50];
    char title[50];
    int year;
  
    cout << "What type of media (Help for media types): ";
    cin >> mediatype;

    for(auto& m : mediatype){
      m = tolower(m);
    }

    if (strcmp(mediatype, "music") == 0){
      bool check = true;
      while (check = true){
	  	char askcheck;
	  	char title[50];
	  	int year;
	  	char publisher[50];
	  	float rating;
	
	  	cout << "What is the title?: ";
	  	cin >> title;
	  	cout << "What is the year?: ";
	  	cin >> year;
        cout << "Who is the publisher?: ";
	  	cin >> publisher;
	  	cout << "What is the rating?: ";
	  	cin >> rating;

        cout << "\nMusic:" << endl;
	  	cout << "======" << endl;
	  	cout << title << endl;
	  	cout << year << endl;
	  	cout << publisher << endl;
	  	cout << rating << endl;
	
	  	cout << "Does this look right (y/n)?: " << endl;
        cin >> askcheck;

	  	if (askcheck == 'y'){
	    	check = false;
	  	}
	  	else if (askcheck == 'n'){
	     	char askcheck = '\0';
	     	cout << "Redo'ing" << endl;
	  	}
	  	else{
	    	cout << "Not valid" << endl;
	  	}
	
        	}
      	}

      	else if (mediatype == "videogame"){

      	}

      	else if (mediatype == "movie"){

     	 }

      	else{
        	cout << "Not a valid media input" << endl;
      	}
  	}

//void searchMedia(){
  // Search Media
//}


//void deleteMedia(){
    // Delete Media
//}

int main()
{
    vector<Media*> mediaCollection;
    
    char* firstDescription = new char[80];
    
    bool run;
    run = true;

    char command[50];
    while(run == true){
      
       cout << "What is your command? (Type help for commands): ";
       cin >> command;

       for(auto& x : command){ // https://www.geeksforgeeks.org/cpp/tolower-function-in-cpp/
          x = tolower(x);    // (Converts string tolower() using for loop)
       }

       
       if (strcmp(command, "add") == 0){
           //cout << "Add" << endl;
           addMedia(mediaCollection);
       }
      
       else if (strcmp(command, "search") == 0){
           cout << "Search" << endl;
           //searchMedia();
       }
    
       else if (strcmp(command, "delete") == 0){
           cout << "Delete" << endl;
           //deleteMedia();
       }
       
       else if (strcmp(command, "help") == 0){
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

