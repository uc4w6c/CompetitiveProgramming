#include <bits/stdc++.h>
using namespace std;

// 以下違う
// 最大公約数を求める
int GCD(int a, int b) {
    if (b == 0) return a;
    else return GCD(b, a % b);
};

int main() {
    int N;
    cin >> N;
    vector<int> A(N);
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }
    sort(A.rbegin(), A.rend());

    int maxGCD = 0;
    for (int i = 0; i < N - 1; i++) {
        for (int j = i + 1; j < N; j++) {
            maxGCD = max(GCD(A[i], A[j]), maxGCD);
        }
    }
    cout << maxGCD;
}
