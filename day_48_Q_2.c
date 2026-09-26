#include <stdio.h>
#include <string.h>

void reverse(char str[], int start, int end) {
    while (start < end) {
        char temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        start++;
        end--;
    }
}

int main() {
    char str[1000];

    fgets(str, sizeof(str), stdin);

    int start = 0;
    int len = strlen(str);

    if (len > 0 && str[len - 1] == '\n')
        str[--len] = '\0';

    for (int i = 0; i <= len; i++) {
        if (str[i] == ' ' || str[i] == '\0') {
            reverse(str, start, i - 1);
            start = i + 1;
        }
    }

    printf("%s", str);

    return 0;
}
