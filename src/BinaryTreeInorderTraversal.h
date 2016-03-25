/*
 * BinaryTreeInorderTraversal.h
 *
 *  Created on: 2016-3-25
 *      Author: root
 */

#ifndef BINARYTREEINORDERTRAVERSAL_H_
#define BINARYTREEINORDERTRAVERSAL_H_

#include<iostream>
#include<vector>
using namespace std;

class BinaryTreeInorderTraversal {
public:
	BinaryTreeInorderTraversal();
	virtual ~BinaryTreeInorderTraversal();
	vector<int> inorderTraversal(TreeNode* root);
};

#endif /* BINARYTREEINORDERTRAVERSAL_H_ */
