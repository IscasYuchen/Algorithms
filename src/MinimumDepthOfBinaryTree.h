/*
 * MinimumDepthOfBinaryTree.h
 *
 *  Created on: 2016-3-24
 *      Author: wangyuchen
 */

#ifndef MINIMUMDEPTHOFBINARYTREE_H_
#define MINIMUMDEPTHOFBINARYTREE_H_

#include<queue>
#include<iostream>
using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class MinimumDepthOfBinaryTree {
public:
	MinimumDepthOfBinaryTree();
	virtual ~MinimumDepthOfBinaryTree();
	int minDepth(TreeNode* root);
};

#endif /* MINIMUMDEPTHOFBINARYTREE_H_ */
