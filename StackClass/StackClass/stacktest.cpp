#include "stack.h"
#include <iostream>

using namespace std;

int main(void){

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
    mystack.pop_from_stack();
    mystack.print_stack();
    mystack.pop_from_stack();
    mystack.print_stack();

}
