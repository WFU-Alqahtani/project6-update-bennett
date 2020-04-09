#ifndef BINARYINSERTIONSORT_H
#define BINARYINSERTIONSORT_H

#include <vector>
#include "Dog.h"
using namespace std;

int binarySearch(vector<Dog> a, int item, int low, int high);
void insertionSort(vector<Dog> &a, int n);

#endif //BINARYINSERTIONSORT_H
