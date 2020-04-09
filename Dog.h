//
// Created by Bennett on 4/7/2020.
//

#ifndef BINARYINSERTIONSORT_DOG_H
#define BINARYINSERTIONSORT_DOG_H

#include <string>
using namespace std;
class Dog {
private:
    string* name;
public:
    Dog(string named);
    Dog();
    Dog& operator=(Dog d);
    bool operator>(Dog d);
    bool operator<(Dog d);
    bool operator==(Dog d);
    bool operator>=(Dog d);
    void operator<<(Dog d);
    Dog(const Dog& origDog);
    string getValue();
};


#endif //BINARYINSERTIONSORT_DOG_H
