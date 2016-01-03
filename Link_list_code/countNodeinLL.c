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

void printLL(struct node *head){
    if(!head)
      return;
    while(head){
        printf("---> %d",head->data);
        head=head->next;
    }
}

int CountNode(struct node *head){
    int count =0;
    while (head){
        count++;
        head=head->next;
    }
    return count;
}

int main() {
    struct node *head;
    /* creating List
    
    10-->2-->5-->7-->NULL 
    
    */
    struct node *start = newnode(10);
    start->next = newnode(2);
    start->next->next = newnode(5);
    start->next->next->next = newnode(7);
    printLL(start);
    head = start;
    printf("\nthe Numver of node list has is:%d",CountNode(start));
}