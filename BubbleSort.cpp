#include "BubbleSort.h"
#include <utility> 
#include <iostream> 

std::vector<int> BubbleSort::sort(std::vector<int> list){

    bool swapped =true; 
    int arraySize = list.size(); 

    if(arraySize >= 3){
        std::swap(list.at(2), list.at(arraySize-1)); 
    }
    
    while(swapped){
        swapped = false; 
        for(int i = 0; i < arraySize; i++){
            for(int j = 0; j < arraySize -1; j++){
                if(list.at(j) > list.at(j+1)){
                    std::swap(list.at(j), list.at(i)); 
                    swapped=true; 
                }
            }   
        }
    }
    return list; 
}