/*
 * Movie class
 * 
 * This defines the music class which is a type of Media
 *   - Movie
 *      - title, year, director, duration, rating

 *
 * Author: Dylan Waters
 */
 
 #include "media.h"
 
class Movie : public Media
{
    public:
        Movie();
        
        virtual ~Movie() {}
        
        virtual void print();
        virtual void askUser();
        
    protected: // Protected allows child classes use the variables.
        char director[256];
        int duration;
        int rating;
};
