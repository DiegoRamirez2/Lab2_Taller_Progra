#include "Node.h"

int main() {
  Container *c = new Container(10, 15);
  Container *d = new Container(10, 20);
  vector<Container> *v = new vector<Container>;
  v->push_back(*c);
  v->push_back(*d);
  Node *p = new Node(v);
  p->print();
  return 0;
}