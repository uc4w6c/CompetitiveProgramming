#include <bits/stdc++.h>
using namespace std;

// C - Replacing Integer
// 以下でAC
int main() {
    long long N, K;
    cin >> N >> K;
    if (N > K) N = N % K;
    // if (N > K) cout << min(N, abs(N - K));
    // if (N < K) cout << N;
    if (N < K) cout << min(N, abs(N - K));
    if (N == K) cout << 0;
}
