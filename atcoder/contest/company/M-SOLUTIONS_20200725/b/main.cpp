#include <bits/stdc++.h>
using namespace std;

// 
// なぜか一部通らない
int main() {
    int A, B, C, K;
    cin >> A >> B >> C;
    cin >> K;

    while (A > B && K > 0) {
        B *= 2;
        K--;
    }
    while (B > C && K > 0) {
        C *= 2;
        K--;
    }
    // cout << A << endl; // debug
    // cout << B << endl; // debug
    // cout << C << endl; // debug
    // cout << K << endl; // debug
    if (A < B && B < C) {
        cout << "Yes";
    } else {
        cout << "No";
    }
}
