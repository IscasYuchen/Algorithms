#pragma once

#include<iostream>
#include<vector>
#include<queue>
using namespace std;

struct TreeNode {
	int val;
	TreeNode *left;
	TreeNode *right;
	TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class BinaryTreeLevelOrderTraversal
{
public:
	BinaryTreeLevelOrderTraversal();
	~BinaryTreeLevelOrderTraversal();
	vector<vector<int>> levelOrder(TreeNode* root);
};

