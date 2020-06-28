#include <bits/stdc++.h>
using namespace std;
typedef long long LL;

// 答え参考
// https://atcoder.jp/contests/AGC044/tasks/agc044_a

LL A, B, C, D;
map<LL, LL> memo;
LL solve(LL N) {
    if (N == 0) return 0;
    if (N == 1) return D;
    if (memo.count(N)) return memo[N];
    LL l2 = (N/2)*2;
    LL r2 = ((N+1)/2)*2;
    LL l3 = (N/3)*3;
    LL r3 = ((N+2)/3)*3;
    LL l5 = (N/5)*5;
    LL r5 = ((N+4)/5)*5;

    cout << "l2:" << l2 << endl;
    cout << "r2:" << r2 << endl;
    cout << "l3:" << l3 << endl;
    cout << "r3:" << r3 << endl;
    cout << "l5:" << l5 << endl;
    cout << "r5:" << r5 << endl;
 
    LL res = 1e18;

    if (N < res/D) res = N*D;
    cout << "res:" << res << endl;
    res = min(res, llabs(l2-N)*D + A + solve(l2/2));
    res = min(res, llabs(r2-N)*D + A + solve(r2/2));

    res = min(res, llabs(l3-N)*D + B + solve(l3/3));
    res = min(res, llabs(r3-N)*D + B + solve(r3/3));

    res = min(res, llabs(l5-N)*D + C + solve(l5/5));
    res = min(res, llabs(r5-N)*D + C + solve(r5/5));

    memo[N] = res;

    return res;
}
 
int main() {
    int T;
    cin >> T;
    for (int t = 0; t < T; t++) {
        memo.clear();
        LL N;
        cin >> N;
        cin >> A >> B >> C >> D;
        cout << solve(N) << "\n";
    }
}
