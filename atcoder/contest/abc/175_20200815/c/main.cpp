#include <bits/stdc++.h>
using namespace std;

// 
int main() {
    long long X, K, D;
    cin >> X >> K >> D;

    X = abs(X);
    long long result = X / D;
    if (result >= K) {
        cout << X - (K * D);
        return 0;
    }

    K -= result;
    long long mod = X % D;
    if (K % 2 == 0) {
        cout << mod;
    } else {
        cout << abs(mod - D);
    }
}
