/*
 * Main file for the application.
 */

 #include <vector>
 #include "media.h"

 int main()
 {
    // Create a vector to hold media pointers
    std::vector<Media*> mediaCollection;

    // Add different types of media to the collection
    // e.g., Music, Movies, VideoGames (assuming these classes are defined and inherit from Media)

    // Example:
    // Music* song = new Music();
    // song->SetTitle("Song Title");
    // song->SetYear(2021);
    // mediaCollection.push_back(song);

    // Iterate through the collection and print details
    for (Media* media : mediaCollection) {
        media->Print();
    }

    // Clean up memory
    for (Media* media : mediaCollection) {
        delete media;
    }

    return 0;
}
