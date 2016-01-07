#include "stack_template.h"
#include <iostream>
#include <string>

using namespace std;

int main(){

    stack_template <int> my_int_stack(5);

    my_int_stack.push_to_stack(4);
    my_int_stack.push_to_stack(7);
    my_int_stack.push_to_stack(3);
    my_int_stack.push_to_stack(87);
    my_int_stack.push_to_stack(12);
    my_int_stack.print_stack();

    my_int_stack.pop_from_stack();
    my_int_stack.pop_from_stack();
    my_int_stack.print_stack();


     stack_template <std::string> my_char_stack(5);

    my_char_stack.push_to_stack("This is a std::string");
    my_char_stack.push_to_stack("Reallllllyyyyy loooooonnnnnngggggg striiiiiiiiiiiiiiinnnnnnnnnnnng");
    my_char_stack.push_to_stack("hahaha");
    my_char_stack.push_to_stack("egievgiegfivgwig");
    my_char_stack.push_to_stack("will it work ?");
    my_char_stack.print_stack();

    my_char_stack.pop_from_stack();
    my_char_stack.pop_from_stack();
    my_char_stack.print_stack();


}
