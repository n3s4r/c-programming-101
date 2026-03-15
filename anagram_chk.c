#include <stdio.h>
#include <string.h>
#include <stdbool.h>

bool areAnagrams(char* str1, char* str2) {
    int count[256] = {0};
    int i;

    if (strlen(str1) != strlen(str2)) return false;

    for (i = 0; str1[i] && str2[i]; i++) {
        count[(int)str1[i]]++;
        count[(int)str2[i]]--;
    }

    for (i = 0; i < 256; i++) {
        if (count[i] != 0) return false;
    }
    return true;
}

int main() {
    char s1[] = "triangle";
    char s2[] = "integral";

    if (areAnagrams(s1, s2))
        printf("The strings are anagrams.\n");
    else
        printf("The strings are not anagrams.\n");

    return 0;
}
