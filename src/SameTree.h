/*
 * SameTree.h
 *
 *  Created on: 2016-3-23
 *      Author: wangyuchen
 */

#ifndef SAMETREE_H_
#define SAMETREE_H_

#include <iostream>
using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class SameTree {
public:
	SameTree();
	virtual ~SameTree();
	bool isSameTree(TreeNode* p, TreeNode* q);
};

#endif /* SAMETREE_H_ */
