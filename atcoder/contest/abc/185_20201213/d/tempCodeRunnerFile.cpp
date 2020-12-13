#include <bits/stdc++.h>
using namespace std;

int main() {
    long long N;
    int M;
    cin >> N >> M;
    if (M == 0) {
        cout << 1;
        return 0;
    }
    if (N == M) {
        cout << 0;
        return 0;
    }

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
    diff[M] = N - A[M - 1];

    // debug
    /*
    for (int i = 0; i <= M; i++) {
        cout << diff[i] << endl;
    }
    */

    long long minD = 0;
    for (int i = 0; i < M + 1; i++) {
        if (diff[i] != 0) {
            if (minD == 0) {
                minD = diff[i];
            } else {
                minD = min(minD, diff[i]);
            }
        }
    }
    // cout << "k:" << minD << endl; // これはkの値

    // 答えの算出
    int cnt = 0;
    for (int i = 0; i <= M; i++) {
        // cout << "diff:" << diff[i] << endl; // debug
        if (diff[i] > 0) {
            // cout << ceil(diff[i] / minD) << endl; // debug
            cnt += ceil(diff[i] / minD);
            if (diff[i] % minD > 0) cnt++;
        }
    }
    cout << cnt;
}
