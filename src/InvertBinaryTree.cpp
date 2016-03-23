/*
 * InvertBinaryTree.cpp
 *
 *  Created on: 2016-3-23
 *      Author: wangyuchen
 */

#include "InvertBinaryTree.h"

using namespace InvertBinaryTree;
//problem 226
TreeNode *InvertBinaryTree::invertTree(TreeNode * root){
	if(root==NULL)
		return NULL;
	TreeNode *tmp;
	tmp=root->left;
	root->left=root->right;
	root->right=tmp;
	root->left = invertTree(root->left);
	root->right=invertTree(root->right);
	return root;
	}

InvertBinaryTree::InvertBinaryTree() {
	// TODO Auto-generated constructor stub

}

InvertBinaryTree::~InvertBinaryTree() {
	// TODO Auto-generated destructor stub
}

