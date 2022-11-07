#ifndef _Bin_Packing_h_
#define _Bin_Packing_h_
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
    int Cont;
public:
    vector<Container> *containers;
    Bin_Packing(int Space); // Constructor
    ~Bin_Packing(); // Destructor
    void BestFitDecreasing(vector<int> integers, int Space); // First Fit Decreasing Algorithm
    int calculateBins(vector<int> integers); // Calculate the number of bins
    void print(); // Print the elements of the containers
    void IncreaseCont(); // Increase the number of containers
    int getCont(); // Return the number of containers 
    vector<Container> *getContainers(); // Return the containers
    vector<Container> *copyContainers(); // Return a copy of the containers
    string makeKey(); // Return a string with the elements of the containers
    int Solve(vector<int> integers, int capacity); // Solve the problem
    bool checkSubSet(vector<int> integers, int capacity, int bound); // Check if a subset is a subset of a vector
};
# endif // _Bin_Packing_h_