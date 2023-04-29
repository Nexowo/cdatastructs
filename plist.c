#include "plist.h"

list* create() {
    list *l = malloc(sizeof(list));
    if (l == NULL) {
        exit(2);
    }
    l->head = NULL;
    l->tail = NULL;
    l->size = 0;
    return l;
}

list* append(list* l, void* val) {
    element *e = malloc(sizeof(element));
    if (e == NULL) {
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

void* pop(list *l) {
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
        pop(l);
    }
    free(l);
}

int is_equal(list* l, list* t) {
    if(l->size != t->size) {
        return 0;
    }

    for(element *e=l->head, *f=t->head; e != NULL && f != NULL; e->next, f->next) {
        if(f->val != e->val) {
            return 0;
        }
    }

    return 1;
}