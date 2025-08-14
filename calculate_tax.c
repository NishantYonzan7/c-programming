#include <stdio.h>


int main() {

int amount; 

printf("Enter amount:");
scanf("%d", &amount); // & means address of the variable
float tax = (30.0/100 *amount) + amount; // flaot has been taken as 30 divided by 100 is a number with decimal
printf("Amount with added tax: %f", tax);

}
