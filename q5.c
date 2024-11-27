#include <stdio.h>
#include <string.h>


void reverse(char str[]) {
    int len = strlen(str);
    int i = 0;
    int j = len - 1;
    
   
    while (i < j) {
        char temp = str[i];
        str[i] = str[j];
        str[j] = temp;
        
        i++;
        j--;
    }
}

int main() {
    char word[100];
    
    
    printf("Enter a word: ");
    gets(word);
    
   
    if (word[strlen(word) - 1] == '\n') {
        word[strlen(word) - 1] = '\0';  
    }
    
   reverse(word);
    printf("Reversed word: %s\n", word);
    
    return 0;
}