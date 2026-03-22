#include <stdio.h>
#include <string.h>

// Helper function to reverse a specific range in a string using pointers
void reverse(char *begin, char *end) {
    char temp;
    while (begin < end) {
        temp = *begin;
        *begin++ = *end;
        *end-- = temp;
    }
}

void reverseWords(char *s) {
    char *word_begin = s;
    char *temp = s;

    // Step 1: Reverse individual words
    while (*temp) {
        temp++;
        if (*temp == '\0') {
            reverse(word_begin, temp - 1);
        } else if (*temp == ' ') {
            reverse(word_begin, temp - 1);
            word_begin = temp + 1;
        }
    }

    // Step 2: Reverse the entire string
    reverse(s, temp - 1);
}

int main() {
    char str[] = "C programming is fun";

    printf("Original: %s\n", str);

    reverseWords(str);

    printf("Reversed: %s\n", str);

    return 0;
}
