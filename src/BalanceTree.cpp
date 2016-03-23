/*
 * BalanceTree.cpp
 *
 *  Created on: 2016-3-23
 *      Author: wangyuchen
 */

#include "BalanceTree.h"
//problem 110
bool BalanceTree::isBalanced(TreeNode* root) {
    	if(HeightOfNode(root)==-1)
    		return  false;
        else
    			return true;
}
int BalanceTree::HeightOfNode(TreeNode* node){
    	if(node==NULL)
    		return 0;
    	int hl,hr;
    	hl = HeightOfNode(node->left);
    	hr = HeightOfNode(node->right);
    	if(hl == -1||hr == -1||abs(hl-hr)>1)
    		return  -1;
    	else
    		return max(hl,hr)+1;
}

BalanceTree::BalanceTree() {
	// TODO Auto-generated constructor stub

}

BalanceTree::~BalanceTree() {
	// TODO Auto-generated destructor stub
}

