#include <bits/stdc++.h>
using namespace std;

// 各ハンコの間の最大公約数を求める
// 最大公約数を求める
long long GCD(long long a, long long b) {
    if (b == 0) return a;
    else return GCD(b, a % b);
};

int main() {
    long long N;
    int M;
    cin >> N >> M;
    if (M == 0) cout << 1;

    vector<long long> A(M);
    vector<long long> diff(M + 1);
    for (int i = 0; i < M; i++) {
        cin >> A[i];
    }
    sort(A.begin(), A.end());

    diff[0] = A[0] - 1;
    for (int i = 1; i < M; i++) {
        diff[i] = A[i] - A[i - 1] - 1;
    }
    diff[M] = N - A[M];

    long long minD = 0;
    for (int i = 0; i < M + 1; i++) {
        if (diff[i] != 0) {
            minD = GCD(minD, diff[i]);
        }
    }
    // cout << minD; // これはkの値

    // 答えの算出
    int cnt = 0;
    if (A[0] - 1 > 0) {
        cnt += ((A[0] - 1) / minD);
    }
    for (int i = 1; i < M + 1; i++) {
        if (A[i] - A[i - 1] - 1 > 0) {
            cnt += ((A[i] - A[i - 1] - 1) / minD);
        }
    }
    if (N - A[M] - 1 > 0) {
        cnt += ((N - A[M] - 1) / minD);
    }
    cout << cnt;
}
