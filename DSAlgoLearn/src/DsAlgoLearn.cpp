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
using namespace std;

void printArray(string name, int* a, int len) {
	cout << name << " : ";
	for (int i = 0; i < len; i++)
		cout << a[i] << " ";
	cout << "\n";
}

void merge(int *a, int low, int mid, int high) {

	int len_la = mid - low + 1;
	int len_ra = high - mid;

	int la[len_la ];
	int ra[len_ra ];

	for (int i = 0; i < len_la; i++)
		la[i] = a[i + low];
	for (int i = 0; i < len_ra; i++)
		ra[i] = a[i + mid + 1];


	//printArray("LeftArray", la, len_la);
	//printArray("RightArray", ra, len_ra);

	int laIter = 0;
	int raIter = 0;
	int mIter = low;


	while (laIter < len_la && raIter < len_ra) {

		if (la[laIter] <= ra[raIter]) {
			a[mIter++] = la[laIter++];
		} else {
			a[mIter++] = ra[raIter++];
		}
	}

	if (laIter == len_la) {
		for (int i = raIter; i < len_ra; i++)
			a[mIter++] = ra[i];
	} else {
		for (int i = laIter; i < len_la; i++)
			a[mIter++] = la[i];
	}

}
void mergeSortE(int *a, int low, int high) {

	if (low < high) {
		int mid = (low + high) / 2;
		mergeSortE(a, low, mid);
		mergeSortE(a, mid + 1, high);
		merge(a, low, mid, high);
	}
}

void mergeSort(int *a, int len) {

	int low = 0;
	int high = len-1;
	mergeSortE(a, low, high);
}

int main() {

	//int a[] = { 1, 5, 7, 2, 4, 9, 6, 8, 5 ,3,5,1,6,7,8};
	int a[] = { 10,9,8,7,6,5,4,3,2,1,10,9,8,7,6,5,4,3,2,1,-1,0};
	//int a[] = { 6,5,3,1,8,7,2,4};

	int len = sizeof(a) / sizeof(int);
	printArray("UnSortedArray", a, len);
	mergeSort(a, len);
	printArray("SortedArray", a, len);
	return 0;
}

