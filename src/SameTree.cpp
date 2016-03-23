/*
 * SameTree.cpp
 *
 *  Created on: 2016-3-23
 *      Author: wangyuchen
 */

#include "SameTree.h"
using namespace SameTree;
SameTree::SameTree() {
	// TODO Auto-generated constructor stub

}

SameTree::~SameTree() {
	// TODO Auto-generated destructor stub
}

//problem 100
bool  SameTree::isSameTree(TreeNode *p,TreeNode *q){
	if(p==NULL&&q==NULL)
		return true;
	if((p==NULL&&q!=NULL)||(p!=NULL&&q==NULL))
		return false;
	if(p->val != q->val)
		return false;
	else
	{
		if(!isSameTree(p->left,q->left)||!isSameTree(p->right,q->right))
			return false;
		else
			return true;
	}
	}
