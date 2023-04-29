#include <stdio.h>
#include <stdlib.h>

typedef struct elem {
	struct elem* next; /*Pointer on the next element of the list*/
	struct elem* prev; /*Pointer on the previous element of the list*/
	void* val; /*Generic pointer on the data*/
}element;

typedef struct l {
	element* head; /*Pointer on the head of the list*/
	element* tail; /*Pointer on the tail of the list*/
	int size; /*Size of the list*/
} list;

list* create(); /*Creation of a new empty list*/
list* append(list* l, void* val); /*Add a new element at the end of the list*/
void* pop(list *l); /*Suppress the first element, free it and return the value*/
void destroy(list *l); /*Free all the element of the list and the list itself*/