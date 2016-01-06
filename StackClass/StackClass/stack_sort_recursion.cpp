#include "stack.h"
//#include "two_stacks_from_array.h"
#include <iostream>

using namespace std;

swap(int* x,int* y){

    int temp = *x;
    *x=*y;
    *y = temp;

}

insert_reverse(stack* _stack,int value){
    cout<<"Insert reverse"<<endl;
   if (_stack->isempty())
        _stack->push_to_stack(value);
    else
    {

        int temp = _stack->pop_from_stack();
        insert_reverse(_stack, value);

        _stack->push_to_stack(temp);
    }
    _stack->print_stack();
}

insert_sorted(stack* _stack,int value){
  //  cout<<"Insert reverse"<<endl;
   if (_stack->isempty())
        _stack->push_to_stack(value);
    else
    {

        int temp = _stack->pop_from_stack();
        if(temp<value)
            swap(temp,value);
        insert_sorted(_stack, value);

        _stack->push_to_stack(temp);
    }
   // _stack->print_stack();
}

 reverse(stack* _stack){

   int temp;
   if(!_stack->isempty()){
        temp = _stack->pop_from_stack();
        reverse(_stack);
        insert_sorted(_stack,temp);}
 }


int main(void){

    int stack_size;

    cout<< "Enter the size of the stack to be created : ";
    cin>>stack_size;

    stack mystack(stack_size);
    mystack.push_to_stack(13);
    mystack.push_to_stack(88);
    mystack.push_to_stack(27);
    mystack.push_to_stack(5);
    mystack.push_to_stack(46);
    mystack.print_stack();
    reverse(&mystack);
     mystack.print_stack();

}



