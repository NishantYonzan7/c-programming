#include <stdio.h>

int main (){
    
    int first_num, sec_num, operation;
    
    printf("Enter the first number: \n");
    scanf("%d", &first_num);

    printf("Enter the second number: \n");
    scanf("%d", &first_num);

    printf("Enter the operation: \n");
    scanf("%d", &operation);


    if(operation != 1 && operation != 2 && operation != 3 && operation != 4) {
        printf("Error: No such operation!");
        return 0;
    } else {
        if(operation == 1) {
            int sum = first_num + sec_num;
            printf("The sum is %d ", sum);
        } else if (operation == 2) {
            int diff;
        if(first_num > sec_num) {
            diff = first_num - sec_num;
        } else {
            diff = sec_num - first_num;
        }      
        printf("The difference is %d ", diff); 
        } else if(operation == 3) {
            int product = first_num * sec_num;
            printf("The product is %d ", product);
        } else {
            int quo;
            if(first_num > sec_num) {
                quo = (float)first_num / sec_num;
            } else {
                quo = (float) sec_num / first_num; // Type conversion
            }
            printf("The quotient is %f ", quo);
        }
    }

    return 0;

}