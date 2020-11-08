#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    long long K;
    cin >> N >> K;
    vector<long long> A(N);
    vector<long long> F(N);
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }
    for (int i = 0; i < N; i++) {
        cin >> F[i];
    }
    sort(A.begin(), A.end());
    sort(F.rbegin(), F.rend());

    long long lf = -1;
    long long rg = 1LL << 60;
    while (rg - lf > 1) {
        long long mid = (lf + rg) / 2;
        long long cnt = 0;
        for (int i = 0; i < N; i++) {
            if (A[i] * F[i] <= mid) continue;
            long long t = mid / F[i];
            cnt += A[i] - t;
        }
        if (cnt <= K) rg = mid;
        else lf = mid;
    }
    cout << rg;
}
