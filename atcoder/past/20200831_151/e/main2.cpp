#include <bits/stdc++.h>
using namespace std;

// 思いつかない・・・
int main() {
    int N, K;
    cin >> N >> K;
    vector<long long> A(N);
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }
    sort(A.begin(), A.end(), greater<long long>());
    long long mod = pow(10, 9) + 7;
    long long ans = 0;
    for (int i = 0; i < N - (K - 1); i++) {
        long long maxA = A[i];
        long long minA = A[i + (K - 1)];
        cout << maxA << " " << minA << endl; // debug
        ans += (maxA - minA);
        ans %= mod;
    }
    cout << ans;
}
