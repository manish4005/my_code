#include "stack.h"
#include "two_stacks_from_array.h"
#include <iostream>

using namespace std;

int main(void){

    int stack_size;

    cout<< "Enter the size of the stack to be created : ";
    cin>>stack_size;

    Two_stacks_from_array mystack(stack_size);

    mystack.push_to_stack1(5);
    mystack.print_stack1();
    mystack.print_stack2();

    mystack.push_to_stack1(7);
    mystack.print_stack1();
    mystack.print_stack2();

    mystack.push_to_stack2(2);
    mystack.print_stack1();
    mystack.print_stack2();

    mystack.push_to_stack1(4);
    mystack.print_stack1();
    mystack.print_stack2();

    mystack.push_to_stack1(0);
    mystack.print_stack1();
    mystack.print_stack2();

    mystack.push_to_stack2(3);
    mystack.print_stack1();
    mystack.print_stack2();

    mystack.push_to_stack1(5);
    mystack.print_stack1();
    mystack.print_stack2();

    mystack.push_to_stack1(65);
    mystack.print_stack1();
    mystack.print_stack2();

    mystack.push_to_stack1(44);
    mystack.print_stack1();
    mystack.print_stack2();

    mystack.pop_from_stack2();
    mystack.print_stack1();
    mystack.print_stack2();

    mystack.pop_from_stack1();
    mystack.print_stack1();
    mystack.print_stack2();

    mystack.pop_from_stack2();
    mystack.print_stack1();
    mystack.print_stack2();

    mystack.pop_from_stack2();
    mystack.print_stack1();
    mystack.print_stack2();

     mystack.push_to_stack1(5);
    mystack.print_stack1();
    mystack.print_stack2();

     mystack.push_to_stack1(5);
    mystack.print_stack1();
    mystack.print_stack2();

     mystack.push_to_stack1(5);
    mystack.print_stack1();
    mystack.print_stack2();

     mystack.push_to_stack1(5);
    mystack.print_stack1();
    mystack.print_stack2();

/*
int stack_size;

    cout<< "Enter the size of the stack to be created : ";
    cin>>stack_size;

    stack mystack(stack_size);
    mystack.push_to_stack(5);
    mystack.push_to_stack(13);
    mystack.print_stack();

    mystack.push_to_stack(27);
    mystack.push_to_stack(88);
    mystack.print_stack();
   int x = mystack.pop_from_stack();
   cout<<"returned from pop is "<<x<<endl;
    mystack.print_stack();
    mystack.pop_from_stack();
    mystack.print_stack();
*/
}
