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
        }
        if (sum <= K) {
            isMax = true;
            if (sum > K) break;
            A[i] = sum;
            aCount++;
        }
    }
    sum = 0;
    isMax = false;
    for (int i = 0; i < M; i++) {
        cin >> num;
        if (!isMax) {
            sum += num;
        }
        if (sum <= K) {
            if (sum > K) break;
            B[i] = sum;
            bCount++;
        }
    }

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
    /*
    if (aCount != 0) {
        maxReadCount = A[aCount - 1];
    }
    if (bCount != 0) {
        maxReadCount = B[bCount - 1];
    }
    */

    long long a, b;
    for (int i = aCount - 1; i >= 0; i--) {
        for (int j = bCount - 1; j >= 0; j--) {
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
            cout << i << ", " << j << " :  " << a + b << endl; // debug
            maxReadCount = max(i + j, maxReadCount);
        }
    }
    cout << maxReadCount;
}