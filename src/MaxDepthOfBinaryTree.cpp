/*
 * MaxDepthOfBinaryTree.cpp
 *
 *  Created on: 2016-3-23
 *      Author: wangyuchen
 */

#include "MaxDepthOfBinaryTree.h"

using namespace MaxDepthOfBinaryTree;
//problem 104
int MaxDepthOfBinaryTree::maxDepth(TreeNode* root){
		if(root==NULL)
			return 0;
		return (max(maxDepth(root->left),maxDepth(root->right))+1);
	}

MaxDepthOfBinaryTree::MaxDepthOfBinaryTree() {
	// TODO Auto-generated constructor stub

}

MaxDepthOfBinaryTree::~MaxDepthOfBinaryTree() {
	// TODO Auto-generated destructor stub
}

