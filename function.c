#include <stdio.h>

void my_function(); 
float adder(float, float);

/*Function prototype - function declaration 
(Not optional for the function is declared below the main function)*/


/* Rules:
   1. Function cannot return an array
   2. Function cannot return multiple values
   3. Fucntion cannot return another function
*/

int main(){

    my_function();

    float a = 34.5;
    float b = 55.55;

    float sum = adder(a, b);
    printf("The sum is: %f", sum);

}

// Function definion
void my_function() {
    printf("I AM BATMAN\n");
}

float adder(float a, float b) {
    float sum = a + b;
    return sum;
}