#include <stdio.h>

int maximum(int num[], int size) {
    int max = num[0];
    for (int i = 1; i < size; i++) {  
        if (num[i] > max) {
            max = num[i];
        }
    }
    printf("The largest number in the array is: %d\n", max);  
    return max;
}

int minimum(int num[], int size) {
    int min = num[0];
    for (int i = 1; i < size; i++) {  
        if (num[i] < min) {
            min = num[i];
        }
    }
    printf("The smallest number in the array is: %d\n", min);  
    return min;
}

int main() {
    int size;
    printf("Enter the number of elements: ");
    scanf("%d", &size);

    int numbers[size];
    printf("Enter the numbers:\n");
    for (int i = 0; i < size; i++) {
        printf("Number %d: ", i + 1);
        scanf("%d", &numbers[i]);
    }

    maximum(numbers, size);  
    minimum(numbers, size);  

    return 0;
}