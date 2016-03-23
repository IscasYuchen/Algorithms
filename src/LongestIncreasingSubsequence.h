/*
 * LongestIncreasingSubsequence.h
 *
 *  Created on: 2016-3-23
 *      Author: wangyuchen
 */

#ifndef LONGESTINCREASINGSUBSEQUENCE_H_
#define LONGESTINCREASINGSUBSEQUENCE_H_

#include <string.h>
#include <cmath>
#include <cstring>
#include <vector>
#include <iostream>
using namespace std;

class LongestIncreasingSubsequence {
public:
	LongestIncreasingSubsequence();
	virtual ~LongestIncreasingSubsequence();
	int Checkb(int *b,int len,int item);
	int Updateb(int *b,int length,int item);
	int lengthOfLIS(vector<int>& nums) ;
};

#endif /* LONGESTINCREASINGSUBSEQUENCE_H_ */
