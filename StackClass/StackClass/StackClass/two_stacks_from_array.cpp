#include "two_stacks_from_array.h"
#include <iostream>
#include <cstdio>

using namespace std;

Two_stacks_from_array::Two_stacks_from_array(int size_of_array)
{
   array_size = size_of_array;
   arr = new int[array_size];
   head2 = array_size;

}

Two_stacks_from_array::~Two_stacks_from_array()
{
    delete[] arr;
}

//Stack 1
bool Two_stacks_from_array::push_to_stack1(int value)
{
    if(head1+1 == head2){
        std::cerr<<"STACK FULL : "<<value<<" not pushed."<<std::endl;
        return false;
        }
    else{
        cout<<"PUSHED TO STACK 1 : "<<value<<endl;
        arr[head1+1]=value;
        head1++;
        return true;
    }
}

int Two_stacks_from_array::pop_from_stack1()
{
    if(head1<0)
        std::cerr<<"STACK 1 EMPTY !!. NOTHING POPPED"<<std::endl;
    else{
        cout<<"POPPED FROM STACK 1 : "<<arr[head1]<<std::endl;
        head1--;
        return arr[head1+1];

    }

}

void Two_stacks_from_array::print_stack1()
{
    if(head1<0)
        std::cout<<"STACK1 EMPTY. NOTHING TO PRINT."<<std::endl;
    else{
         std::cout<<"Contents of stack1 are : "<<std::endl;
        for(int i=0;i<head1+1;i++){
            std::cout<<arr[i]<<std::endl;
        }
    }
}


//Stack2

bool Two_stacks_from_array::push_to_stack2(int value)
{
     if(head2-1 == head1){
        std::cerr<<"STACK FULL : "<<value<<" not pushed."<<std::endl;
        return false;
        }
    else{
        cout<<"PUSHED TO STACK 2 : "<<value<<endl;
        arr[head2-1]=value;
        head2--;
        return true;
    }

}

int Two_stacks_from_array::pop_from_stack2()
{
     if(head2==array_size)
        std::cerr<<"STACK 2 EMPTY. NOTHING POPPED!!"<<std::endl;
    else{
        cout<<"POPPED FROM STACK 2: "<<arr[head2]<<std::endl;
        head2++;
        return arr[head2-1];
    }

}

void Two_stacks_from_array::print_stack2()
{
    if(head2==array_size)
        std::cout<<"STACK2 EMPTY. NOTHING TO PRINT."<<std::endl;
    else{

        std::cout<<"Contents of stack2 are : "<<std::endl;
        for(int i=array_size-1;i>head2-1;i--){
               std::cout<<arr[i]<<std::endl;
        }
    }

}







