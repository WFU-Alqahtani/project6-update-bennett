//
// Created by Bennett on 4/8/2020.
//

#ifndef BINARYINSERTIONSORT_LINKEDLIST_H
#define BINARYINSERTIONSORT_LINKEDLIST_H

#include "Node.h"
#include <iostream>
using namespace std;

class LinkedList{

public:
    //Constructors
    LinkedList();
    LinkedList(const LinkedList & list);
    LinkedList(Node* hed); //added by us

    //Assignment Operator
    LinkedList &operator=(const LinkedList&  rhs);
    //fix with Dr. A later

    //Destructor
    ~LinkedList();

    //Functions. You may not need to use them all
    void append(Dog obj);
    bool Delete (Dog obj);
    Dog find (Dog obj);
    void printList();
    void InsertionSort();

private:
    Node* head;

};



#endif //BINARYINSERTIONSORT_LINKEDLIST_H
