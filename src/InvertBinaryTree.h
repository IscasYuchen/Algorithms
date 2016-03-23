/*
 * InvertBinaryTree.h
 *
 *  Created on: 2016-3-23
 *      Author: wangyuchen
 */

#ifndef INVERTBINARYTREE_H_
#define INVERTBINARYTREE_H_
#include<iostream>
using namespace std;

 struct TreeNode {
     int val;
     TreeNode *left;
     TreeNode *right;
     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 };

class InvertBinaryTree {
public:
	InvertBinaryTree();
	virtual ~InvertBinaryTree();
	TreeNode* invertTree(TreeNode* root);
};

#endif /* INVERTBINARYTREE_H_ */
