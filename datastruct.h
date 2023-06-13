#ifndef DSTRUCT
#define DSTRUCT

#include "pstack.h"
#include "plist.h"

#define create(X) _Generic((X), list* : l_create, stack* : s_create)()

#define add_element(X, element) _Generic((X), list* : append, stack* : push)(X, element)

#endif
