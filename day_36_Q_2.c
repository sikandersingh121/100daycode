#include <iostream>
using namespace std;

int main() {
    int rows, cols;
    cin >> rows >> cols;

    int matrix[100][100];
    int sum = 0;

    // Read matrix and calculate sum
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cin >> matrix[i][j];
            sum += matrix[i][j];
        }
    }

    cout << sum << endl;

    return 0;
}
