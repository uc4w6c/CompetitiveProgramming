#include <bits/stdc++.h>
using namespace std;

int main() {
    long long r1, c1, r2, c2;
    r1 = 2, c1 = 3;
    r2 = 998244353, c2 = 998244853;
    cout << r1 - c1 << endl; // -1
    cout << r2 - c2 << endl; // -500

    // この差が3以上ある時 + 方向に動くべき
    // c2が大きいなら
    cout << r2 / r1 << endl;
    cout << r1 * (r2 / r1) << endl;
    cout << c1 * (r2 / r1) << endl;
}
// 100001
// 100001

// 2 3
// 998244353 998244853
// 998244352 1497366528
