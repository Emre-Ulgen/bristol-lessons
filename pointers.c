#include <stdio.h>

int main () {
    int a;
    printf("%i\n", a);
    int *p;
    printf("%p\n", p);

    a = 12;
    printf("%i\n", a);
    p = &a;
    printf("%p\n", p);
    printf("%p\n", &a);



}