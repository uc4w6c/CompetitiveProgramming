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
        if (A[0].strong[i] == N && A[N - 1].strong[i] == N) break;
    }

    // debug
    for (int j = 1; j < K; j++) {
        cout << j << ": ";
        for (int i = 0; i < N; i++) {
            if (i != 0) {
            cout << " ";
            }
            cout << A[i].strong[j];
        }
        cout << endl;
    }

    // result print
    for (int i = 0; i < N; i++) {
        if (i != 0) {
            cout << " ";
        }
        cout << A[i].strong[K];
    }
}
/*
10 10 
1 0 0 0 0 0 0 0 0 0
1: 1 2 1 1 1 1 1 1 1 1
2: 2 3 3 4 3 3 3 3 3 2
3: 4 5 6 6 7 7 6 7 5 4
4: 8 8 8 9 9 9 9 8 8 7
5: 9 9 10 10 10 10 10 10 10 9
6: 10 10 10 10 10 10 10 10 10 10
7: 10 10 10 10 10 10 10 10 10 10
8: 10 10 10 10 10 10 10 10 10 10
9: 10 10 10 10 10 10 10 10 10 10

10 10
10 0 10 0 10 0 10 0 10 0
1: 5 6 5 6 5 6 5 6 5 6
2: 6 8 8 10 10 10 9 9 7 7
3: 8 9 10 10 10 10 10 9 9 9
4: 10 10 10 10 10 10 10 10 10 9
5: 10 10 10 10 10 10 10 10 10 10
6: 10 10 10 10 10 10 10 10 10 10
7: 10 10 10 10 10 10 10 10 10 10
8: 10 10 10 10 10 10 10 10 10 10
9: 10 10 10 10 10 10 10 10 10 10

10 10 
0 0 0 0 0 0 0 0 0 0 
1: 1 1 1 1 1 1 1 1 1 1
2: 2 3 3 3 3 3 3 3 3 2
3: 4 5 6 6 7 7 6 6 5 4
4: 7 8 8 9 9 9 9 8 8 7
5: 9 9 10 10 10 10 10 10 9 9
6: 10 10 10 10 10 10 10 10 10 10
7: 10 10 10 10 10 10 10 10 10 10
8: 10 10 10 10 10 10 10 10 10 10
9: 10 10 10 10 10 10 10 10 10 10
*/