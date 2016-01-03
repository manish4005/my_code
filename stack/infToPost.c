#include <stdio.h>

struct stack {
    int top;
    int cap;
    char *array;
}stack;

struct stack* createStack(int cap) {
    struct stack *s = (struct stack* )malloc(sizeof(struct stack));
    s->top=-1;
    s->cap=cap;
    s->array = (char *)malloc(cap);
    return s;
}
char topStack(struct stack *);
int precedence(char );
char topStack(struct stack *);
int isOpt(char );

void push(struct stack *s, char data){
    if ((s)->top >= s->cap -1){
        printf("can't add stack is full\n");
        
    }
    else {
        (s->top)++;
        s->array[s->top]=data;
    }
}

char pop(struct stack *s){
    if (s->top ==-1){
        printf("Can't pop: stack is empty\n");
    }
    else{
        //(s->top)--;
        return (s->array[s->top--]);
    }
}

void printStack(struct stack *s){
    int tmp;
    if(s->top >= s->cap-1) {
        printf("Empty stack\n");
        return;
    }
    tmp = s->top;
    while (tmp>=0){
        printf(": %c\n",s->array[tmp]);
        tmp--;
    }
}

void infixTosuffix(char a[], int n){
	struct stack *s =createStack(n);
	int i;
	for (i=0;i<n;i++){
		if (isOpt(a[i]))
		   printf("%c",a[i]);
		else {
			while((!isempty(s)) && (precedence(topStack(s)) >= precedence(a[i]))){
				printf("%c",pop(s));
			}
			push(s,a[i]);
		}
	}
	while(!isempty(s))
	   printf("%c",pop(s));
}
int isempty(struct stack *s){
	if (s->top==-1)
	   return 1;
	else 
	   return 0;
}
char topStack(struct stack *s){
	if (isempty(s))
	   return 0;
	else 
	   return s->array[s->top];
}

int precedence(char c) {
	if (c =='+' || c=='-')
		return 1;
	if (c =='*' || c=='/')
		return 2;
	if (c =='^')
		return 3;
	if (c =='(' || c==')')
		return 4;
}

int isOpt(char ch){
	
    return (ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z');

}

int main()
{
   /* struct stack* s1 = createStack(6);
    push(s1,'m');
    //printf("Top %d\n Pop : %d\n",s1->top,pop(s1));

    //pop(s1);
    push(s1,'e');
    push(s1,'g');
    push(s1,'h');
    printf("Top %d\n",s1->top);
    printStack(s1);*/
    char c[]="a+b+c*d+r";
    infixTosuffix(c,9);
    printf("\n");
    return 0;
}
