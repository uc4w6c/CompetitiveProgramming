#include <bits/stdc++.h>
using namespace std;

// 解説みた結果
// あーこれでもTLE。もうちょっと確認する
int main() {
    int N;
    cin >> N;
    vector<int> A(N);
    vector<bool> result(N);
    for (int i = 0; i < N; i++) {
        cin >> A[i];
        result[i] = false;
    }

    sort(A.begin(), A.end());

    for (int i = 0; i < N; i++) {
        if (i > 0 && A[i] == A[i - 1]) {
            result[i - 1] = true;
        }
        if (i + 1 < N && A[i] == A[i + 1]) {
            result[i + 1] = true;
        }
        for (int j = i + 1; j < N; j++) {
            if (A[j] % A[i] == 0) {
                result[j] = true;
            }
        }
    }

    int count = 0;
    for (int i = 0; i < N; i++) {
        if (!result[i]) count++;
        // if (!result[i]) cout << A[i] << endl;
    }
    cout << count;
}
