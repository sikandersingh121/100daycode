#include <stdio.h>

int main() {
    int n;

    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];
    long long totalSum = 0;

    printf("Enter array elements: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        totalSum += arr[i];
    }

    long long leftSum = 0;
    int pivotIndex = -1;

    for (int i = 0; i < n; i++) {
        long long rightSum = totalSum - leftSum - arr[i];

        if (leftSum == rightSum) {
            pivotIndex = i;
            break;  // Leftmost pivot found
        }

        leftSum += arr[i];
    }

    printf("Pivot Index: %d\n", pivotIndex);

    return 0;
}
