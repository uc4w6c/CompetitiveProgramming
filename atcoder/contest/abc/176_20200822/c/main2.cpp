#include <bits/stdc++.h>
using namespace std;

// 
int main() {
    int N;
    cin >> N;
    long long A[N];
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }

    long long nowHigh = A[0];
    long long diff;
    long long ans = 0;
    for (int i = 1; i < N; i++) {
        diff = max((nowHigh - A[i]), (long long)0);
        ans += diff;
        nowHigh = max(A[i], nowHigh);
    }
    cout << ans;
}
