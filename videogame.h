/*
 * VideoGame class
 * 
 * This defines the music class which is a type of Media
 *   - VideoGame
 *      - title, artist, year, duration, publisher
 *
 * Author: Dylan Waters
 */
 
 #include "media.h"
 
class VideoGame : public Media
{
    public:
        VideoGame();
        
        virtual ~VideoGame() {}
        
        void SetPublisher();
        void SetArtist();
        void SetDuration();
        
        virtual void print();
        virtual void askUser();   
        
    protected: // Protected allows child classes use the variables.
        char publisher[256];
        char artist[256];
        int duration;
};
