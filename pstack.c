#include "pstack.h"

stack* s_create() {
    stack* s = malloc(sizeof(stack));
    if (NULL == s) {
        exit(2);
    }
    s->head = NULL;
    s->size = 0;
    return s;
}

stack* push(stack* s, void* value) {
    element* e = malloc(sizeof(element));
    if (NULL == e) {
        s_delete(s);
        exit(3);
    }
    e->prev = NULL;
    e->next = s->head;
    if (s->size){
        s->head->prev = e;
    }
    ++s->size;
    e->val = value;
    s->head = e;
    return s;
}

void* pop(stack* s) {
    if (0 == s->size) {
        return NULL;
    }
    element* e = s->head;
    s->head = s->head->next;
    --s->size;
    void* val = e->val;
    free(e);
    return val;
}

void s_delete(stack* s) {
    element *e = s->head;
    while (NULL != e) {
        s->head = e->next;
        free(e);
        e = s->head;
    }
    free(s);
}