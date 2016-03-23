/*
 * BinaryTreePaths.h
 *
 *  Created on: 2016-3-23
 *      Author: wangyuchen
 */

#ifndef BINARYTREEPATHS_H_
#define BINARYTREEPATHS_H_

#include <cmath>
#include <cstring>
#include <vector>
#include <iostream>
#include <sstream>
using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class BinaryTreePaths {
public:
	BinaryTreePaths();
	virtual ~BinaryTreePaths();
    vector<string> binaryTreePaths(TreeNode* root);
};

#endif /* BINARYTREEPATHS_H_ */
