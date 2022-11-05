#include "Bin_Packing_Solver.h"

int main(){
    vector<int> *v = new vector<int>();
    for(int i=0; i < 10; i++){
        v->push_back(i);
    }
    Bin_Packing_Solver *b = new Bin_Packing_Solver(v, 10);
    b->print();
}