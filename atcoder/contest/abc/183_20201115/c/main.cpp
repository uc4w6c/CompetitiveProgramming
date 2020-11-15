#include <bits/stdc++.h>
using namespace std;

int N;
long long K;
long long T[8][8];
int cnt = 0;

void calc(int nowNo, int nowCnt, long long sumT, vector<bool> routed) {
    if (nowCnt == N) {
        sumT += T[nowNo][0];
        if (sumT == K) {
            cnt++;
        }
        return;
    }

    for (int i = 1; i < N; i++) {
        if (routed[i]) continue;
        routed[i] = true;
        calc(i, nowCnt + 1, sumT + T[nowNo][i], routed);
        routed[i] = false;
    }
};

int main() {
    cin >> N >> K;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cin >> T[i][j];
        }
    }

    vector<bool> routed(N, false);
    for (int i = 1; i < N; i++) {
        routed[i] = true;
        calc(i, 2, T[0][i], routed);
        routed[i] = false;
    }
    cout << cnt;
}
