// Dylan Waters
//
// Classes (11/19/25)
//
// Description...

 #include <iostream>
 #include <cstring>
 #include <vector>
 #include "media.h"
 using namespace std;

 const int SIZE = 6;

 void printMedia(Media** newlist, int size){
   for(int a = 0; a < size; a++){
     cout << newlist[a]->getTitle() << endl;
   }
 }

 int main()
 {
    // Create a vector to hold media pointers
    vector<Media*> mediaCollection;
    
    char* firstDescription = new char[80];

    bool run;
    run = true;

    while(run == true){
      cout << "What is your command?: ";
    }
    //COMMANDS:
    //         ADD
    //         SEARCH
    //         DELETE

    
    
    return 0;
 }

//void searchMedia(){
  // Search Media
  //for (Media* media : mediaCollection) {
  
    //}
//}


//void deleteMedia(){
    // Clean up memory
    //for () {
  //delete media;
  //}
  //}
