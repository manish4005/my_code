#include <stdio.h>
#include "treeHeader.h"

int main() {
	struct node *root = newnode(15);
	
	/* Constructed binary tree is
            15
          /   \
        10      45
      /  \    /  \
    7     5  34    9
   /           \
  2             36
  */
/*	
	root->left        = newnode(8);
  root->right       = newnode(38);
  root->left->left  = newnode(3);
  root->left->right = newnode(5);
  root->right->left = newnode(30);
  root->right->right = newnode(9);
*/	
	insertBST(root,10);
	insertBST(root,7);
	insertBST(root,8);
	insertBST(root,45);
	insertBST(root,2);
	insertBST(root,34);	
	inorder(root);
	printf("here \n\n");
		insertBST(root,36);	/*
	printf("height of the tree %d\n",heightTree(root));
	inorder(root);
	
	printf("the data 34 is in %d ", searchBst(root,17));
	Ksmallest(root,2,0);
	*/return 1;
}