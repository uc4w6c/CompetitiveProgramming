#include <bits/stdc++.h>
using namespace std;

// D - Floor Function
int main() {
    long long A, B, N;
    cin >> A >> B >> N;

    long long result = 0;
    int maxX = 0;
    for (int x = 0; x <= N; x++) {
        cout << "(" << A << " * " << x << " / " << B << ")" << " -" << A << " * (" << x << " / " << B << ")";
        cout << " = ";
        cout << floor(A * x / B);
        cout << " : ";
        cout << - A * floor(x / B);
        cout << " = ";
        cout << floor(A * x / B) - A * floor(x / B);
        cout << endl;

        long long tmp = floor(A * x / B) - A * floor(x / B);
        // result = max(result, tmp);
        if (result < tmp) {
            maxX = x;
            result = tmp;
        }
    }
    cout << "result:" << result << endl;
    cout << "x:" << maxX << endl;
}

/*
(5 * 0 / 7) -5 * (0 / 7) = 0 : -0 = 0
(5 * 1 / 7) -5 * (1 / 7) = 0 : -0 = 0

(5 * 6 / 7) -5 * (6 / 7) = 4 : -0 = 4
(5 * 13 / 7) -5 * (13 / 7) = 9 : -5 = 4

(5 * 7 / 7) -5 * (7 / 7) = 5 : -5 = 0
(5 * 8 / 7) -5 * (8 / 7) = 5 : -5 = 0
*/
