run.o: main.o BubbleSort.o RecursiveBinarySearch.o QuickSort.o
	g++ main.o BubbleSort.o RecursiveBinarySearch.o QuickSort.o -o run 

main.o: main.cpp 
	g++ -c main.cpp

BubbleSort.o: BubbleSort.h BubbleSort.cpp
	g++ -c BubbleSort.cpp 

RecursiveBinarySearch.o: RecursiveBinarySearch.h RecursiveBinarySearch.cpp
	g++ -c RecursiveBinarySearch.cpp 

QuickSort.o: QuickSort.h QuickSort.cpp
	g++ -c QuickSort.cpp 

clean: 
	-rm *.o    