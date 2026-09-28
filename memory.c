#include <stdio.h>

int main(void) {
    signed char a = 100;
    printf("A is: %d\n",a);
    printf("The address of A is: %p\n", &a);
    printf("The char of A: %c\n", a);
}