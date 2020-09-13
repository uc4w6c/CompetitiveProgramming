#include <bits/stdc++.h>
using namespace std;

// 
int main() {
    long long N;
    cin >> N;
    if (N == 1) {
        cout << 0;
        return 0;
    }
    if (N == 2) {
        cout << 2;
        return 0;
    }
    long long modA = pow(10, 9) + 7;
    long long y = (N * (N - 1)) / 2;
    cout << y << endl; // debug
    y %= modA;
    // cout << pow(10, (N - 2)) << endl; // debug
    // long long z = pow(10, (N - 2)) * 2;
    long long powZ = (N - 3);
    long long z = 10;
    for (long long i = 0; i < powZ; i++) {
        z *= 10;
        z %= modA;
    }
    z *= 2;
    cout << z << endl; // debug
    z %= modA;
    long long ans = (y * z) % modA;
    cout << ans;
}
