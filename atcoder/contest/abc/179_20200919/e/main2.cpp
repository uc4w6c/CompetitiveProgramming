#include <bits/stdc++.h>
using namespace std;

// 以下WAと1つTLEになった
int main() {
    long long N;
    int X, M;
    cin >> N >> X >> M;
    long long A = X % M;
    long long ans = A;
    map<long long, int> ansNo; // 1始まりにする
    map<int, long long> historyA;
    ansNo[A] = 1;
    historyA[0] = A;
    int loopPoint = N;
    long long endA = 0;
    for (int i = 1; i < N; i++) {
        A = (A * A) % M;
        if (A == 0) break;

        if (ansNo[A] != 0) {
            loopPoint = i;
            endA = A;
            break;
        }
        ansNo[A] = i + 1;
        historyA[i] = A;
        ans += A;
    }

    // cout << loopPoint << endl; // debug
    // cout << ansNo[endA] << endl; // debug
    if (loopPoint != N) {
        int modPoint = (N - loopPoint) % (loopPoint - ansNo[endA] + 1);
        long long modAns = 0;
        long long tempAns = 0;
        for (int i = ansNo[endA] - 1; i < loopPoint; i++) {
            if (i < ansNo[endA] - 1 + modPoint) {
                modAns += historyA[i];
            }
            tempAns += historyA[i];
        }
        ans += modAns;
        int loopCount = ((N - loopPoint - 1) / (loopPoint - ansNo[endA] + 1));
        // cout << tempAns << endl; // debug
        ans += tempAns * loopCount;
    }
    cout << ans;
}
// 492443256176507
// 492443256176507