#include "plist.h"

list* l_create() {
    list *l = malloc(sizeof(list));
    if (NULL == l) {
        exit(2);
    }
    l->head = NULL;
    l->tail = NULL;
    l->size = 0;
    return l;
}

list* append(list* l, void* val) {
    element *e = malloc(sizeof(element));
    if (NULL == e) {
        destroy(l);
        exit(3);
    }
    e->val = val;
    if(!l->size) {
        l->head = e;
    }
    ++l->size;
    e->next = NULL;
    e->prev = l->tail;
    l->tail = e;
    return l;
}

void* l_pop(list *l) {
    element *temp = l->head;
    --l->size;
    l->head = temp->next;
    if(!l->size) {
        l->tail = NULL;
    }
    void* val = temp->val;
    free(temp);
    return val;
}

void destroy(list* l) {
    while (l->head!=NULL) {
        l_pop(l);
    }
    free(l);
}

void* get_at(list* l, unsigned int index) {
    int i = 0;
    element* e = l->head;
    while (i<index && NULL != e)
    {
        ++i;
        e = e->next;
    }
    if (NULL == e) {
        printf("list index out of range");
        return NULL;
    }
    return e->val;
}