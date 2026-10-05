#include <stdio.h>

int main(void) {
    signed char a = 100;
    printf("A is: %d\n",a);
    printf("The address of A is: %p\n", &a);
    printf("The char of A: %c\n", a);


int myInt = 8;
float myFloat = 8.8;
double myDouble = 5.4;
char myChar = 'a';

printf("%zu\n", sizeof(myInt));
printf("%zu\n", sizeof(myFloat));
printf("%zu\n", sizeof(myDouble));
printf("%zu\n", sizeof(myChar));

printf("\n******************\n\n");


int number = 12;
printf("%p", &number);




}