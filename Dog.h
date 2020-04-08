//
// Created by Bennett on 4/7/2020.
//

#ifndef BINARYINSERTIONSORT_DOG_H
#define BINARYINSERTIONSORT_DOG_H

#include <string>
using namespace std;
class Dog {
private:
    string name;
public:
    Dog(string named);
    Dog& operator=(Dog d);
};


#endif //BINARYINSERTIONSORT_DOG_H
