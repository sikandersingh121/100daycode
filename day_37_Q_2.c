#include <iostream>
using namespace std;

int main() {
    int rows, cols;
    cin >> rows >> cols;

    int a[100][100];

    // Input matrix
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cin >> a[i][j];
        }
    }

    // Print transpose
    for (int j = 0; j < cols; j++) {
        for (int i = 0; i < rows; i++) {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
