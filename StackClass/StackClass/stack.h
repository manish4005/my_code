#ifndef STACK_H
#define STACK_H


class stack
{
    public:
        stack(int size);
        ~stack();
        bool push_to_stack(int);
        int pop_from_stack();
        void print_stack();


    private:
        int MAX_STACK_SIZE;
        int *arr;
        int bottom = -1;
        int head = -1;

};

#endif // STACK_H
