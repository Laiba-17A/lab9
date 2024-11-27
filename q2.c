#include <stdio.h>
#include <string.h>


void swap(int *a, int *b){
    int temp=*a;
    *a=*b;
    *b=temp;
    
    
}

int main() {
  int n1,n2;
  
  printf("Enter first number: ");
  scanf("%d",&n1);
  
  printf("Enter second number: ");
  scanf("%d",&n2);
  
  swap(&n1, &n2);
  
  printf("first number: %d \nsecond number: %d\n",n1,n2);



return 0;
}