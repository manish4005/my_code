#ifndef STACK_TEMPLATE_H
#define STACK_TEMPLATE_H

#include "stack_template.h"
#include <iostream>
#include <cstdio>

using namespace std;

template <typename T>
class stack_template
{
    public:
        stack_template(int size);
        ~stack_template();
        bool push_to_stack(T);
        T pop_from_stack();
        void print_stack();
        bool isempty();


    private:
        int MAX_STACK_SIZE;
        T *arr;
        int bottom = -1;
        int head = -1;

};


template <typename T>
stack_template<T>::stack_template(int size)
{

    MAX_STACK_SIZE = size;
    arr = new T[MAX_STACK_SIZE];

}

template <typename T>
stack_template<T>::~stack_template()
{
    std::cout<<"call to destructor"<<std::endl;
    delete[] arr;
}

template <typename T>
T stack_template<T>::pop_from_stack(){
   if(head == bottom){
        std::cerr << "STACK EMPTY. POP FAILED "<< std::endl;
        return NULL;
    }

  else{
    std::cout<<" Popped "<<arr[head]<<std::endl;
    head--;
    return arr[head+1];

  }

}

template <typename T>
bool stack_template<T>::push_to_stack(T value){

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

template <typename T>
void stack_template<T>::print_stack(){

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

template <typename T>
bool stack_template<T>::isempty(){

    if(head == bottom)
        return true;
    else
        return false;

}



#endif // STACK_TEMPLATE_H
