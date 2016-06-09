/*
 * RotatedSortedMinFinder.h
 *
 *  Created on: 09-Jun-2016
 *      Author: hareram
 */

#ifndef ROTATEDSORTEDMINFINDER_H_
#define ROTATEDSORTEDMINFINDER_H_
#include <vector>

class RotatedSortedMinFinder {
public:
	RotatedSortedMinFinder();
	virtual ~RotatedSortedMinFinder();

	int findMin(const std::vector<int>& vInputArray);


private:
	bool getMinRange(int &start,int& end,const std::vector<int>& vInputArray);

};

#endif /* ROTATEDSORTEDMINFINDER_H_ */
