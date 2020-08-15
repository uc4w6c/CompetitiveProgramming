#include <bits/stdc++.h>
using namespace std;

// 
struct masu {
    int nextP;
    int score;
};

int main() {
    int N;
    long long K;
    cin >> N >> K;
    int P[N];
    map<int, int> sortP;
    for (int i = 0; i < N; i++) {
        cin >> P[i];
        sortP[P[i]] = i;
    }
    sort(sortP.begin(), sortP.end());
    long long C[N];
    for (int i = 0; i < N; i++) cin >> C[i];

    // 2次元配列 1次元: No, 2次元: Count, Value: Point
    map<int, map<int, long long>> result;
    int nextNo;
    for (int i = 0; i < N; i++) {
        result[sortP[i]][1] = C[sortP[i]];
        nextNo = P[sortP[i]];

        for (int j = 1; j < N; j++) {
            // すでに出てきてたらストップさせる
            if (result[nextNo].count != 0) {
                break;
            }
            result[sortP[i]][j + 1] = C[nextNo - 1];
            nextNo = P[nextNo - 1]
        }
    }

    // MEMO: いやこのやり方だと最大値を求めるのは時間かかるな

    // debug
    for (int i = 0; i < N; i++) {

    }

}
