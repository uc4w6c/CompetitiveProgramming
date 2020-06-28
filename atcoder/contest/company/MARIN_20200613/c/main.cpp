#include <bits/stdc++.h>
using namespace std;

// 一旦そのまま書いてみる 時間足りなくなるパターンで
// #define MAX 200000
// int A[MAX];

struct Lamp {
    map<int, int> strong;
};


int main() {
    int N, K;
    cin >> N >> K;

    Lamp A[N];
    for (int i = 0; i < N; i++) cin >> A[i].strong[0];

    int strong;
    for (int i = 1; i <= K; i++) {
        for (int j = 0; j < N; j++) {
            strong = A[j].strong[i - 1];
            // cout << strong << endl;
            for (int k = -strong; k <= strong; k++) {
                if (j + k < 0) continue; // 0以下はデータなし
                if (j + k >= N) continue; // N以上はデータなし
                A[j + k].strong[i]++;
            }
            // A[j].strong[i]++; // 自らの電球をプラス うえのloopに入ってそう
        }
    }

    // result print
    for (int i = 0; i < N; i++) {
        if (i != 0) {
            cout << " ";
        }
        cout << A[i].strong[K];
    }
}
