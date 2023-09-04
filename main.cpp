#include "Sort.h"
#include "BubbleSort.h"
#include "RecursiveBinarySearch.h" 
#include "QuickSort.h"
#include <string>
#include <vector>
#include <sstream>
#include <iostream>

using namespace std; 

int ReadNumbers( const string & s, vector <int> & v ) {
    istringstream is( s );
    int n;
    while( is >> n ) {
        v.push_back( n );
    }
    return v.size();
}


int main(){
    RecursiveBinarySearch binary; 
    QuickSort quick; 

    bool trueFalse; 

    string userInput;
    string userInputBinary; 
    vector <int> unsortedArray;

    getline( cin, userInput );
    ReadNumbers(userInput, unsortedArray);

    vector <int> sortedArray = quick.sort(unsortedArray); 

    trueFalse = binary.search(sortedArray, 1); 
    
   
    

    if(trueFalse == true){
        cout << "true" << " "; 
    }
    else cout << "false" << " "; 
    
    for(size_t i =0; sortedArray.size() > i; i++){
        std::cout << sortedArray.at(i) << " "; 
    }
}