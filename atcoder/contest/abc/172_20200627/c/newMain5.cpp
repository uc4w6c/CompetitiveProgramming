#include <bits/stdc++.h>
using namespace std;

// だめだったけど、まだ諦めない
// 一旦バグ取りしたけど、これだとTLEになるから次で改善する
int main() {
    int N, M;
    long long K;
    cin >> N >> M >> K;

    int aCount = 0;
    vector<long long> A(N);
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
            int aIndex = lower_bound(A.end(), A.begin(), sum) - A.begin();
            cout << aIndex << endl;
            if (A[aIndex] > sum) {
                if (aIndex != 0) {
                    aIndex--;
                }
            }
            if (A[aIndex] <= sum) {
                maxReadCount = max(i + (aIndex + 1), maxReadCount);
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