#include <stdlib.h>
#include <stdio.h>
/*
 *
 * first c file
 * 
 */

int fac (int n) {
    if (n == 1) {
        return 1;
    } else {
        return n * fac(n-1);
    }
}

int fib (int n) {
    if (n == 1){
        return 1;
    } else if (n==2){
        return 1;
    }else {
        return fib (n-1) + fib( n-2);
    }
}

int ffib( int a, int b, int n) {
    if (n == 2) {
        return a;
    } else {
        return ffib(a+b,a,n-1);
    }
}

int fastfib(int n) {
    return ffib(1,1,n);
}

int main (int argc, char** argv) {
    if (argc > 1) {
        printf("%d\n",fastfib(atoi(argv[1]))); 
    } else {
        printf("no parameter\n");
    }
    return 1;
}