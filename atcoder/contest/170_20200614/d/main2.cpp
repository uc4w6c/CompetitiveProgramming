#include <bits/stdc++.h>
using namespace std;

// 
int main() {
    int N;
    cin >> N;
    vector<int> A(N);
    for (int i = 0; i < N; i++) cin >> A[i];

    sort(A.begin(), A.end(), greater<int>());

    int count = 0; // 割り切れた数を数える
    for (int i = 0; i < N; i++) {
        // 無理やりだけど・・・
        if (i > 0 && A[i] == A[i - 1]) {
            count++;
            continue;
        }
        if (i + 1 < N && A[i] == A[i + 1]) {
            count++;
            continue;
        }
        for (int j = N - 1; j > i; j--) {
            // cout << "i" << i << ":" << A[i];
            // cout << "j" << j << ":" << A[j] << endl;

            if (A[i] == A[j]) {
                count++;
                break;
            }
            if (A[i] < A[j] * 2) {
                break;
            }
            if (A[i] % A[j] == 0) {
                count++;
                break;
            }
        }
    }
    cout << (N - count);
}
