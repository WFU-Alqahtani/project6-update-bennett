//
// Created by Bennett on 4/8/2020.
//

#include "LinkedList.h"
LinkedList::LinkedList(){
   head = nullptr;
}
LinkedList::LinkedList(Node* hed){
    head=hed;
}
LinkedList::LinkedList(const LinkedList& list) {
    head = new Node(list.head->value);
    Node *currentNode = list.head->next;
    Node *copy = head;
    while (currentNode != nullptr) { //traverses and copies each node
        copy->next = new Node(currentNode->value);
        currentNode = currentNode->next;
        copy = copy->next;
    }
}
LinkedList& LinkedList::operator=(const LinkedList& rhs){
    //swap(this.head,rhs.head);
    //return *this;
    LinkedList temp(rhs);
    std::swap(temp.head,head);
    return *this;

}
//fix with Dr. A later above

LinkedList::~LinkedList(){
    Node* currentNode = head;
    Node* next = head;
    while(next!=nullptr){
       next=currentNode->next;
       delete currentNode;
       currentNode=next;
    }
}