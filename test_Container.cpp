#include "Container.h"

int main(){
    Container *c = new Container(30);
    c->insert(7);
    c->insert(2);
    c->insert(3);
    c->insert(4);
    c->insert(5);
    c->insert(6);
    Container *copy2 = 

    copy2->insert(34);
    c->print();
    cout << endl;
    copy2->print();
    return 0;
}