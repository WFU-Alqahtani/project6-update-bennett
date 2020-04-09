#include <iostream>
#include <vector>
#include <cassert>
#include <fstream>
#include <ctime>
#include "BinaryInsertionSort.h"
#include "Node.h"
#include "Dog.h"
#include "LinkedList.h"
/* Andrew Sullivan, Bennett Gould, and Octavio Muro
 * Project 6
 * Binary and Insertion sort of a vector and linked list via piped data from dogNames csv
 * That has all of the dog names and number of each recorded in NY city
 *
 *
 */
using namespace std;

int main() {

   //read the file name of your dataset
    ifstream ip("dogNames3.csv");
    if(!ip.is_open()){
        cout<<"Error in opening input file!"<<endl;
    }
    string name;
    string numOfName;
    int index=0;
    int length;
    cout<<"How many items do you want to sort?"<<endl;
    cin>>length;
    vector<Dog> v(length);
    LinkedList *test = new LinkedList();
    getline(ip,name,'\n');
    while(ip.good()&&index<length){
        getline(ip,name,',');
        getline(ip,numOfName,'\n');
        //call constructor to create object from input stream
        Dog* d = new Dog(name);
        //add object to vector sequentially
        v.at(index)=*d;
        test->append(*d);
        index++;
    }

    //vector<Dog> v;

    // populate the vector with the data from your data set

    // binary insertion sort
    clock_t startBinarySort = clock();
    insertionSort(v, v.size());
    clock_t endBinarySort = clock();

    // check if sorted
    for (int i = 1; i < v.size(); i++) {
        //assert(v[i-1].getValue() <= v[i].getValue());
    }

    // print out sorted list
    for (int i = 0; i < v.size(); i++) {
        //you should ovrride << to YourClass
        cout << v[i].getValue() << endl;
    }

    // FINISH ME
    cout<<endl;
    test->printList();
    clock_t startInsertionSort = clock();
    test->InsertionSort();
    clock_t endInsertionSort = clock();
    test->printList();

    double elapsed_Binary = double(endBinarySort-startBinarySort);
    double elapsed_Insertion = double(endInsertionSort-startInsertionSort);

    cout<<"BinaryInsertionSort took "<<elapsed_Binary<<" milliseconds for "<<length<<" items"<<endl;
    cout<<"InsertionSortLinkedList took "<<elapsed_Insertion<<" milliseconds for "<<length<<" items"<<endl;
}