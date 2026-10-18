#include <stdio.h>

int hailstone (int number) {
    if (number == 1) return number;
    printf("%d ",  number);
    if (number % 2 == 0) return hailstone(number / 2);
    else return hailstone(3 * number + 1); 

}

int main (void) {
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);
    
    if (number > 0) printf("%d \n",hailstone(number));
    else return 1;
    return 0;
}