#include <bits/stdc++.h>
using namespace std;

int main() {
    double Sx, Sy, Gx, Gy;
    cin >> Sx >> Sy >> Gx >> Gy;
    double ans = abs(Sx - Gx) / (Sy + Gy);
    cout << ans << endl; // debug
    if (Sx < Gx) {
        printf("%.7f", Sx + ans);
    } else {
        printf("%.7f", Sx - ans);
    }
}
// 6(7 - 1) / 3(1 + 2)  + 1
// 2(x)(3 - 1) / 3(y)(1 + 2) + 1
