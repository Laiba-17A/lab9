#include <stdio.h>

void add(int a, int b) {
    int sum = a + b;
    printf(" %d + %d = %d\n", a,b,sum);
}

void sub(int a, int b) {
    int sub = a - b;
    printf(" %d - %d = %d\n", a,b,sub);
}

void pro(int a, int b) {
    int product = a * b;
    printf(" %d x %d = %d\n", a,b,product);
}

void div(int a, int b) {
        int divide = a / b;
        printf(" %d / %d = %d\n", a,b,divide);
    }


int main() {
    int a, b, choice;
    printf("select one of the following\n");
    printf("1:Addition\n");
    printf("2:Subtraction\n");
    printf("3:Multiplication\n");
    printf("4:Division\n");
    scanf("%d", &choice);
    
    printf("Enter first number: ");
    scanf("%d",&a);

    printf("Enter second number: ");
    scanf("%d",&b);

    switch(choice) {
        case 1:
            add(a,b);
            break;

        case 2:
            sub(a,b);
            break;

        case 3:
            pro(a,b);
            break;

        case 4:
            div(a,b);
            break;

        default:
            printf("Invalid choice\n");
            break;
    }

    return 0;
}