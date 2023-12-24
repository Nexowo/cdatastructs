#include "dselem.h"

#ifndef PQUEUE_H
#define PQUEUE_H

typedef struct queue {
    element* head;
    unsigned int size;
}queue;

queue* q_create();
queue* enqueue(queue* q, void* element);
void* dequeue(queue* q);
void q_delete(queue* q);

#endif