#include <stdio.h>

/*
Create a funciton that-
 1. Takes an array as argument
 2. Takes array length as second argument
 3. Adds all elements of the array
 4. Returns the sum of the array elements
 */

 // function prototype
 int add_array(int[], int); 

int main(){

    int a[] = {4, 10, 22, 51, 1};
    int sum = add_array(a, 5);
    printf("The sum of the array is %d.", sum);

}

int add_array(int a[], int size) {
    int sum = 0;
    for(int i = 0; i < size; i++) {
        sum += a[i];

    }
    return sum;
}