#include <bits/stdc++.h>
using namespace std;

// 最小公約数を求める

long long GCD(long long a, long long b) {
    if (b == 0) return a;
    else return GCD(b, a % b);
};
long long LCM(long long a, long long b) {
    int g = GCD(a, b);
    return a * b / g;
};

int main() {
    int N;
    cin >> N;
    int A[N];
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }

    int lcm = A[0];
    for (int i = 0; i < N; i++) {
        lcm = LCM(A[i], lcm);
    }
    cout << lcm;
}