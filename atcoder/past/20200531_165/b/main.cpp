#include <bits/stdc++.h>
using namespace std;

// B - 1%
int main() {
    long long X;
    cin >> X;

    long long result = 100;
    long long year = 0;
    for (year; ; year++) {
        if (result >= X) {
            break;
        }
        result *= 1.01;
    }

    cout << year;
}
