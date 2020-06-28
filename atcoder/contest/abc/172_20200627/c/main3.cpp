#include <bits/stdc++.h>
using namespace std;

// 一旦大きい方から進めた方がいい場合もある
int main() {
    long long N, M;
    long long K;
    cin >> N >> M >> K;

    long long A[N], B[M];
    for (long long i = 0; i < N; i++) cin >> A[i];
    for (long long i = 0; i < M; i++) cin >> B[i];

    long long aNo = 0, bNo = 0;
    long long a, b;
    long long readCount = 0;
    while (true) {
        if (aNo == N) {
            a = K + 1;
        } else {
            a = A[aNo];
        }
        if (bNo == M) {
            b = K + 1;
        } else {
            b = B[bNo];
        }

        if (a > K && b > K) break;

        if (a <= b) {
            K = K - a;
            aNo++;
        } else {
            K = K - b;
            bNo++;
        }
        readCount++;
    }
    cout << readCount;
}
// MAX: 1000000000
// 1000000000
// 999999999