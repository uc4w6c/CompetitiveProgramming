#include <bits/stdc++.h>
using namespace std;

// いけた！！！！
// 二分探索より速いぜ
int main() {
    int N, M;
    long long K;
    cin >> N >> M >> K;

    int aCount = 0;
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
                A[i] = K - sum;
                aCount++;
            }
        }
    }
    sum = 0;
    isMax = false;
    int maxReadCount = aCount;
    int aLastNo = aCount;
    for (int i = 0; i < M; i++) {
        cin >> num;
        if (isMax) {
            continue;
        }
        sum += num;
        if (sum >= K) {
            isMax = true;
        }
        if (sum <= K) {
            if (sum > K) break;
            int a;
            for (int j = aLastNo; j >= 0; j--) {
                if (j == 0) {
                    a = K;
                } else {
                    a = A[j - 1];
                }
                if (sum > a) continue;
                // cout << "i:" << i << ", j:" << j;  // debug
                // cout << ", a:" << a << ", sum:" << sum << endl;  // debug
                maxReadCount = max((i + 1) + j, maxReadCount);
                aLastNo = j;
                break;
            }
        }
    }

    cout << maxReadCount;
}
/*
3 5 20
5 5 5
10 1 1 7 1
*/