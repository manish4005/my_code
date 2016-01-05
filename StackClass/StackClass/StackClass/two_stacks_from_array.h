#ifndef TWO_STACKS_FROM_ARRAY_H
#define TWO_STACKS_FROM_ARRAY_H

#include "stack.h"

class Two_stacks_from_array
{
    public:
        Two_stacks_from_array(int size_of_array);
        ~Two_stacks_from_array();
        bool push_to_stack1(int);
        int pop_from_stack1();
        void print_stack1();

        bool push_to_stack2(int);
        int pop_from_stack2();
        void print_stack2();

    private:
        int array_size;
        int *arr;
        int head1 = -1;
        int head2;

};

#endif // TWO_STACKS_FROM_ARRAY_H
