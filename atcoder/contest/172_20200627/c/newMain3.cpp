#include <bits/stdc++.h>
using namespace std;

// だめだったけど、まだ諦めない
// 一旦バグ取りしたけど、これだとTLEになるから次で改善する
int main() {
    int N, M;
    long long K;
    cin >> N >> M >> K;

    int aCount = 0, bCount = 0;
    map<int, long long> A, B;
    long long sum = 0;
    bool isMax = false;
    long long num;
    for (int i = 0; i < N; i++) {
        cin >> num;
        if (!isMax) {
            sum += num;
            if (sum >= K) {
                isMax = true;
            }
            if (sum <= K) {
                if (sum > K) break;
                A[i] = sum;
                aCount++;
            }
        }
    }
    sum = 0;
    isMax = false;
    for (int i = 0; i < M; i++) {
        cin >> num;
        if (!isMax) {
            sum += num;
            if (sum >= K) {
                isMax = true;
            }
            if (sum <= K) {
                if (sum > K) break;
                B[i] = sum;
                bCount++;
            }
        }
    }

    // cout << aCount << ", " << bCount << endl; //debug

    // 最後まで行けたなら終わり
    if (A[aCount - 1] + B[bCount - 1] <= K) {
        cout << aCount + bCount;
        return 0;
    }

    if (aCount == 0 && bCount == 0) {
        cout << 0;
        return 0;
    }

    int maxReadCount = 0;
    max(aCount, maxReadCount);
    max(bCount, maxReadCount);

    long long a, b;
    for (int i = aCount; i >= 0; i--) {
        for (int j = bCount; j >= 0; j--) {
            if (i + j <= maxReadCount) break;

            if (i == 0) {
                a = 0;
            } else {
                a = A[i - 1];
            }
            if (j == 0) {
                b = 0;
            } else {
                b = B[j - 1];
            }
            if (a + b > K) continue;
            // cout << i << ", " << j << " :  ";
            // cout << "a:" << a << ", b:" << b << " : " << a + b << endl; // debug
            maxReadCount = max(i + j, maxReadCount);
        }
    }
    cout << maxReadCount;
}
/*
3 5 20
5 5 5
10 1 1 7 1
*/