#include <stdio.h>

void multiply(int num1, int num2) {
    int pro = num1 * num2;
    printf("The product of %d and %d is: %d\n",num1,num2,pro);
}

int main(){
    int num1,num2;
    printf("Enter first number: ");
    scanf("%d", &num1);

    printf("Enter second number: ");
    scanf("%d", &num2);
    
    multiply(num1,num2);
}