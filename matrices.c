#include <stdio.h>

void multiply (int ar, int ac, int br, int bc,int a[][10], int b[][10], int c[][10]){
    int i, j, k;

    for (i = 0; i < ar; i++) {
       for (j = 0; j < bc; j++) {
            c[i][j] = 0;
            for (k = 0; k < ac; k++) {
                c[i][j] = c[i][j] + a[i][k] * b[k][j];
            }
        }
    }
}

void printMatrix(int rows, int cols, int m[][10]) {
    int i, j;
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            printf("%d, ", m[i][j]);  
        }
        printf("\n");
    }
}

int main() {

    int a[10][10] = {
        {1, 2},
        {3, 4}
    };


    int b[][10] = {
        {5, 6},
        {7, 8}
    };


    int c[10][10];

    int ar = 2, ac = 2;   
    int br = 2, bc = 2;

    multiply(ar, ac, br, bc, a, b, c);

    printf("A x B =\n");
    printMatrix(ar, bc, c);

    return 0;
}