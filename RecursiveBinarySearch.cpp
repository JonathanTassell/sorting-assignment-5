#include "RecursiveBinarySearch.h"
#include <iostream>


int RecursiveBinarySearch::searchHelper(std::vector<int> array, int key, int low, int high){
   
    int mid = low + (high - low) / 2;
    
    if(low<=high){
        if (array[mid] == key){
            return 1;
        } else if (array[mid] > key){
            return searchHelper(array, key, low, mid - 1);
        } else {
            return searchHelper(array, key, mid + 1, high);
        }
    }
    else return 0; 
}

bool RecursiveBinarySearch::search(std::vector<int>list, int key){

    return searchHelper(list, key, 0, list.size()-1);
}

