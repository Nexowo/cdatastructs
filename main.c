#include "plist.h"

int main(int argc, char *argv) {
    list *a = create();
    int x = 2;
    int *px = &x;
    a = append(a, &x);
    px = (int*)pop(a);
    printf("%d", x);
    return 0;
}
