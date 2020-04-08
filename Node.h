#ifndef NODE_H
#define NODE_H
#include "Dog.h"
class Node {
public:
    // Node constructor
    Node(Dog v , Node* n = nullptr)
    {
        value = v;
        next = n;
    }

    //Destructor
    ~Node(){
        delete next;
    }
    friend class LinkedList;
private:

    Dog value;
    Node* next;

};

#endif //NODE_H
