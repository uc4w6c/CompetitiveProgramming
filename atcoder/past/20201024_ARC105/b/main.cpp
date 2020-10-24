#include <bits/stdc++.h>
using namespace std;

// メモ: 最大公約数を求められているかも

long long GCD(long long a, long long b) {
    if (b == 0) return a;
    else return GCD(b, a % b);
};

int main() {
    int N;
    cin >> N;
    long long A[N];
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }
    long long a = A[0];
    long long b;
    for (int i = 1; i < N; i++) {
        long long b = A[i];
        a = GCD(a, b);
    }
    cout << a;
}
// 5 8
// 3 5
// 2 3
// 1 2
// 1 1

// 10 15
// 5 10
// 5 5
