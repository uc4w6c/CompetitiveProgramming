#include <bits/stdc++.h>
using namespace std;

// これだとTLEになってしまう
int N, K;
long long A[100000000];
long long calc(long long minA, long long maxA, int nowNo, int nowCount) {
    if (nowCount == K) {
        // cout << maxA << " " << minA << endl; // debug
        return maxA - minA;
    }
    long long mod = pow(10, 9) + 7;
    long long ans = 0;
    for (int i = nowNo + 1; i < N - (K - nowCount - 1); i++) {
        minA = min(A[i], minA);
        maxA = max(A[i], maxA);
        ans += calc(minA, maxA, i, nowCount + 1);
        ans %= mod;
    }
    return ans;
}

int main() {
    cin >> N >> K;
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }
    long long mod = pow(10, 9) + 7;
    long long ans = 0;
    for (int i = 0; i < N - (K - 1); i++) {
        long long minA = A[i];
        long long maxA = A[i];
        ans += calc(minA, maxA, i, 1);
        ans %= mod;
    }
    cout << ans;
}
