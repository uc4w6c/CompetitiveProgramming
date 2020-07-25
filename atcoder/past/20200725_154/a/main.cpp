#include <bits/stdc++.h>
using namespace std;

// A - Remaining Balls
int main() {
    string S, T, U;
    cin >> S >> T;
    int A, B;
    cin >> A >> B;
    cin >> U;

    if (S == U) {
        A--;
    }
    if (T == U) {
        B--;
    }
    cout << A << " " << B;
}
