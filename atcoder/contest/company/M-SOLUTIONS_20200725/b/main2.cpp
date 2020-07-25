#include <bits/stdc++.h>
using namespace std;

// 
// 通った！
int main() {
    int A, B, C, K;
    cin >> A >> B >> C;
    cin >> K;

    for (int i = 0; i <= K; i++) {
        if (A < B && B < C) {
            cout << "Yes";
            return 0;
        }

        if (A >= B) {
            B *= 2;
            continue;
        }
        if (B >= C) {
            C *= 2;
            continue;
        }
    }

    cout << "No";
}
