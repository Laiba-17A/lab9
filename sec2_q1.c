#include <stdio.h>
#include <string.h>

int main() {
    char source[100], dest[100];
    int n;

    printf("Enter the destination string: ");
    gets(dest);  

    printf("Enter the source string: ");
    gets(source);  

    printf("Enter number of characters to append: ");
    scanf("%d", &n);

    strncat(dest, source, n);

    printf("New String: %s\n", dest);

    return 0;
}