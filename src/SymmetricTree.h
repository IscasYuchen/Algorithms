#pragma once
#include<iostream>
using namespace std;

struct TreeNode {
	int val;
	TreeNode *left;
	TreeNode *right;
	TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class SymmetricTree
{
public:
	SymmetricTree();
	virtual ~SymmetricTree();
	bool isSymmetric(TreeNode* root);
	bool sameTree(TreeNode* a,TreeNode* b);
};

