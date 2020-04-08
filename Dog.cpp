//
// Created by Bennett on 4/7/2020.
//

#include "Dog.h"
Dog::Dog(string named){
    name=named;
}
Dog& Dog::operator=(Dog d){
    using std::swap;
    swap(this, &d);
    return *this;
}
