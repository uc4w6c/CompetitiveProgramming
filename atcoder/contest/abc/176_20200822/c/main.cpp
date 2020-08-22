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
    double ans = A[0];
    for (int i = 1; i < N; i++) {
        diff = max((nowHigh - A[i]), (long long)0);
        // cout << diff << endl; // debug OK
        if (diff == 0) {
            ans = (ans * i / (i + 1));
        } else {
            ans = (diff / (i + 1)) + (ans * i / (i + 1));
        }
        cout << ans << endl;  // debug
        nowHigh = max(A[i], nowHigh);
    }
    cout << ans;
}
