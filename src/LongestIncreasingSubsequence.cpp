/*
 * LongestIncreasingSubsequence.cpp
 *
 *  Created on: 2016-3-23
 *      Author: wangyuchen
 */

#include "LongestIncreasingSubsequence.h"
//problem 300
int LongestIncreasingSubsequence::Checkb(int *b,int len,int item){
	int i ,ret =0;
	for(i=1;i<=len;i++)
		if(b[i]<item&&b[i]!=0)
			ret = i;
	return ret;
}

int LongestIncreasingSubsequence::Updateb(int *b,int length,int item){
	if(b[length]>item||b[length]==0)
		b[length]=item;
	return 0;
}

int LongestIncreasingSubsequence::lengthOfLIS(vector<int>& nums) {
	int len = nums.size();
	int *a = new int[len];
	int *b = new int[len+1];
	int i,j,max=0;
	for(i=0;i<len+1;i++)
		b[i]=0;
	for(i=0;i<len;i++){
		int lastSmall = Checkb(b,len,nums[i]);
		a[i]=lastSmall+1;
		Updateb(b,a[i],nums[i]);
	}
	for(i=0;i<len;i++){
		if(a[i]>max)
			max=a[i];
	}
	return max;
}

LongestIncreasingSubsequence::LongestIncreasingSubsequence() {
	// TODO Auto-generated constructor stub

}

LongestIncreasingSubsequence::~LongestIncreasingSubsequence() {
	// TODO Auto-generated destructor stub
}

