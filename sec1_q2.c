#include <stdio.h>

void even(int n) {
    if(n%2==0){
        printf("The number is even");
    }
    else{
        printf("The number is odd");
    }
}

int main(){
    int n;
    printf("Enter number: ");
    scanf("%d", &n);

    
    
    even(n);
}