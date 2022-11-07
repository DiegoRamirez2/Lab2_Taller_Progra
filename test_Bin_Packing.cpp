#include "Bin_Packing.h"

int main(){
    vector<int> integers{1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int space = accumulate(integers.begin(), integers.end(), 0);
    Bin_Packing *bp = new Bin_Packing(space);
    Bin_Packing *bp2 = new Bin_Packing(space);
    /*
    bp->containers->push_back(Container(space));
    bp->containers->push_back(Container(space));
    bp->containers->at(0).insert(6);
    bp->containers->at(1).insert(2);
    bp->containers->at(1).insert(1);
    bp->containers->at(2).insert(5);
    bp->containers->at(2).insert(4);
    bp2->containers->push_back(Container(space));
    bp2->containers->push_back(Container(space));
    bp2->containers->at(0).insert(5);
    bp2->containers->at(1).insert(6);
    bp2->containers->at(2).insert(2);
    bp2->containers->at(2).insert(1);
    for(int i=0; i<bp->containers->size(); i++){
        cout << "Container " << i+1 << ": ";
        *min_element(bp->containers->at(i).conjunto->begin(), bp->containers->at(i).conjunto->end()) <
        *min_element(bp2->containers->at(i).conjunto->begin(), bp2->containers->at(i).conjunto->end());
        cout << endl;
    }
    */
    return 0;
}