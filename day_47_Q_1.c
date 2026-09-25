#include <stdio.h>
#include <string.h>

int main() {
    char s1[100], s2[100];
    int freq[256] = {0};
    int i;

    printf("Enter first string: ");
    scanf("%s", s1);

    printf("Enter second string: ");
    scanf("%s", s2);

    if (strlen(s1) != strlen(s2)) {
        printf("Not Anagrams");
        return 0;
    }

    for (i = 0; s1[i] != '\0'; i++) {
        freq[(unsigned char)s1[i]]++;
        freq[(unsigned char)s2[i]]--;
    }

    for (i = 0; i < 256; i++) {
        if (freq[i] != 0) {
            printf("Not Anagrams");
            return 0;
        }
    }

    printf("Anagrams");

    return 0;
}
