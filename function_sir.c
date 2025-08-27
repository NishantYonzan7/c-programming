#include <stdio.h>

// custom function

/* SYNTAX

return-type function-name (arguments...);

*/

// function prototype / function declaration
void my_function();

/* function prototype
returns float, has two float arguments

float adder(float abc, float xyz);
*/
float adder(float, float);

int main() {
/*
# in order to use function -
we have to call the function, that is called as function call
*/

/*Rules:
   1. Function cannot return an array
   2. Function cannot return multiple values
   3. Fucntion cannot return another function
   */

my_function();
}

// function definition
void my_function() {
// this function only prints my name
printf("i am ananta");
}

float adder(float a, float b) {
float sum = a + b;
return sum;
}
