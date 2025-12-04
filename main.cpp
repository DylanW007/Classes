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

 int main()
 {
    // Create a vector to hold media pointers
    vector<Media*> mediaCollection;
    
    char* firstDescription = new char[80];
    strcpy(firstDescription, "First Media");
    list[0] = new Media(firstDescription);
    char* secondDescription = new char[80];
    strcpy(secondDescription, "Second Media");
    list[1] = new Media(secondDescription);

    printMedia(list, SIZE);
    mediaCollection.push_back(list[0]);
    mediaCollection.push_back(list[1]);
    //printVectorDescription(mediaCollection);

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

void printMedia(Media** newlist, int size){
  for (int a = 0; a < size; a++) {
    cout << newlist[a]->getTitle() << endl;
    }
}

//void deleteMedia(){
    // Clean up memory
    //for () {
  //delete media;
  //}
  //}
