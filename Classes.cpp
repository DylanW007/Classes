#include <iostream>
#include <cstring>
#include "Room.h"
#include <vector>

using namespace std;

const int SIZE = 2;

void printArrayDescriptions(Room**, int);
void printVectorDescriptions(Vector<Room*> &);

int main(){
  Room* list[SIZE];
  vector<Room*> vect;
  char* firstDescription = new char[80];
  strcpy(firstDescription, "First Room");
  list[0] = new Room(firstDescription);
  char* secondDescription = new char[80];
  strcpy(secondDescription, "Second Room");
  list[1] = new Room(secondDescriptions);
  printArrayDescriptions(list, SIZE);
  vect.push_back(list[0]);
  vect.push_back(list[1]);
  printVectorDescriptons(vect);
}

void printArrayDescriptions(Room** newlist, in size) {
  for (int a = 0; a < size; a++){
    cout << newlist[a]->getDescription() << endl;
    //cout << *newlist[a]->getDescriptions() << endl;
  }
}

void printVectorDescriptions(vector<Room*> &newvect){
  for(vector<Room*>::iterator it = newvect.begin(); it != newvect.end(); it++){
    cout << (*it)->getDescription() << endl;
    //cout << *(*it)->getDescripton() << endl;
  }
}
