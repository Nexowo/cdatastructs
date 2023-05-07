#include <stdio.h>
#include <stdlib.h>

#ifndef DSELEM_H
#define DSELEM_H

typedef struct elem {
	struct elem* next; /*Pointer on the next element of the list*/
	struct elem* prev; /*Pointer on the previous element of the list*/
	void* val; /*Generic pointer on the data*/
}element; /*This structure represents an element of a list*/

#endif