#include <bits/stdc++.h>
using namespace std;

// 
int main() {
    int N;
    cin >> N;
    int A[N];
    for (int i = 0; i < N; i++) cin >> A[i];

    // メモ　並び替えればいけるか  どっち側からか計算していく

    // 愚直に
    int count = 0;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            if (i == j) {
                continue;
            }
            if (A[i] == A[j]) {
                continue;
            }
            if (A[i] % A[j] == 0) {
                count++;
                break;
            }
        }
    }
    cout << (N - count);
}
