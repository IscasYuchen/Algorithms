#include "BinaryTreeLevelOrderTraversal.h"



BinaryTreeLevelOrderTraversal::BinaryTreeLevelOrderTraversal()
{
}


BinaryTreeLevelOrderTraversal::~BinaryTreeLevelOrderTraversal()
{
}
//problem 102

vector<vector<int>> BinaryTreeLevelOrderTraversal::levelOrder(TreeNode * root)
{
	vector<vector<int>> ret;
		queue<TreeNode*> queue;
		vector<int> resultLevel;
		TreeNode *temp;
		int numLevel = 0,i;
		if(root == NULL)
			return ret;

		queue.push(root);
		while (!queue.empty())
		{
			numLevel = queue.size();
			resultLevel.clear();
			for (i = 0;i < numLevel;i++)
			{
				temp = queue.front();
				queue.pop();
				resultLevel.push_back(temp->val);
				if(temp->left!=NULL)
					queue.push(temp->left);
				if(temp->right!=NULL)
					queue.push(temp->right);
			}
			ret.push_back(resultLevel);
		}
		return ret;
}
//problem 107
vector<vector<int>>BinaryTreeLevelOrderTraversal::levelOrderBottom(TreeNode* root){
	vector<vector<int>> top = levelOrder(root);
	vector<vector<int>> bottom;
	vector<int> element;
	int num = top.size();
	for(int i=num-1;i>=0;i--)
	{
		element.clear();
		element=top[i];
		bottom.push_back(element);
	}
	return bottom;
}
