#include "SymmetricTree.h"


SymmetricTree::SymmetricTree()
{
}


SymmetricTree::~SymmetricTree()
{
}

bool SymmetricTree::isSymmetric(TreeNode * root)
{
	if (!root)
		return true;
	return sameTree(root->left,root->right);
}
//problem 101
bool SymmetricTree::sameTree(TreeNode * a, TreeNode * b)
{
	if (a == NULL && b == NULL)
		return true;
	else if ((a == NULL && b != NULL) || (a != NULL && b == NULL))
		return false;
	else if (a->val == b->val)
	{
		if (sameTree(a->left, b->right) && sameTree(a->right, b->left))
			return true;
	}
	return false;
}
