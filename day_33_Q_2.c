#include <iostream>
using namespace std;

int main() {
    int n, element;
    cin >> n;

    int arr[n + 1];

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cin >> element;

    // Find the position where the element should be inserted
    int pos = 0;
    while (pos < n && arr[pos] < element) {
        pos++;
    }

    // Shift elements to the right
    for (int i = n; i > pos; i--) {
        arr[i] = arr[i - 1];
    }

    // Insert the element
    arr[pos] = element;

    // Print the updated array
    for (int i = 0; i <= n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
