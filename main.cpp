#include <iostream>
#include "Container.h"
using namespace std;

int main(){
    Container *n = new Container(7, 3);
    n->print();
    return 0;
}