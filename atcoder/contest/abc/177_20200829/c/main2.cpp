#include <bits/stdc++.h>
using namespace std;

// 
// これだとTLEになった・・・
int main() {
    int N;
    cin >> N;
    long long A[N];
    long long modNum = pow(10, 9) + 7;
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }

    long long ans = 0;
    for (int i = 0; i < N - 1; i++) {
        for (int j = i + 1; j < N; j++) {
            ans += A[i] * A[j];
            ans %= modNum;
        }
    }
    cout << ans;
}
