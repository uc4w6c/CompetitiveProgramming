#include <bits/stdc++.h>
using namespace std;

// 以下タイムアウトした。そもそもPAIZAにタイムアウトあるの知らなかったー
#define MAX 101
int N, K;
vector<int> A(MAX);
int countResult = 0;

void calc(vector<int> A, int nowNo, int rowNo) {
    if (nowNo > N) {
        int diffSum = 0;
        int aNowPoint = 0;
        int bNowPoint = 0;
        for (int i = 1; i <= N * 2; i++) {
            if (A[bNowPoint] == i) {
                bNowPoint++;
                continue;
            }
            // cout << A[aNowPoint] << " - " << i << endl; // debug
            diffSum += abs(A[aNowPoint] - i);
            aNowPoint++;
        }
        // cout << endl; // debug
        if (diffSum <= K) {
            countResult++;
        }
        return;
    }

    for (int i = rowNo; i <= N * 2; i++) {
        A[nowNo - 1] = i;
        calc(A, nowNo + 1, i + 1);
    }
}

int main() {
    cin >> N >> K;

    calc(A, 1, 1);
    /*for (int i = 1; i <= N + 1; i++) {
        cout << " i = " << i << endl;
        calc(A, 1, i);
    }*/
    cout << countResult;
}
