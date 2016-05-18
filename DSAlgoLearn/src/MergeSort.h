/*
 * MergeSort.h
 *
 *  Created on: 18-May-2016
 *      Author: hareram
 */

#include <string>
#include <iostream>
#include <string>
#include <cmath>
#include <climits>

using namespace std;


#ifndef MERGESORT_H_
#define MERGESORT_H_

class MergeSort {
public:
	MergeSort();
	virtual ~MergeSort();

	void printArray(string name);
    void merge(int *a, int low, int mid, int high);
	void mergeSortE(int *a, int low, int high);
	void mergeSort();
	void setArray(int* array,int len);

private:
	int *a;
	int len;
};

#endif /* MERGESORT_H_ */
