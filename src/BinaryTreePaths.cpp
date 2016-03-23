/*
 * BinaryTreePaths.cpp
 *
 *  Created on: 2016-3-23
 *      Author: wangyuchen
 */

#include "BinaryTreePaths.h"

//Problem 257
    vector<string>BinaryTreePaths::binaryTreePaths(TreeNode* root) {
    	vector<string> ret;
    	string context;
    	vector<string> leftResult,rightResult;
    	stringstream stream;
    	int leftNum,rightNum,i;
    	if(root == NULL)
    		return ret;
    	if(root->left==NULL && root->right == NULL)
    	{
    		context.clear();
    		stream.str("");
    		stream<<root->val;
    		context += stream.str();
    		ret.push_back(context);
    		return ret;
    	}
    	if(root->left!=NULL)
    	{
    		leftResult = binaryTreePaths(root->left);
    		leftNum=leftResult.size();
    		for(i=0;i<leftNum;i++)
    		{
    			string leftElement = leftResult[i];
    			context.clear();
        		stream.str("");
        		stream<<root->val;
        		context += stream.str();
    			context += "->";
    			context.append(leftElement);
    			ret.push_back(context);
    		}
    	}
    	if(root->right!=NULL)
    	{
    		rightResult = binaryTreePaths(root->right);
    		rightNum = rightResult.size();
    		for(i=0;i<rightNum;i++)
    		{
    			string rightElement = rightResult[i];
    			context.clear();
        		stream.str("");
        		stream<<root->val;
        		context += stream.str();
    			context += "->";
    			context.append(rightElement);
    			ret.push_back(context);
    		}
    	}
     return ret;
    }


BinaryTreePaths::BinaryTreePaths() {
	// TODO Auto-generated constructor stub

}

BinaryTreePaths::~BinaryTreePaths() {
	// TODO Auto-generated destructor stub
}

