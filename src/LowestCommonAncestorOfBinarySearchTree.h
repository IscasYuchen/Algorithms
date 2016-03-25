#pragma once

#include<iostream>
#include<vector>
using namespace std;

struct TreeNode {
	int val;
	TreeNode *left;
	TreeNode *right;
	TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class LowestCommonAncestorOfBinarySearchTree
{
public:
	LowestCommonAncestorOfBinarySearchTree();
	~LowestCommonAncestorOfBinarySearchTree();
	TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q);
	vector<TreeNode*> findNode(TreeNode *root, TreeNode *node);
};

