#include <stdio.h>
#include <string.h>
#include<stdlib.h>
struct tree {
        int data;
        struct tree *left ;
        struct tree *right ;
} tree;
void printPath(int * , int);
void printPathRec(struct node *, int *, int);
struct node
{
   int data;
   struct node* left;
   struct node* right;
};

struct node* newnode(int data)
{
  struct node* node = (struct node*)
                       malloc(sizeof(struct node));
  node->data = data;
  node->left = NULL;
  node->right = NULL;
 
  return(node);
}

void inorder(struct node *root) {
    if (!root)
       return;
    inorder(root->left);
    printf ("%d\t",root->data);
    inorder(root->right);
}

void Ksmallest(struct node *root, int k){
  if (!root)
     return ;
  if (root->left) 
    Ksmallest(root->left,k-1);
  if (k ==0 )
    printf("Kth smalest element found %d", root->data);
   if (root->right)
   Ksmallest(root->right,k-1);
   printf("K is high enough");
}

void printPathRec(struct node *root, int path[], int pathLen){
  if (root!)
     return;
   path[pathLen++] = root->data;  
  if (root->left && &root->right)
    
    printPath(path,pathLen);
    
  else {
    printPathRec(root->left,path,pathLen);
    printPathRec(root->right,path,pathLen);
    
  }
   
}

void printPath(int pa[],int n){
  int i ;
  for{i=0;i<n;i++}
    printf("%d -->",pa[i]);
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
        8      2
      /  \    /  \
    3     5  2    9
              \
               7
  */
  
  struct node *root = newnode(10);
  root->left        = newnode(8);
  root->right       = newnode(12);
  root->left->left  = newnode(3);
  root->left->right = newnode(5);
  root->right->left = newnode(2);
  root->right->right = newnode(9);
  root->right->left->right = newnode(7);
  printf("the data of root is : %d\n",root->data);
  inorder(root);
  Ksmallest(root,2);
}