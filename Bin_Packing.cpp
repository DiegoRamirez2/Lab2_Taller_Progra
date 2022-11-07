#include "Bin_Packing.h"
using namespace std;

/*
*/
Bin_Packing::Bin_Packing(int Space){
    this->Space = Space;
    this->Cont = 1;
    containers = new vector<Container>();
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
            if(it->canInsert(*it2) && !inserted){
                it->insert(*it2);
                inserted = true;
            }
        }
        if(!inserted){
            if(*it2 < space){
                Container *newContainer = new Container(Space);
                newContainer->insert(*it2);
                containers->push_back(*newContainer);
                IncreaseCont();
            }
        }
    }
}
/*
*/
void Bin_Packing::IncreaseCont(){
    Cont++;
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
}
/*
*/
vector<Container> *Bin_Packing::getContainers(){
    return containers;
}
/*
*/
vector<Container> *Bin_Packing::copyContainers(){
    vector<Container> *newContainers = new vector<Container>();
    vector<Container>::iterator it;
    for(it=containers->begin(); it!=containers->end(); it++){
        vector<int> vector_sorted(it->conjunto->size());
        partial_sort_copy(it->conjunto->begin(), it->conjunto->end(), vector_sorted.begin(), vector_sorted.end());
        Container *copy_ordered = new Container(Space);
        copy_ordered->conjunto = new vector<int>(vector_sorted);
        newContainers->push_back(*copy_ordered);
    }
    return newContainers;
}
/*
*/
string Bin_Packing::makeKey(){
    vector<Container> *containers_copy = copyContainers();
    sort(containers_copy->begin(), containers_copy->end(), []
    (const Container &a, const Container &b) {
        return *min_element(a.conjunto->begin(), a.conjunto->end()) 
        < *min_element(b.conjunto->begin(), b.conjunto->end());});
    string key = "";
    int cont = 0;
    for(int i=0; i<containers_copy->size(); i++){
        if(i+1 == containers_copy->size()){
            key += containers_copy->at(i).makeKey();
        }
        else{
            key += containers_copy->at(i).makeKey() + "-";
        }
        cont++;
    }
    return key;
}
/*
*/
int Bin_Packing::getCont(){
    return Cont;
}

/*
*/
int Bin_Packing::Solve(vector<int> integers, int space){
    Bin_Packing *copy = new Bin_Packing(space);
    copy->BestFitDecreasing(integers, space);
    int a = copy->getCont();
    int b = accumulate(integers.begin(), integers.end(), 0) / integers.size();
    int k = 0;
    while(a > b){
        k = (a+b)/2; // la cantidad de subconjuntos a chequear
        if(checkSubSet(integers, space, k)){
            a=k;
            if(checkSubSet(integers, space, b)){
                return b;
            }
        }else{
            b++;
        }
    }
    if(b != k){
        b = k;
    }else{
        return b + 1;
    }
    return a;
}
/*
*/
bool Bin_Packing::checkSubSet(vector<int> integers, int capacity, int bound){
    unordered_map<string, Bin_Packing> table, new_table;
    Bin_Packing *bp = new Bin_Packing(capacity);
    string first_key = bp->makeKey();
    table.insert(make_pair(first_key, *bp));
    vector<int>::iterator it_int;
    for(auto it_int=integers.begin(); it_int!=integers.end(); it_int++){
        int inserted = 0;
        for(auto it=table.begin(); it!=table.end(); it++){
            
        }
    }
}