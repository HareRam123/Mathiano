/*
 * AnagramSorter.h
 *
 *  Created on: 18-May-2016
 *      Author: hareram
 */

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <map>
#include <list>

#ifndef ANAGRAMSORTER_H_
#define ANAGRAMSORTER_H_

using namespace std;
typedef std::vector<std::string> tvString;

class AnagramSorter {
public:
	AnagramSorter();
	virtual ~AnagramSorter();

	void add(std::string sAnagrams){
		vAnagrams.push_back(sAnagrams);
	}

	void print(){
		for(auto &anagram: vAnagrams){
			std::cout<< anagram << " ";
		}
		cout<<"\n";
	}

	void sortAnagrams(){
		for(const auto &anagram: vAnagrams){
			std::string sortedAnagram = anagram;
			std::sort(sortedAnagram.begin(),sortedAnagram.end());
			mAnagramMap[sortedAnagram].push_back(anagram);
		}
	}

	void printSortedAnagrams(){
		for(const auto &keyAnagramPair: mAnagramMap){
			for(const auto &anagram: keyAnagramPair.second){
				std::cout<< anagram << " ";
			}
		}
	}


private:
	std::vector<std::string> vAnagrams;
	std::map<std::string,tvString> mAnagramMap;

};

#endif /* ANAGRAMSORTER_H_ */
