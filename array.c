#include <stdio.h>

int main(){

    // array of integers

    // syntax: type-specifier identifier[size]
    int a[10] = {1, 2, 3, 4, 5, 56, 34, 34, 34, 55};
    float b[5] = {33.5, 66.3, 99.99, 45.34, 44.44};

    // If we initialize array directly then no need to define size
    int c[] = {3, 43, 3, 5, 55};

    int d[4] = {[2] = 4, [3] = 2};
    
    // assignment
    int e[3];
    e[0] = 1;
    e[1] = 2;
    e[2] = 3;

    // intialized all the elements with 0 value
    int f[6] = {0};

    // Array subscripting - feature in programming language using which we can get specific element of an array
    printf("Array element: %d", a[4]);


}