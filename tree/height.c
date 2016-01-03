#include <stdio.h>
#include <string.h>
#include<stdlib.h>
#include "treeheader.h"
#define MAX(a,b) (a>b?a:b)



int height(struct node *root){
    if (!root)
        return 0;
    else {
        return(1+MAX(height(root->left),height(root->right)));
    }
        
}

int main() {
/*//    struct tree *root;
  //  root = (struct tree * )malloc(sizeof(tree));
   // root->left = NULL;
   root->right = NULL;
    root->data = 5;
    printf("the data of root is : %d\n",root->data);
    */
 /* Constructed binary tree is
            10
          /   \
        8      12
      /  \    /  \
    3     5  2    9
              \
               7
  */
  int pa[100];
  struct node *root = newnode(10);
  static int count;
  root->left        = newnode(8);
  root->right       = newnode(12);
  root->left->left  = newnode(3);
  root->left->right = newnode(5);
  root->right->left = newnode(2);
  root->right->right = newnode(9);
  root->right->left->right = newnode(7);
  //printf("the data of root is : %d\n",root->data);
  inorder(root);
  printPathRec(root,pa,0);
  printf("Indorder of mirror Tree: \n");
  mirror(root);
  inorder(root);
 // Ksmallest(root,2,count);
  //printf ("the bigger no is %d and height %d \n",MAX(3,5),height(root));
}