#include <stdlib.h>
// return the max of two number
int max(int a, int b) {
  return a>b?a:b ;
}
struct tree {
        int data;
        struct tree *left ;
        struct tree *right ;
} tree;
//structure of a node 
struct node
{
   int data;
   struct node* left;
   struct node* right;
};
// creating a new tree node
struct node* newnode(int data)
{
  struct node* node = (struct node*)
                       malloc(sizeof(struct node));
  node->data = data;
  node->left = NULL;
  node->right = NULL;
 
  return(node);
}

// finding height of thet tree
int heightTree(struct node *root){
    if (!root)
      return 0 ;
    else 
      return 1+ max(heightTree(root->right),heightTree(root->left));  
}

//treversal of the tree inorder 
void inorder(struct node *root) {
    if (!root)
       return;
    inorder(root->left);
    printf ("%d\t",root->data);
    inorder(root->right);
}

//insert into a binary search tree
void insertBST (struct node *root, int data) {
	struct node temp ;
	if (!root) {
		//ddprintf( "here\n");
		root=newnode(data);
		return;
	}
	if ((root)->data < data) {
		if (root->right)
		    insertBST(root->right,data);
		else {
			root->right=newnode(data);
			return;
		}
	}
	else { 
		if (root->left)
			insertBST(root->left,data);
		else {
			root->left=newnode(data);
			return;
		}
	}
}

void printPath(int pa[],int n){
  int i ;
  for (i=0;i<n;i++)
    printf("%d -->",pa[i]);
}
void printPathRec(struct node *root, int path[], int pathLen){
  if (!root)
     return;
   path[pathLen] = root->data;
   pathLen++;  
  if (root->left==NULL && root->right==NULL) {
    printf("the path: \n");
    printPath(path,pathLen);
  }
  else {
    printPathRec(root->left,path,pathLen);
    printPathRec(root->right,path,pathLen);
    
  }
   
}

//searching an element into a binary search tree
int searchBst(struct node *root,int data) {
  if (!root)
    return 0;
  if (root->data == data)
    return 1;
  else if (root->data < data)
     return searchBst(root->right, data);
  else
      return searchBst(root->left,data); 
   
}

void Ksmallest(struct node *root, int k,int count){
  //printf ("here rocks");
  if (!root)
     return ;
  printf("the data %d nd count: %d\n",root->data,count);
  //if (root->left) 
    Ksmallest(root->left,k,count);
  count++;
  if (count >= k )
   { printf("Kth smalest element found %d\n", root->data);
    return;
   }
   
   if (root->right)
   Ksmallest(root->right,k,count);
   //printf("K is high enough");
}

void mirror(struct node *root) {
  struct node *temp;
  if (!root)
     return;
  mirror(root->left);
  mirror(root->right);
  temp = root->left;
  root->left = root->right;
  root->right = temp;
}