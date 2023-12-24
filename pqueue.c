#include "pqueue.h"

queue* q_create() {
    queue* q = malloc(sizeof(queue));
    if (NULL == q) {
        exit(2);
    }
    q->head = NULL;
    q->size = 0;
    return q;
}

queue* enqueue(queue* q, void* elem) {
    element* e = malloc(sizeof(element));
    if (NULL == e) {
        exit(2);
    }
    e->val = elem;
    if (!q->size) {
        e->next = NULL;
        e->prev = NULL;
    }
    else {
        e->next = q->head;
        q->head->prev = e;
        e->prev = NULL;
    }
    ++q->size;
    q->head = e;
    return q;
}

void* dequeue(queue* q) {
    element* e = q->head;

    while(NULL != e->next) {
        e = e->next;
    }

    e->prev->next = NULL;
    void* val = e->val;
    free(e);
    return val;
}

void q_delete(queue* q) {
    element* h = q->head;

    while(NULL != h) {
        element* e = h->next;
        free(h);
        h = e;
    }

    free(q);
}