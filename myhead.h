struct node
{
   int data;
   struct node* next;

};
// Printing the Link List
void printLL(struct node *head){
    if(!head)
      return;
    while(head){
        printf("---> %d",head->data);
        head=head->next;
    }
}

//Create the Link list node with data
struct node* newnode(int data)
{
  struct node* node = (struct node*)
                       malloc(sizeof(struct node));
  node->data = data;
  node->next = NULL;
 
  return(node);
}

//Insert a node at the end of Link list 
void InsertNode(struct node **head,int data){
    struct node *temp;
    if (!*(head)){
        printf("inside Null\n");
        *head = (struct node*)malloc(sizeof(struct node));
        (*head)->data = data;
        (*head)->next = NULL;
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
