#ifndef _Container_h_
#define _Container_h_
#include <iostream>
#include <vector>

using namespace std;

/*
    * This class represent a container of a vector of int
    * and the free space of the container.
*/
class Container {
private:
    int free_space;
    vector<int> *conjunto;
public:
    Container(int space); // Constructor
    ~Container(); // Destructor
    void insert(int element); // Insert an element in the container
    bool canInsert(int element); // Return the free space of the container
    int SummE(); // Return the sum of the elements of the container
    bool isFull(); // Return true if the container is full
    void print(); // Print the elements of the container

};
# endif // _Container_h_