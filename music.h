/*
 * Music class
 * 
 * This defines the music class which is a type of Media
 *   - Music
 *      - title, artist, year, duration, publisher
 *
 * Author: Dylan Waters
 */
 
 #include "media.h"
 
class Music : public Media
{
    public:
        Music() {}
        
        ~Music() {}
        
        char* getPublisher() { return publisher; }
        char* getArtist() { return artist; }
        int getDuration() { return duration; }

        virtual void print();
        virtual void askUser();
        
    private:
        char publisher[256];
        char artist[256];
        int duration;
};
