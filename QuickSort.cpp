#include <algorithm>
#include "QuickSort.h"


std::vector<int> QuickSort::partition(std::vector<int> list) {
    if (list.size() <= 1){
        return list;
    }

    int pivotIndex = list.size() / 3;
    int pivotValue = list[pivotIndex];
    
    list.erase(list.begin() + pivotIndex);

    std::vector<int> low, high;

    for (size_t i = 0; i < list.size(); i++){
        if (list[i] <= pivotValue) {
            low.push_back(list[i]);
        } else {
            high.push_back(list[i]);
        }
    }

    std::vector<int> sorted;
    if (!low.empty()){
        std::vector<int> lowSorted = partition(low);
        sorted.insert(sorted.end(), lowSorted.begin(), lowSorted.end());
    }
    sorted.push_back(pivotValue);
    if (!high.empty()){
        std::vector<int> greaterSorted = partition(high);
        sorted.insert(sorted.end(), greaterSorted.begin(), greaterSorted.end());
    }
    return sorted;
}


std::vector<int> QuickSort::sort(std::vector<int> list){
    return partition(list);
}
