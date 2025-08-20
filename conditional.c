#include <stdio.h>

int main() {

    float first_num, second_num;
    int operation;

    printf("Enter first number: \n");
    scanf("%f", &first_num);

    printf("Enter second number: \n");
    scanf("%f", &second_num);

    printf("Enter first number: \n");
    scanf("%d", &operation);

    if(operation != 1 && operation != 2 && operation != 3 && operation != 4) {
        printf("Invalid operation!");
        return 0;
    }

    if(operation == 1){
        printf("Result of addition : %f\n", first_num + second_num);
    }

    if(operation == 2){
        printf("Result of subtraction : %f\n", first_num - second_num);
    }

    if(operation == 3){
        printf("Result of multiplication : %f\n", first_num * second_num);
    }

    if(operation == 4){
        printf("Result of division : %f\n", first_num / second_num);
    }

return 0;


}