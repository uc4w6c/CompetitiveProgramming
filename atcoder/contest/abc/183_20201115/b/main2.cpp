#include <bits/stdc++.h>
using namespace std;

// 解説見たあとの間違い修正
int main() {
    double Sx, Sy, Gx, Gy;
    cin >> Sx >> Sy >> Gx >> Gy;
    double ans = (abs(Sx - Gx) / (Sy + Gy)) * Sy;
    // cout << ans << endl; // debug
    if (Sx < Gx) {
        printf("%.7f", Sx + ans);
    } else {
        printf("%.7f", Sx - ans);
    }
}
