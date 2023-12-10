#include "datastruct.h"

int main(int argc, char **argv) {

    list *a = NULL;
    stack *b = NULL;
    printf("Creating list !\n");
    a = create(a);
    printf("%p\n", a);
    printf("Creating stack !\n");
    b = create(b);
    printf("%p\n", b);

    int x = 10;
    printf("Adding %d in the list\n", x);
    a = add_element(a,&x);
    printf("%d\n", *(int *)(a->head->val));
    int y = 20;
    printf("Adding %d in the stack\n", y);
    b = add_element(b, &y);
    printf("%d\n", *(int *)(b->head->val));

    int *f = NULL;
    f = (int*)l_pop(a);
    printf("poping %d from the list\n\n", *f);
    f = (int *)pop(b);
    printf("poping %d from the stack\n\n", *f);

    s_delete(b);
    printf("The stack has been fairly deleted ! \n");
    destroy(a);
    printf("The list has been fairly deleted ! \n");

    return 0;
}