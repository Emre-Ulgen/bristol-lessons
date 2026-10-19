#include <stdio.h>

int main (void) {
    int number = 10;        // output -> 10
    printf("%d \n", number);

    int number2 = 010;      // output -> 8
    printf("%d \n", number2);

    int number3 = 0x5b;     // output -> 91
    printf("%d \n", number3);

}