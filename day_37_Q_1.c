#include <iostream>
using namespace std;

int main() {
    int rows, cols;
    cin >> rows >> cols;

    int a[100][100];
    int sum[100] = {0};

    // Input matrix
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cin >> a[i][j];
        }
    }

    // Calculate sum of each row
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            sum[i] += a[i][j];
        }
    }

    // Print row sums
    for (int i = 0; i < rows; i++) {
        cout << sum[i] << " ";
    }

    return 0;
}
