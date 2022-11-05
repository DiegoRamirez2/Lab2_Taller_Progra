#include "Container.h"

/*
    * Container->Constructor: Constructor of the class Container.
    * Parameters:
    * - space: the free space of the container.
    * - slots: the number of slots of the container.
    * Return: A Container object.
*/
Container::Container(int space){
    free_space = space;
    this->conjunto = new vector<int>();
}
/*
    * Container->Destructor: Destructor of the class Container.
    * Parameters: None
    * Return: None
*/
Container::~Container(){
}
/*
    * Container->insert: Insert an element in the container.
    * Parameters:
    * - element: the element to insert.
    * Return: void.
*/
void Container::insert(int element){
    conjunto->push_back(element);
    free_space = free_space - element;
}
/*
    * Container->getFspace: Return the free space of the container.
    * Parameters: None.
    * Return: The free space of the container.
*/
bool Container::canInsert(int element){
    return free_space >= element;
}
/*
    * Container->SummE: Return the sum of the elements of the container.
    * Parameters: None.
    * Return: The sum of the elements of the container.
*/
int Container::SummE(){
    int acum = 0;
    vector<int>::iterator it;
    for(it=conjunto->begin(); it!=conjunto->end(); it++){
        acum += *it;
    }
    return acum;
}
/*
    * Container->isFull: Return true if the container is full.
    * Parameters: None.
    * Return: True if the container is full.
*/
bool Container::isFull(){
    return free_space == 0;
}
/*
    * Container->print: Print the elements of the container.
    * Parameters: None.
    * Return: void.
*/
void Container::print(){
    vector<int>::iterator it;
    for(int i=0; i<conjunto->size(); i++){
        if(i+1 == conjunto->size()){
            cout << conjunto->at(i);
        }
        else{
            cout << conjunto->at(i) << ", ";
        }
    }

}