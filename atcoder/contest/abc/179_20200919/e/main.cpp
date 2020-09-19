#include <bits/stdc++.h>
using namespace std;

// 
int main() {
    long long N;
    int X, M;
    cin >> N >> X >> M;
    int A = X % M;
    long long ans = A;
    for (int i = 1; i < N; i++) {
        A = (A * A) % M;
        if (A == 0) break;
        ans += A;
    }
    cout << ans;
}
