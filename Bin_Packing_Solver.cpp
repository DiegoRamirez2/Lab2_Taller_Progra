#include "Bin_Packing_Solver.h"
/*
    * Bin_Packing_Solver->Constructor: Constructor of the class Bin_Packing_Solver.
    * Parameters:
    * - v: the vector of elements to pack.
    * - weight: the required weight.
    * Return: A Bin_Packing_Solver object.
*/
Bin_Packing_Solver::Bin_Packing_Solver(vector<int> *v, int weight){
    this->weight = weight;
    elements = new vector<int>();
    for(int i=0; i < v->size(); i++){
        elements->push_back(v->at(i));
    }
}
/*
    * Bin_Packing_Solver->Destructor: Destructor of the class Bin_Packing_Solver.
    * Parameters: None
    * Return: None
*/
Bin_Packing_Solver::~Bin_Packing_Solver(){
}
/*
    * Bin_Packing_Solver->solve: Solve the Bin Packing Problem.
    * Parameters: None.
    * Return: A vector of containers with the solution.
*/
vector<Container>* Bin_Packing_Solver::solve(){
    return nullptr;
}
/*
    * Bin_Packing_Solver->print: Print the solution.
    * Parameters: None.
    * Return: void.
*/
void Bin_Packing_Solver::print(){
    for(int i=0; i < elements->size(); i++){
        std::cout << elements->at(i) << " ";
    }
    std::cout << endl;
}