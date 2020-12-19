#include <bits/stdc++.h>
using namespace std;

// 最大公約数を求める
long long GCD(long long a, long long b) {
    if (b == 0) return a;
    else return GCD(b, a % b);
};
long long LCM(long long a, long long b) {
    int g = GCD(a, b);
    return a * b / g;
};

int main() {
    long long N;
    cin >> N;
    long long A[N];
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }

    long long lcm = A[0];
    for (int i = 1; i < N; i++) {
        lcm = LCM(lcm, A[i]);
    }

    long long sum = 0;
    for (int i = 0; i < N; i++) {
        sum += lcm / A[i];
    }
    // cout << lcm << endl; // debug
    // cout << sum << endl; // debug
    printf("%.7f", ((double)lcm / sum));
}
