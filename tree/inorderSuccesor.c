#include <stdio.h>
#include "treeHeader.h"

int inorderSuccessor(struct node *root, int data){
	if (!root)
		return 0	;
	inorderSuccessor(root->left,data);
	return 0;
}

void mirrorTree(struct node *root) {
	struct node *temp;
	struct node *left = NULL, *right = NULL;
	if (!root)
		return;
	mirrorTree(root->left);
	mirrorTree(root->right);
	temp = root->right;
	root->right=root->left;
	root->left = temp;
	
}

int main() {
	struct node *root = newnode(15);
	struct node *mir ;
	
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
	insertBST(root,5);
	insertBST(root,45);
	insertBST(root,2);
	insertBST(root,34);	
	//inorder(root);
	/*printf("here \n\n");
		insertBST(root,36);	
	printf("height of the tree %d\n",heightTree(root));
	inorder(root);
	
	printf("the data 34 is in %d ", searchBst(root,17));
	*/
	
	printf("before mirror Inorder : \n");
	inorder(root);
	mirrorTree(root);
	
	printf("After mirror Inorder : \n");
	inorder(root);
	return 1;
}