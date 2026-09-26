#include <stdio.h>
#include <string.h>

int isRotation(char s1[], char s2[]) {
    if (strlen(s1) != strlen(s2))
        return 0;

    char temp[2 * strlen(s1) + 1];

    strcpy(temp, s1);
    strcat(temp, s1);

    return strstr(temp, s2) != NULL;
}

int main() {
    char s1[] = "ABCD";
    char s2[] = "CDAB";

    if (isRotation(s1, s2))
        printf("Yes");
    else
        printf("No");

    return 0;
}
