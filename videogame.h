/*
 * VideoGame class
 * 
 * This defines the music class which is a type of Media
 *   - VideoGame
 *      - title, year, publisher, rating
 *
 * Author: Dylan Waters
 */
 
 #include "media.h"
 
class VideoGame : public Media
{
    public:
        VideoGame();
        
        virtual ~VideoGame() {}
        
        virtual void print();
        virtual void askUser();   
        
    protected: // Protected allows child classes use the variables.
        char publisher[256];
        int rating;
};
