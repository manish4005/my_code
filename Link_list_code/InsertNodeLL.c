#include <stdio.h>
#include <string.h>
#include<stdlib.h>
#include "myhead.h" 

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
    InsertNode(&start,15);
    printLL(start);
   
}