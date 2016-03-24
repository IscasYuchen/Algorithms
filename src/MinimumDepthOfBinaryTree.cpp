/*
 * MinimumDepthOfBinaryTree.cpp
 *
 *  Created on: 2016-3-24
 *      Author: wangyuchen
 */

#include "MinimumDepthOfBinaryTree.h"

MinimumDepthOfBinaryTree::MinimumDepthOfBinaryTree() {
	// TODO Auto-generated constructor stub

}

MinimumDepthOfBinaryTree::~MinimumDepthOfBinaryTree() {
	// TODO Auto-generated destructor stub
}

int MinimumDepthOfBinaryTree::minDepth(TreeNode *root){
	if(root==NULL)
		return 0;
	queue<TreeNode*> queue;
	int levelNum,level=1;
	TreeNode *node;
	queue.push(root);
	int ret=1,i;
	while(!queue.empty()){
		levelNum = queue.size();
		for(i=0;i<levelNum;i++){
			node = queue.front();
			queue.pop();
			if(node->left==NULL&&node->right==NULL)
				return level;
			else{
				if(node->left!=NULL)
					queue.push(node->left);
				if(node->right!=NULL)
					queue.push(node->right);
			}
		}
		level++;
	}
}

