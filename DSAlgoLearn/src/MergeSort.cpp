/*
 * MergeSort.cpp
 *
 *  Created on: 18-May-2016
 *      Author: hareram
 */
#include "MergeSort.h"

MergeSort::MergeSort() {
	// TODO Auto-generated constructor stub
	a = NULL;
	len =0 ;

}

MergeSort::~MergeSort() {
	// TODO Auto-generated destructor stub
}

void MergeSort::printArray(string name) {
	cout << name << " : ";
	for (int i = 0; i < len; i++)
		cout << a[i] << " ";
	cout << "\n";
}

void MergeSort::merge(int *a, int low, int mid, int high) {

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

void MergeSort::mergeSortE(int *a, int low, int high) {

	if (low < high) {
		int mid = (low + high) / 2;
		mergeSortE(a, low, mid);
		mergeSortE(a, mid + 1, high);
		merge(a, low, mid, high);
	}
}

void MergeSort::mergeSort() {

	int low = 0;
	int high = len-1;
	mergeSortE(a, low, high);
}

void MergeSort::setArray(int* array,int len){
	a = array;
	this->len = len;
}
