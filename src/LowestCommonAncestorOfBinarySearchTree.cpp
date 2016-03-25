#include "LowestCommonAncestorOfBinarySearchTree.h"



LowestCommonAncestorOfBinarySearchTree::LowestCommonAncestorOfBinarySearchTree()
{
}


LowestCommonAncestorOfBinarySearchTree::~LowestCommonAncestorOfBinarySearchTree()
{
}
//problem 235
TreeNode * LowestCommonAncestorOfBinarySearchTree::lowestCommonAncestor(TreeNode * root, TreeNode * p, TreeNode * q)
{
	if(root==NULL)
		return NULL;
	if (root->val == p->val || root->val == q->val)
		return root;
	vector<TreeNode*> pVector, qVector;
	pVector = findNode(root,p);
	qVector = findNode(root,q);
	TreeNode *pTop, *qTop,*current=root;
	int size = min(pVector.size(),qVector.size());
	for (int i = 0;i < size;i++)
	{
		pTop = pVector[pVector.size()-1-i];
		qTop = qVector[qVector.size()-1-i];
		if (pTop != qTop)
			return current;
		else
			current = pTop;
	}
}

vector<TreeNode*> LowestCommonAncestorOfBinarySearchTree::findNode(TreeNode * root, TreeNode * node)
{
	vector<TreeNode*> retLeft,retRight,ret;
	if (root == NULL)
		return vector<TreeNode*>();
	if (root->val != node->val)
	{
		retLeft = findNode(root->left,node);
		retRight = findNode(root->right, node);
		if (!retLeft.empty())
		{
			retLeft.push_back(root);
			return retLeft;
		}
		else if (!retRight.empty())
		{
			retRight.push_back(root);
			return retRight;
		}
		else return vector<TreeNode*>();
	}
	else
	{
		ret.push_back(root);
		return ret;
	}
}
