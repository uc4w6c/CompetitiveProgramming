#include <bits/stdc++.h>
using namespace std;

// 
int main() {
    long long N;
    int X, M;
    cin >> N >> X >> M;
    long long A = X % M;
    long long ans = A;
    vector<bool> calcA(M + 1, false);
    calcA[A] = true;
    for (int i = 1; i < N; i++) {
        A = (A * A) % M;
        if (A == 0) break;
        // cout << A << endl;  // debug
        ans += A;
        if (A == 1) {
            ans += N - i;
            break;
        }
        if (calcA[A]) {
            cout << "Yes";
            break;
        }
        calcA[A] = true;
    }
    cout << ans;
}
