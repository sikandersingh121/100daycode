#include <stdio.h>

int main() {
    char date[20];
    int dd, mm, yyyy;

    printf("Enter date in dd/04/yyyy format: ");
    scanf("%d/%d/%d", &dd, &mm, &yyyy);

    printf("%02d-Apr-%04d\n", dd, yyyy);

    return 0;
}
