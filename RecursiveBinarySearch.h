#ifndef RECURSIVEBINARYSEARCH_H
#define RECURSIVEBINARYSEARCH_H

#include<vector> 

class RecursiveBinarySearch{
    public:

        int searchHelper(std::vector<int> array, int key, int low, int high); 

        bool search(std::vector<int>, int);
}; 

#endif