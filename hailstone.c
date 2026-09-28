#include <stdio.h>

void hailstone(int number){
    printf("%i \n", number);
    if (number <=1) {
        return;
    } 

    if(number % 2 == 0) hailstone(number / 2);

    else hailstone(number *3 +1); 

}

int main(void) {
    int number;
    printf("Enter a number: ");
    scanf("%i", &number);
    hailstone(number);
    return 0;
}