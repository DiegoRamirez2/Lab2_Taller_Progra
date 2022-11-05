#ifndef _Node_h_
#include <iostream>
#include <vector>
#include "Container.h"
using namespace std;

/*
    * This class represent a node of a linked list of int
*/
class Node {
public:
    Node(vector<Container> *P); // Constructor
    ~Node(); // Destructor
    void insert(vector<Container> *P); // Insert a node in the linked list
    void print(); // Print the elements of the linked list
private:
    Node *previous; // Pointer to the previous node
    vector<Container> *Pack; // Element of the node
};

#endif // _Node_h_