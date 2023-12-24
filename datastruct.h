#ifndef DSTRUCT
#define DSTRUCT

#include "pstack.h"
#include "plist.h"
#include "pqueue.h"

#define create(X) _Generic((X), list* : l_create, stack* : s_create, queue* : q_create)()

#define add_element(X, element) _Generic((X), list* : append, stack* : push, queue* : enqueue)(X, element)

#define delete(X) _Generic((X), list* : destroy, stack* : s_delete, queue* : q_delete)(X)

#endif
