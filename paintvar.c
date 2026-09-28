/* Find teh area of paint I need. */
#include <stdio.h>

// Calculate area of walls and ceiling
int area (int length, int widht, int height) {
    int sides = length * height;
    int ends = 2* widht * height;
    int ceilling = length * widht;
    return sides + ends + ceilling;
}

// Print out the area of paint for my room.
int main(void) {
    printf("Please enter a length: \n");
    int length = scanf("%d\n", &length);
    int total = area(5,3,2);
    printf("The paint area is: %d\n", total);
    return 0;
}
