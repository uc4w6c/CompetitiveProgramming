#include <bits/stdc++.h>
using namespace std;

int main() {
    long long N;
    cin >> N;
    long long A[N];
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }

    vector<long long> dp(N, 0);
    long long maxMove = 0;
    long long maxPoint = 0;
    long long nowPoint = 0;
    dp[0] = A[0];
    maxMove = max(A[0], 0LL);
    nowPoint += A[0];
    maxPoint = max(nowPoint, 0LL);
    for (int i = 1; i < N; i++) {
        dp[i] = dp[i - 1] + A[i];
        maxMove = max(dp[i], maxMove);
        maxPoint = max(nowPoint + maxMove, maxPoint);
        nowPoint += dp[i];
    }
    cout << maxPoint;
}
