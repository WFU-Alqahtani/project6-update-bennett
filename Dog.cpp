//
// Created by Bennett on 4/7/2020.
//
#include <iostream>
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
bool Dog::operator>(Dog d){
    return (this->name>d.name);
}
bool Dog::operator<(Dog d){
    return (this->name<d.name);
}
//wanted to use std::string::compare but couldn't get it to work - I don't think this type of comparison is accepted
//overloaded operator need by reference
bool Dog::operator==(Dog d){

    if(this->name==d.name){
        return true;
    }
    else{
        return false;
    }
}
void Dog::operator<<(Dog d){
    std::cout<<d.name<<" "<<endl;
}
bool Dog::operator>=(Dog d){
    return(this->name>=d.name);
}
Dog::Dog(const Dog& origDog){
    name = new string;
    *name=*(origDog.name);
}
string Dog::getValue(){
    return *name;
}