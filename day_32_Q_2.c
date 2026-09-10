// Q64 (Arrays (1D))
// 📋
// Find the digit that occurs the most times in an integer number.


#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int freq[10] = {0};

    while (n > 0) {
        int digit = n % 10;
        freq[digit]++;
        n /= 10;
    }

    int maxDigit = 0;

    for (int i = 1; i < 10; i++) {
        if (freq[i] > freq[maxDigit]) {
            maxDigit = i;
        }
    }

    cout << maxDigit;

    return 0;
}
