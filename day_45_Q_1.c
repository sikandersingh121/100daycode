#include <stdio.h>
#include <string.h>

int main() {
    char str[100], ch;
    int count = 0, i;

    printf("Enter a string: ");
    scanf("%s", str);

    printf("Enter a character: ");
    scanf(" %c", &ch);

    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] == ch) {
            count++;
        }
    }

    printf("Frequency of '%c' = %d", ch, count);

    return 0;
}
