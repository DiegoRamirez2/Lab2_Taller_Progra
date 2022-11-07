#ifndef _Container_h_
#define _Container_h_
#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

/*
    * This class represent a container of a vector of int
    * and the free space of the container.
*/
class Container {
private:
    int free_space;
    int initial_space;
public:
    vector<int> *conjunto;
    Container(int space); // Constructor
    ~Container(); // Destructor
    void insert(int element); // Insert an element in the container
    bool canInsert(int element); // Return the free space of the container
    int SummE(); // Return the sum of the elements of the container
    bool isFull(); // Return true if the container is full
    void print(); // Print the elements of the container
    int getMinimunElem(); // Return the minimun element of the container
    int getFreeSpace(); // Return the free space of the container
    string makeKey(); // Return a string with the elements of the container
};
# endif // _Container_h_