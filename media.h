/*
 * Media class
 * 
 * This defines the base class for all types of media such as:
 *   - Music
 *      - title, artist, year, duration, publisher
 *   - Movies
 *      - title, director, year, duration, rating
 *   - Video games
 *      - title, year, publisher, rating
 */
#include <cstring>

using namespace std;

class Media
{
    public:
    Media();

    virtual ~Media() {}

    // methods that are shared by all types of media such as 
    char* GetTitle() { return title; }
    int GetYear() { return year; }

    // Base print method that should be extended by derived classes
    void Print();

    void SetTitle( char* title ) { strcpy( this->title, title ); }
    void SetYear( int year ) { this->year = year; }

    private:
    char title[100];
    int year;
};