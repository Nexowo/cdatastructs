#include "dselem.h"

#ifndef PSTACK_H
#define PSTACK_H

typedef struct stack {
    element* head; /*Pointer on the head of the stack*/
    unsigned int size; /*Size of the stack*/
}stack; /*definition of the structure stack*/

stack* s_create(); /*Creates an empty stack and return it's pointer*/
stack* push(stack* s, void* value); /*push value on the top of the stack*/
void* pop(stack* s); /*pop the head value of the stack and free the memory of the element*/
void s_delete(stack* s); /*Pops all the values of the stack and free the memory*/

#endif