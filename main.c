#include "datastruct.h"

int main(int argc, char **argv) {
    list *a;
    stack *b;
    a = create(a);
    b = create(b);
    int x = 10;
    a = add_element(a,&x);
    int y = 20;
    b = add_element(b, &y);

    int *f = NULL;
    f = (int*)l_pop(a);
    printf("%d\n\n", *f);
    f = pop(b);
    printf("%d\n\n", *f);
    s_delete(b);
    destroy(a);
    return 0;
}