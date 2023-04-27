#include "plist.h"

list* create() {
    list *l = malloc(sizeof(list));
    l->head = NULL;
    l->tail = NULL;
    l->size = 0;
    return l;
}

list* append(list* l, void* val) {
    element *e = malloc(sizeof(element));
    e->val = val;
    if(!l->size) {
        l->head = e;
    }
    l->size++;
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

int main(int argc, char *argv) {
    list *a = create();
    int x = 2;
    int *px = &x;
    a = append(a, &x);
    int *f = NULL;
    f = (int*)pop(a);
    printf("%d", *f);
    return 0;
}