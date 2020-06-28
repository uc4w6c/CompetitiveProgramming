#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P  = pair<int, int>;

// 答えみた
// imos法?
int main() {
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    for (int& i : a) cin >> i;
    for (int t = 0; t < min(50, k); ++t) {
        vector<int> b(n, 0);
        // cout << "## " << t << endl;  // debug
        for (int i = 0; i < n; ++i) {
            ++b[max(0, i - a[i])];
            if (i + a[i] + 1 < n) --b[i + a[i] + 1];
        }
        // cout << "before: ";  // debug
        // for (int i = 0; i < n; ++i) cout << b[i] << " ";

        for (int i = 1; i < n; ++i) b[i] += b[i - 1];

        // cout << endl << "after: ";  // debug
        // for (int i = 0; i < n; ++i) cout << b[i] << " ";

        a = b;
        // cout << endl;  // debug
    }
    for (int i : a) cout << i << " ";
    return 0;
}
/*
10 10 
0 0 0 0 0 0 0 0 0 0 0


*/