#include <stdio.h>
#include <string.h>
#include<stdlib.h>

struct node
{
   int data;
   struct node* next;

};


struct node* newnode(int data)
{
  struct node* node = (struct node*)
                       malloc(sizeof(struct node));
  node->data = data;
  node->next = NULL;;
 
  return(node);
}

void InsertNode(struct node **head,int data){
    struct node *temp;
    if (!*(head)){
       
        *head = (struct node*)malloc(sizeof(struct node));
        (*head)->data = data;
        (*head)->next = NULL;
        return;
    }
    temp = *head;
    while(temp->next){
        //printf("Inside temp with %d\n",temp->next->data);
        temp=temp->next;
    }
    temp->next = (struct node*)malloc(sizeof(struct node));
    temp->next->data = data;
    temp->next->next = NULL;
}

void printLL(struct node *head){
    if(!head)
      return;
    while(head){
        printf("---> %d",head->data);
        head=head->next;
    }
}

/*ABOVE ARE HELPING FUNTIONS
 WRITE Proper Function Here */

void deleteElementLL(struct node **head, int data){
    struct node *temp;
    if(!*head)
       return;
    temp = *head;
    while (temp->next){
        if (temp->next->data==data){
            temp->next=(temp->next)->next;
        }
        
        temp= temp->next;
    }
    
}

int main() {
    struct node *head;
    int i;
    /* creating List
        10-->2-->5-->7-->15-->16-->NULL 
    */
    struct node *start = NULL;
    InsertNode(&start,10);
    InsertNode(&start,2);
    InsertNode(&start,5);
    InsertNode(&start,7);
    InsertNode(&start,15);
    InsertNode(&start,16);
    printLL(start);
    deleteElementLL(&start,7);
    printLL(start);
    
    
}