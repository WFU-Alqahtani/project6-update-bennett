//
// Created by Bennett on 4/7/2020.
//

#include "Dog.h"
Dog::Dog(string named){
    name= new string;
    *name=named;
}
Dog::Dog(){

}
Dog& Dog::operator=(Dog d){
    swap(this->name, d.name);
    return *this;
}
bool Dog::operator<(Dog d){
    return (this->name<d.name);
}
Dog::Dog(const Dog& origDog){
    name = new string;
    *name=*(origDog.name);
}