#include "dselem.h"

#ifndef PLIST_H
#define PLIST_H

typedef struct l {
	element* head; /*Pointer on the head of the list*/
	element* tail; /*Pointer on the tail of the list*/
	unsigned int size; /*Size of the list*/
} list; /*double chained list with a pointer on head, on queue and an int representing the size*/

list* l_create(); /*Creation of a new empty list*/
list* append(list* l, void* val); /*Add a new element at the end of the list*/
void* l_pop(list* l); /*Suppress the first element, free it and return the value*/
void destroy(list* l); /*Free all the element of the list and the list itself*/
void* get_at(list* l, unsigned int index); /*Return the element of the list at the index specified*/

#endif