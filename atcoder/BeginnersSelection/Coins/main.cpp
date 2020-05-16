#include <bits/stdc++.h>
using namespace std;

int main() {
    int A, B, C, X;
    cin >> A; // 500
    cin >> B; // 100
    cin >> C; // 50
    cin >> X;

    int matchCount = 0;
    for (int i = 0; i < A + 1; i++) {
        if (i * 500 > X) {
            break;
        }
        for (int j = 0; j < B + 1; j++) {
            if (i * 500 + j * 100 > X) {
                break;
            }
            for (int k = 0; k < C + 1; k++) {
                if (i * 500 + j * 100 + k * 50 == X) {
                    matchCount++;
                }
            }
        }
    }
    cout << matchCount;
}
