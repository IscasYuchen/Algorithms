/*
 * MaxDepthOfBinaryTree.h
 *
 *  Created on: 2016-3-23
 *      Author: wangyuchen
 */

#ifndef MAXDEPTHOFBINARYTREE_H_
#define MAXDEPTHOFBINARYTREE_H_

#include <iostream>
using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class MaxDepthOfBinaryTree {
public:
	MaxDepthOfBinaryTree();
	virtual ~MaxDepthOfBinaryTree();
	int maxDepth(TreeNode* root);
};

#endif /* MAXDEPTHOFBINARYTREE_H_ */
