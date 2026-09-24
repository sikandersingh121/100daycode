#include <stdio.h>

int main() {
    char str[1000];
    int freq[26] = {0};

    scanf("%s", str);

    for (int i = 0; str[i] != '\0'; i++) {
        if (freq[str[i] - 'a'] == 1) {
            printf("%c", str[i]);
            return 0;
        }
        freq[str[i] - 'a']++;
    }

    printf("-1");

    return 0;
}
