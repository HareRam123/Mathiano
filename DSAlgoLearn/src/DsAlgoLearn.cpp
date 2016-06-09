//============================================================================
// Name        : DSAlgoLearn.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <string>
#include <cmath>
#include <climits>
#include "AnagramSorter.h"
#include "MergeSort.h"
#include "RotatedSortedMinFinder.h"

using namespace std;
int main() {

//  1. Merge Sort Example

	int a[] = { 10,9,8,7,6,5,4,3,2,1,10,9,8,7,6,5,4,3,2,1,-1,0};
	int len = sizeof(a) / sizeof(a[0]);
 	MergeSort xMergeSorter;
	xMergeSorter.setArray(a,len);
	xMergeSorter.printArray("UnSortedArray");
	xMergeSorter.mergeSort();
	xMergeSorter.printArray("SortedArray");


//2.Anagram Sorter Example

	AnagramSorter xSorter;

	xSorter.add("acre");
	xSorter.add("abet");
	xSorter.add("care");
	xSorter.add("abed");
	xSorter.add("beat");
	xSorter.add("bade");
	xSorter.add("beta");
	xSorter.add("bead");
	xSorter.add("race");

	xSorter.print();
	xSorter.sortAnagrams();
	xSorter.printSortedAnagrams();

//3. RotatedSortArray

	//Test1
	std::vector<int> v = {9,10,11,12,13,14,15,16,17,1,2,3,4,5,6,7,8};
	//Test2:
	//std::vector<int> v = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11 };

	RotatedSortedMinFinder xMinFinder;
	xMinFinder.findMin(v);

	return 0;
}

