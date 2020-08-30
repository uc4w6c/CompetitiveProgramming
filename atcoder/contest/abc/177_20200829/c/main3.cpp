#include <bits/stdc++.h>
using namespace std;

// これもTLE
int main() {
    int N;
    cin >> N;
    long long A[N];
    long long modNum = pow(10, 9) + 7;
    long long ans = 0;
    for (int i = 0; i < N; i++) {
        cin >> A[i];

        for (int j = 0; j < i; j++) {
            ans += A[i] * A[j];
            ans %= modNum;
        }
    }

    cout << ans;
}
