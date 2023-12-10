#include "dselem.h"

#ifndef PSTACK_H
#define PSTACK_H

typedef struct stack {
    element* head;
    unsigned int size;
}stack;
stack* s_create();
stack* push(stack* s, void* value);
void* pop(stack* s);
void s_delete(stack* s);

#endif