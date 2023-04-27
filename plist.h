#include <stdio.h>
#include <stdlib.h>

typedef struct elem {
	struct elem* next; /*Pointer on the next element of the list*/
	struct elem* prev; /*Pointer on the previous element of the list*/
	void *val; /*Generic pointer on the data*/
}element;

typedef struct l {
	element* head; /*Pointer on the head of the list*/
	element* tail; /*Pointer on the head of the list*/
	int size; /*Size of the list*/
} list;