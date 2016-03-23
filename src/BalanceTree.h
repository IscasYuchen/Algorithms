/*
 * BalanceTree.h
 *
 *  Created on: 2016-3-23
 *      Author: wangyuchen
 */

#ifndef BALANCETREE_H_
#define BALANCETREE_H_

#include <string.h>
#include <cmath>
#include <cstring>
#include <vector>
#include <iostream>
using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class BalanceTree {
public:
	BalanceTree();
	virtual ~BalanceTree();
	bool isBalanced(TreeNode* root);
	int HeightOfNode(TreeNode* node);
};

#endif /* BALANCETREE_H_ */
