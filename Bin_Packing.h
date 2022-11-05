#ifndef _Bin_Packing_h_
#define _Bin_Packing_h_
#include <iostream>
#include <algorithm>
#include "Container.h"
#include <time.h>
using namespace std;

/*
    * This class represent a Bin Packing object,
    * with a vector of containers 
*/
class Bin_Packing {
private:
    int Space;
    
public:
    vector<Container> *containers;
    int Cont;
    Bin_Packing(int Space); // Constructor
    ~Bin_Packing(); // Destructor
    void BestFitDecreasing(vector<int> integers, int Space); // First Fit Decreasing Algorithm
    void NextFitDecreasing(vector<int> integers, int Space); // Next Fit Decreasing Algorithm
    int calculateBins(vector<int> integers); // Calculate the number of bins
    void print(); // Print the elements of the containers
};
# endif // _Bin_Packing_h_