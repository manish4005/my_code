#include "stack.h"
#include <iostream>
#include <cstdio>

stack::stack(int size)
{

    MAX_STACK_SIZE = size;
    arr = new int[MAX_STACK_SIZE];

}

stack::~stack()
{
    delete[] arr;
}


int stack::pop_from_stack(){
   if(head == bottom){
        std::cerr << "STACK EMPTY. POP FAILED "<< std::endl;
        return -1;
 }

  else{
    std::cout<<" Popped "<<arr[head]<<std::endl;
    head--;
    return arr[head];

  }

}


bool stack::push_to_stack(int value){

    if(head + 1 == MAX_STACK_SIZE){
        std::cerr << "Error : STACK FULL. "<<value<<" not pushed"<< std::endl;
        return false;
    }
    else{
        arr[head+1]=value;
        std::cout<<" Pushed "<<arr[head+1]<<std::endl;
        head++;
        return true;
    }

}

void stack::print_stack(){

    if(head == bottom){
        std::cerr<<"STACK IS EMPTY. NOTHING TO PRINT"<<std::endl;
    }
    else{
        std::cout<<"The Stack contains following values : \n"<<std::endl;
        for(int i=head;i>bottom;i--){
            std::cout<<" "<<arr[i]<<" \n"<<std::endl;
        }

}
}

