#include "Bin_Packing.h"
using namespace std;



/*
*/
Bin_Packing::Bin_Packing(int Space){
    this->Space = Space;
    this->Cont = 0;
    containers = new vector<Container>();
    containers->push_back(Container(Space));
}
/*
*/
Bin_Packing::~Bin_Packing(){
}
/*
*/
void Bin_Packing::BestFitDecreasing(vector<int> integers, int space){
    vector<int>::iterator it2;
    for(it2=integers.begin(); it2!=integers.end(); it2++){
        vector<Container>::iterator it;
        bool inserted = false;
        for(it=containers->begin(); it!=containers->end(); it++){
            if(it->canInsert(*it2)){
                it->insert(*it2);
                inserted = true;
            }
        }
        if(!inserted){
            if(*it2 < space){
                Container *newContainer = new Container(Space);
                newContainer->insert(*it2);
                containers->push_back(*newContainer);
            }
        }
    }
}
/*
*/
void Bin_Packing::NextFitDecreasing(vector<int> integers, int space){
    vector<int>::iterator it2;
    int position = 0;
    for(it2=integers.begin(); it2!=integers.end(); it2++){
        vector<Container>::iterator it;
        bool inserted = false;
        it = containers->begin() + position;
        for(it; it!=containers->end(); it++){
            if(it->canInsert(*it2)){
                it->insert(*it2);
                inserted = true;
            }
        }
        if(!inserted){
            if(*it2 < space){
                Container *newContainer = new Container(Space);
                newContainer->insert(*it2);
                containers->push_back(*newContainer);
                position = containers->size() - 1;
            }
        }
    }
}
/*
*/
void Bin_Packing::print(){
    vector<Container>::iterator it;
    int cont = 0;
    for(int i=0; i<containers->size(); i++){
        if(i+1 == containers->size()){
            cout << "{";
            containers->at(i).print();
            cout << "}";
        }
        else{
            cout << "{";
            containers->at(i).print();
            cout << "}, ";
        }
        cont++;
    }
    cout << endl;
    this->Cont = cont;
    cout << "El número de conjuntos es: " << cont << endl;
}


