/*
 * RotatedSortedMinFinder.cpp
 *
 *  Created on: 09-Jun-2016
 *      Author: hareram
 */

#include "RotatedSortedMinFinder.h"
#include <iostream>

RotatedSortedMinFinder::RotatedSortedMinFinder() {
	// TODO Auto-generated constructor stub

}

RotatedSortedMinFinder::~RotatedSortedMinFinder() {
	// TODO Auto-generated destructor stub
}

int RotatedSortedMinFinder::findMin(const std::vector<int>& vInputArray) {

	int start = 0;
	int end = vInputArray.size()-1;

	while (getMinRange(start, end, vInputArray)) {
		//getMinRange(start,end, vInputArray);

	}

	if (vInputArray[start] < vInputArray[end]) {
		std::cout << "minElement:" << vInputArray[start] << std::endl;
	} else {
		std::cout << "minElement:" << vInputArray[end] << std::endl;
	}

	//getMinRange(start,end, vInputArray);
	return 0;

}

bool RotatedSortedMinFinder::getMinRange( int& start,int &end , const std::vector<int>& vInputArray){
	int mid = (start+end)/2;

	if(vInputArray[start]< vInputArray[mid] ){
		if(!(vInputArray[start] < vInputArray[end-1])) //special case, Sorted Array
			start = mid;
		else{
			end = mid; // already sorted Subarray, So the min lies on the left side of mid
		}
	}else{
		end = mid;
	}

	if(start == (end-1)){
		return false;
	}else{
		return true;
	}
}

