#ifndef _Bin_Packing_Solver_h_
#define _Bin_Packing_Solver_h_
#include <iostream>
#include "Container.h"
/* 
    * This class represent a Bin Packing Solver, it has a vector of elements
    * to pack and the required weight.
*/
class Bin_Packing_Solver {
    private:
        vector<int> *elements; // Vector of elements to pack
        int weight; // Required weight
    public:
        Bin_Packing_Solver(vector<int> *v, int weight); // Constructor
        ~Bin_Packing_Solver(); // Destructor
        vector<Container>* solve(); // Solve the Bin Packing Problem
        void print(); // Print the solution
};

#endif // _Bin_Packing_Solver_h_