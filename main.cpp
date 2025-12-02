//   
// Dylan Waters
//
// Classes (11/19/25)
//
// Description...

 #include <vector>
 #include "media.h"
 using namespace std;

 int main()
 {
    // Create a vector to hold media pointers
    vector<Media*> mediaCollection;

    //ADD
    //SEARCH
    //DELETE

 }

    // Example:
    // Music* song = new Music();
    // song->SetTitle("Song Title");
    // song->SetYear(2021);
    // mediaCollection.push_back(song);

void searchMedia(){
  // Search Media
  for (Media* media : mediaCollection) {
  
  }
}

void printMedia(){    // Iterate through the collection and print details
    for (Media* media : mediaCollection) {
        media->Print();
    }
}

void deleteMedia(){
    // Clean up memory
    for (Media* media : mediaCollection) {
        delete media;
    }
}

    return 0;
}
