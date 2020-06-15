#include <bits/stdc++.h>
using namespace std;

// 解説みた結果
// これでOK
int main() {
    int N;
    cin >> N;
    vector<int> A(N);
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }

    sort(A.begin(), A.end());
    vector<bool> dp(A[N-1]+1);

    for (int i = 0; i < A[N-1] + 1; i++) dp[i] = true;

    for (int i = 0; i < N; i++) {
        if (i > 0 && A[i] == A[i - 1]) {
            dp[A[i]] = false;
            continue;
        }
        for (int j = A[i]; j <= A[N-1]; j += A[i]) {
            if (j > A[i]) {
                dp[j] = false;
            }
        }
    }

    int count = 0;
    for (int i = 0; i < N; i++) {
        if (dp[A[i]]) count++;

        // debug
        // cout << A[i] << " : ";
        // if (dp[A[i]]) cout << A[i];
        // cout << endl;
    }
    cout << count;
}
/*
10
33 18 45 28 8 19 89 86 2 4

2
19
33
45
89
*/