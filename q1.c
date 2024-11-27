#include <stdio.h>
#include <string.h>

void isPalindrome(char word[]) {
    int len = strlen(word);
    int first = 0;
    int last = len - 1;

    while (first < last) {
        if (word[first] != word[last]) {
            printf("%s is not a Palindrome\n", word);
            return;
        }
        first++;
        last--;
    }

    printf("%s is a Palindrome\n", word);
}

int main() {
    int n;

    printf("Enter the number of words: ");
    scanf("%d", &n);

    char words[n][20];

    printf("Enter %d words:\n",n);
    for (int i = 0; i < n; i++) {
        printf("Word %d: ", i + 1);
        scanf("%s", words[i]);
        isPalindrome(words[i]); 
        printf("\n");
    }

    return 0;
}

