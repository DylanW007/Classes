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
        Music();
        
        virtual ~Music() {}
        
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
