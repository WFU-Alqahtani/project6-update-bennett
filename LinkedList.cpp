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
void LinkedList::printList() {
    Node* currentNode = head;
    if(!currentNode)
        cout<<"empty list"<<endl;
    else{
        while(currentNode != nullptr){
            cout << currentNode->value.getValue()<<" "<<endl;
            currentNode = currentNode->next;
        }}
    cout << endl;
}
void LinkedList::append(Dog obj) {
    if (head == nullptr) {
        head = new Node(obj);
    }else{
        Node* cursor = head;
        while(cursor->next != nullptr) {
            cursor = cursor->next;
        }
        cursor->next = new Node(obj);
    }
}
Dog LinkedList::find(Dog obj){

}







///////////////////////////////////////////////////////////////////////////
// Insertion Sort Algorithm on LinkedList
///////////////////////////////////////////////////////////////////////////

/*
void LinkedList::InsertionSort() {
    Node *currentNode = head->next;
    Node *sort = head;
    Node *index = head->next;
    Node *trails = head;

    if (currentNode->value < head->value) {
        currentNode = currentNode->next;
        trails->next = index->next;
        index->next = head;
        head = index;
        sort = trails;
    } else {
        currentNode = currentNode->next;
        sort = sort->next;
    }
    index = head->next;
    trails = head;
    while (currentNode != nullptr) {
        if (currentNode->value > sort->value) {
            currentNode = currentNode->next;
            sort = sort->next;
        }
        else if(currentNode->value<head->value){
            sort->next=currentNode->next;
            currentNode->next=trails;
            head=currentNode;
            currentNode=sort->next;
        }
        else{
            while(!(index->value>currentNode->value)){
                index=index->next;
                trails=trails->next;
            }
            sort->next=currentNode->next;
            currentNode->next=index;
            trails->next=currentNode;
            currentNode=sort->next;
        }
        trails=head;
        index=head->next;
    }
}
*/

void LinkedList::InsertionSort() {
    if(head==nullptr || head->next==nullptr){
        return;
    }
    Node* one = head->next;
    while(one!=nullptr){
        Dog data = one->value;
        int check = 0;
        Node* two = head;
        while(!(two==one)){
            if(two->value > one->value && check==0){
                data=two->value;
                two->value=one->value;
                check=1;
                //two=two->next;
            }
            else{
                if(check==1){
                    Dog temp = data;
                    data=two->value;
                    two->value=temp;
                }
                //two=two->next;
            }
            two=two->next;
        }
        two->value=data;
        one=one->next;
    }
}
