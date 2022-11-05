#include <iostream>
#include "Node.h"
using namespace std;

/* 
    * Node->Constructor: Constructor of the class Node.
    * Parameters:
    * - i: the element of the node.
    * Return: A Node object.
*/
Node::Node(vector<Container> *P) {
    Pack = new vector<Container>;
    for(int i=0; i<P->size(); i++) {
        Pack->push_back(P->at(i));
    }
    previous = nullptr;
}
/* 
    * Node->Destructor: Destructor of the class Node.
    * Parameters: None
    * Return: None
*/
Node::~Node() {
}
/* 
    * Node->insert: Insert a node in the linked list.
    * Parameters:
    * - i: the element of the node to insert.
    * Return: void.
*/
void Node::insert(vector<Container> *P) {
  Node *p=this;
  while (p->previous != nullptr) {
    p = p->previous;
  }
  p->previous = new Node(P); 
}
/* 
    * Node->print: Print the elements of the linked list.
    * Parameters: None.
    * Return: void.
*/
void Node::print(){
  Container *v;
  for(int i = 0; i < Pack->size(); i++) {
    v = &Pack->at(i);
    v->print();
  }
}