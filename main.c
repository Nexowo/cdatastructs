#include "plist.h"

int main(int argc, char **argv) {
    list *a = create();
    int x = 2;
    a = append(a, &x);
    int *f = NULL;
    f = (int*)pop(a);
    printf("%d\n\n", *f);
    destroy(a);
    return 0;
}